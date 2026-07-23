/*
 * XREFs of KiPreprocessFlushTb @ 0x14039D3D0
 * Callers:
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushEntireTb @ 0x1405B9E70 (KeFlushEntireTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 * Callees:
 *     KiIsFlushEntire @ 0x140486514 (KiIsFlushEntire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiPreprocessFlushTb(char a1, unsigned int a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 v8; // ax
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  unsigned __int64 v10; // r9
  char result; // al
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_16;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_20;
  if ( !a1 )
  {
    if ( (KiFlushPcid & 3) != 1 )
      goto LABEL_5;
LABEL_20:
    *a4 = 1;
    return 0;
  }
  if ( (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a2) )
  {
    *a4 = 1;
    return 0;
  }
LABEL_5:
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_16:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
    goto LABEL_20;
  _InterlockedOr(v12, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
  CurrentPrcb = KeGetCurrentPrcb();
  *a5 = CurrentIrql;
  v8 = 0;
  ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
  while ( 1 )
  {
    if ( v8 >= ActiveProcessors->Count )
    {
      result = 1;
      *a4 = 0;
      return result;
    }
    v10 = ActiveProcessors->Bitmap[v8];
    if ( v10 )
    {
      if ( v8 != CurrentPrcb->Group || v10 != CurrentPrcb->GroupSetMember )
        break;
    }
    ++v8;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  result = 0;
  *a4 = 1;
  return result;
}
