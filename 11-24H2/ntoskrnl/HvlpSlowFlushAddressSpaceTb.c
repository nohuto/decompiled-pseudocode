/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpPrepareFlushHeader @ 0x14042DB20 (HvlpPrepareFlushHeader.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  char v4; // r12
  unsigned __int8 v5; // r14
  _QWORD *p_Next; // rdi
  PHYSICAL_ADDRESS Next; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // r13
  __int64 v11; // rdx
  __int64 CurrentIrql; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 HypercallCachedPages; // rcx
  struct _KPRCB *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *SchedulerAssist; // r8
  int v19; // ett
  __int128 v21; // [rsp+30h] [rbp-31h]
  __int64 QuadPart; // [rsp+48h] [rbp-19h]
  _BYTE v25[7]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v26[25]; // [rsp+77h] [rbp+16h] BYREF

  v21 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v9->Next;
    if ( v9 )
    {
      Next = (PHYSICAL_ADDRESS)v9[1].Next;
      v4 = 1;
      v10 = v9;
      QuadPart = Next.QuadPart;
      v5 = (unsigned __int8)CurrentPrcb;
      *((_QWORD *)&v21 + 1) = CurrentPrcb;
      goto LABEL_12;
    }
    v11 = -4096LL;
    v4 = 2;
    p_Next = (_QWORD *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFF000uLL);
    if ( (((unsigned __int64)v25 ^ (unsigned __int64)v26) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      p_Next = v25;
    BYTE8(v21) = KeGetCurrentIrql();
    v5 = BYTE8(v21);
    if ( BYTE8(v21) < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
      }
    }
    Next = MmGetPhysicalAddress(p_Next);
    QuadPart = Next.QuadPart;
  }
  else
  {
    BYTE8(v21) = KeDisableInterrupts();
    v4 = 4;
    HIDWORD(v21) = 1;
    v5 = BYTE8(v21);
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
    QuadPart = Next.QuadPart;
  }
  CurrentPrcb = (struct _KPRCB *)*((_QWORD *)&v21 + 1);
  v10 = 0LL;
LABEL_12:
  LOBYTE(v3) = a3;
  HvlpPrepareFlushHeader(p_Next, a1, a2, v3);
  result = HvcallInitiateHypercall(2);
  HypercallCachedPages = 0LL;
  if ( (v4 & 1) != 0 )
  {
    v10[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    return (__int64)RtlpInterlockedPushEntrySList(&CurrentPrcb->HypercallPageList, v10);
  }
  else if ( (v4 & 2) != 0 )
  {
    if ( v5 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = v5;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      result = v5;
      __writecr8(v5);
    }
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (BYTE12(v21) & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v16->HypercallCachedPages;
    }
    else if ( (BYTE12(v21) & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v16->HypercallCachedPages + 4096;
    }
    result = QuadPart;
    *(_QWORD *)(HypercallCachedPages + 16) = QuadPart;
    if ( BYTE8(v21) )
    {
      v17 = KeGetCurrentPrcb();
      SchedulerAssist = v17->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v19 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v19 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
      _enable();
    }
  }
  return result;
}
