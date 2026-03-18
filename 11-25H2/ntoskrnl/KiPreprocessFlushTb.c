/*
 * XREFs of KiPreprocessFlushTb @ 0x140403650
 * Callers:
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     KeFlushEntireTb @ 0x1405B89A0 (KeFlushEntireTb.c)
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 * Callees:
 *     KiIsFlushEntire @ 0x1404037B0 (KiIsFlushEntire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
