/*
 * XREFs of MiRemoveVadEvent @ 0x14066CC00
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rsi
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // dl
  unsigned __int64 *i; // rax
  unsigned __int64 v9; // rcx

  v2 = 0LL;
  p_Blink = 0LL;
  if ( MmVadEventBlockFixEnabled )
  {
    v6 = MiLockVadCore(a1, 0);
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v6 = MiLockWorkingSetExclusive((__int64)p_Blink);
  }
  v7 = v6;
  for ( i = (unsigned __int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (unsigned __int64 *)*i )
  {
    v9 = *i;
    if ( i == a2 )
    {
      if ( v2 )
        *v2 = v9;
      else
        *(_QWORD *)(a1 + 56) = v9 | *(_QWORD *)(a1 + 56) & 0xFLL;
      break;
    }
    v2 = i;
  }
  if ( MmVadEventBlockFixEnabled )
    MiUnlockVadCore(a1, v7);
  else
    MiUnlockWorkingSetExclusive((__int64)p_Blink, v7);
}
