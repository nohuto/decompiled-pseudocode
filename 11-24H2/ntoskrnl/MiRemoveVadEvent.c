/*
 * XREFs of MiRemoveVadEvent @ 0x1406796DC
 * Callers:
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
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
