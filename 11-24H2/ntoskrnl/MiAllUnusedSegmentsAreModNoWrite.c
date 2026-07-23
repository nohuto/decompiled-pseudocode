/*
 * XREFs of MiAllUnusedSegmentsAreModNoWrite @ 0x1403EE5AC
 * Callers:
 *     MiDeleteCachedEntry @ 0x1403EE484 (MiDeleteCachedEntry.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiAllUnusedSegmentsAreModNoWrite(__int64 a1)
{
  volatile signed __int32 *v1; // rsi
  unsigned int v2; // edi
  _QWORD **v3; // rbx
  KIRQL v4; // dl
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *i; // rcx
  _QWORD *v8; // rax

  v1 = (volatile signed __int32 *)(a1 + 1728);
  v2 = 1;
  v3 = (_QWORD **)(a1 + 2096);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1728));
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    v8 = i - 1;
    if ( (__int64)*(i - 1) >= 0 )
      v8 = (_QWORD *)*(i - 11);
    if ( (v8[7] & 8) == 0 )
    {
      v2 = 0;
      break;
    }
  }
  MiReleaseSpinLockShared(v1, v4, v5, v6);
  return v2;
}
