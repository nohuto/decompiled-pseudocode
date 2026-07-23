/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x14043C4C0
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HvlpPrepareFlushHeader @ 0x14043C710 (HvlpPrepareFlushHeader.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
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
  __int64 CurrentIrql; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 HypercallCachedPages; // rcx
  struct _KPRCB *v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *SchedulerAssist; // r8
  int v18; // ett
  __int128 v20; // [rsp+30h] [rbp-31h]
  __int64 QuadPart; // [rsp+48h] [rbp-19h]
  _BYTE v24[7]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v25[25]; // [rsp+77h] [rbp+16h] BYREF

  v20 = 0LL;
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
      *((_QWORD *)&v20 + 1) = CurrentPrcb;
      goto LABEL_12;
    }
    v4 = 2;
    p_Next = (_QWORD *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFF000uLL);
    if ( (((unsigned __int64)v24 ^ (unsigned __int64)v25) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      p_Next = v24;
    BYTE8(v20) = KeGetCurrentIrql();
    v5 = BYTE8(v20);
    if ( BYTE8(v20) < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    Next = MmGetPhysicalAddress(p_Next);
    QuadPart = Next.QuadPart;
  }
  else
  {
    BYTE8(v20) = KeDisableInterrupts();
    v4 = 4;
    HIDWORD(v20) = 1;
    v5 = BYTE8(v20);
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
    QuadPart = Next.QuadPart;
  }
  CurrentPrcb = (struct _KPRCB *)*((_QWORD *)&v20 + 1);
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
        LOBYTE(v13) = v5;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      result = v5;
      __writecr8(v5);
    }
  }
  else
  {
    v15 = KeGetCurrentPrcb();
    if ( (BYTE12(v20) & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages;
    }
    else if ( (BYTE12(v20) & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages + 4096;
    }
    result = QuadPart;
    *(_QWORD *)(HypercallCachedPages + 16) = QuadPart;
    if ( BYTE8(v20) )
    {
      v16 = KeGetCurrentPrcb();
      SchedulerAssist = v16->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v18 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v18 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
      _enable();
    }
  }
  return result;
}
