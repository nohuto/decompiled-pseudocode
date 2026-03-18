/*
 * XREFs of KxFlushNonGlobalTb @ 0x1403B0E50
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402916C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140297D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KxSetTimeStampBusy @ 0x1403B0DCC (KxSetTimeStampBusy.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(__int64 a1)
{
  int v1; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  char *p_StaticAffinity; // rsi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  unsigned int v7; // r8d
  int v8; // r11d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 12LL;
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !v1 )
  {
    _InterlockedOr(v14, 0);
    p_StaticAffinity = (char *)&CurrentPrcb->StaticAffinity;
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    v7 = *((_DWORD *)KiGlobalState + CurrentPrcb->Number);
    if ( CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count > v7 >> 6 )
      *(_QWORD *)&p_StaticAffinity[8 * (v7 >> 6) + 8] &= ~(1LL << (v7 & 0x3F));
    if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                          (__int64)CurrentPrcb,
                          &CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count) )
      goto LABEL_7;
LABEL_14:
    KiIpiSendRequest((__int64)CurrentPrcb, v8, p_StaticAffinity, 0LL, 1LL);
    v11 = __readcr3();
    __writecr3(v11);
    KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
    goto LABEL_15;
  }
  p_StaticAffinity = 0LL;
  v8 = 1;
  if ( !KiKvaShadow )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_7:
      v9 = __readcr3();
      __writecr3(v9);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
      v13 = __readcr3();
      __writecr3(v13);
    }
    else
    {
      KiIpiSendRequest((__int64)CurrentPrcb, 1, 0LL, 0LL, 1LL);
      v10 = __readcr3();
      __writecr3(v10);
      KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
    }
    _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
  }
LABEL_15:
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
