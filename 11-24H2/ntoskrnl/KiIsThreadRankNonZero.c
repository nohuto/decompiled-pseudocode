/*
 * XREFs of KiIsThreadRankNonZero @ 0x1402F4FE0
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  v4 = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    v8 = v7 + CurrentPrcb->ScbOffset;
    if ( a2 )
    {
      if ( *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
      {
        v9 = v7 + CurrentPrcb->ScbOffset;
        do
        {
          if ( (*(_BYTE *)(v9 + 112) & 2) != 0 )
          {
            v4 = -1;
            goto LABEL_16;
          }
          v9 = *(_QWORD *)(v9 + 416);
        }
        while ( v9 );
        do
        {
          v4 = *(_DWORD *)(v8 + 124);
          if ( v4 )
            break;
          v8 = *(_QWORD *)(v8 + 416);
        }
        while ( v8 );
      }
    }
    else
    {
      do
      {
        v4 = (*(unsigned __int16 *)(v8 + 112) >> 3) & 1;
        if ( v4 )
          break;
        v8 = *(_QWORD *)(v8 + 416);
      }
      while ( v8 );
    }
  }
LABEL_16:
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v4 != 0;
}
