/*
 * XREFs of HvlSetQpcBias @ 0x1404F57A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlSetQpcBias(__int64 a1)
{
  char v2; // r12
  unsigned __int8 v3; // r14
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v7; // rax
  _SLIST_ENTRY *v8; // r15
  int v9; // edx
  unsigned __int8 CurrentIrql; // cl
  __int16 v11; // ax
  __int64 HypercallCachedPages; // rcx
  __int16 v13; // bx
  struct _KPRCB *v14; // rax
  struct _KPRCB *v15; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int128 v20; // [rsp+28h] [rbp-49h]
  PHYSICAL_ADDRESS v21; // [rsp+40h] [rbp-31h]
  _BYTE v22[7]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v23[41]; // [rsp+6Fh] [rbp-2h] BYREF

  v20 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v7->Next;
    if ( v7 )
    {
      Next = (PHYSICAL_ADDRESS)v7[1].Next;
      v2 = 1;
      v8 = v7;
      v21 = Next;
      v3 = (unsigned __int8)CurrentPrcb;
      *((_QWORD *)&v20 + 1) = CurrentPrcb;
      goto LABEL_12;
    }
    v9 = -4096;
    v2 = 2;
    p_Next = (_QWORD *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFF000uLL);
    if ( (((unsigned __int64)v22 ^ (unsigned __int64)v23) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      p_Next = v22;
    BYTE8(v20) = KeGetCurrentIrql();
    v3 = BYTE8(v20);
    if ( BYTE8(v20) < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
      }
    }
    Next = MmGetPhysicalAddress(p_Next);
    v21 = Next;
  }
  else
  {
    BYTE8(v20) = KeDisableInterrupts();
    v2 = 4;
    HIDWORD(v20) = 1;
    v3 = BYTE8(v20);
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
    v21 = Next;
  }
  CurrentPrcb = (struct _KPRCB *)*((_QWORD *)&v20 + 1);
  v8 = 0LL;
LABEL_12:
  *(_DWORD *)p_Next = 18;
  p_Next[1] = a1;
  v11 = HvcallInitiateHypercall(111);
  HypercallCachedPages = 0LL;
  v13 = v11;
  if ( (v2 & 1) != 0 )
  {
    v8[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(&CurrentPrcb->HypercallPageList, v8);
  }
  else if ( (v2 & 2) != 0 )
  {
    if ( v3 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      __writecr8(v3);
    }
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    if ( (BYTE12(v20) & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages;
    }
    else if ( (BYTE12(v20) & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = v21;
    if ( BYTE8(v20) )
    {
      v15 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
      _enable();
    }
  }
  return v13 != 0 ? 0xC0000001 : 0;
}
