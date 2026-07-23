/*
 * XREFs of KxFlushNonGlobalTb @ 0x14039F660
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 * Callees:
 *     KiIpiWaitForRequestBarrier @ 0x1402A12C0 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402A6840 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KxSetTimeStampBusy @ 0x14039F5DC (KxSetTimeStampBusy.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  unsigned __int64 v19; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-38h] BYREF

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
    _InterlockedOr(v20, 0);
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
    v14 = __readcr3();
    __writecr3(v14);
    KiIpiWaitForRequestBarrier((__int64)CurrentPrcb, v15, v16, v17);
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
      v19 = __readcr3();
      __writecr3(v19);
    }
    else
    {
      KiIpiSendRequest((__int64)CurrentPrcb, 1, 0LL, 0LL, 1LL);
      v10 = __readcr3();
      __writecr3(v10);
      KiIpiWaitForRequestBarrier((__int64)CurrentPrcb, v11, v12, v13);
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
