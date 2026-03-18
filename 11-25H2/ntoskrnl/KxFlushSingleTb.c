/*
 * XREFs of KxFlushSingleTb @ 0x1405C52F8
 * Callers:
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequestEx @ 0x14032DBF0 (KiIpiSendRequestEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  unsigned int v5; // r15d
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  char *p_StaticAffinity; // rsi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF

  v3 = 2147483650LL;
  *((_QWORD *)&v12 + 1) = a2;
  *(_QWORD *)&v12 = a1;
  v5 = 1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    p_StaticAffinity = 0LL;
  }
  else
  {
    _InterlockedOr(v11, 0);
    p_StaticAffinity = (char *)&CurrentPrcb->StaticAffinity;
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    v5 = 0;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v5,
    p_StaticAffinity,
    &v12,
    v3,
    (__int64)KiFlushSingleTbWorker,
    (__int64)&v12);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
