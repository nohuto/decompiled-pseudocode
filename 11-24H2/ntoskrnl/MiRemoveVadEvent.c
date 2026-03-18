/*
 * XREFs of MiRemoveVadEvent @ 0x140678550
 * Callers:
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140429670 (MiUnlockVadCore.c)
 */

__int64 __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  unsigned __int8 v5; // dl
  _QWORD *v6; // r8
  __int64 v7; // rcx

  v4 = 0LL;
  v5 = MiLockVadCore(a1, 0);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( v6 == a2 )
        break;
      v4 = v6;
      v6 = (_QWORD *)*v6;
      if ( !v7 )
        return MiUnlockVadCore(a1, v5);
    }
    if ( v4 )
      *v4 = v7;
    else
      *(_QWORD *)(a1 + 56) = v7 | *(_QWORD *)(a1 + 56) & 0xFLL;
  }
  return MiUnlockVadCore(a1, v5);
}
