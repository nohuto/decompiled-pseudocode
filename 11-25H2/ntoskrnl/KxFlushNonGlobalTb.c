/*
 * XREFs of KxFlushNonGlobalTb @ 0x14027139C
 * Callers:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1402703B8 (KxSetTimeStampBusy.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140313C70 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiWaitForRequestBarrier @ 0x14032BC30 (KiIpiWaitForRequestBarrier.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(__int64 a1)
{
  int v1; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rsi
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !v1 )
  {
    _InterlockedOr(v14, 0);
    p_StaticAffinity = &CurrentPrcb->StaticAffinity;
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
      p_StaticAffinity->KeFlushTbAffinity.Bitmap[v7 >> 6] &= ~(1LL << (v7 & 0x3F));
    if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(CurrentPrcb, &CurrentPrcb->StaticAffinity) )
      goto LABEL_7;
LABEL_14:
    KiIpiSendRequest((_DWORD)CurrentPrcb, v8, (_DWORD)p_StaticAffinity, 0, 1LL);
    v11 = __readcr3();
    __writecr3(v11);
    KiIpiWaitForRequestBarrier(CurrentPrcb);
    goto LABEL_15;
  }
  LODWORD(p_StaticAffinity) = 0;
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
      KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, 1LL);
      v10 = __readcr3();
      __writecr3(v10);
      KiIpiWaitForRequestBarrier(CurrentPrcb);
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
