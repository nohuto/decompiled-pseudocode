/*
 * XREFs of MiAllUnusedSegmentsAreModNoWrite @ 0x1403F8494
 * Callers:
 *     MiDeleteCachedEntry @ 0x1403F836C (MiDeleteCachedEntry.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiAllUnusedSegmentsAreModNoWrite(__int64 a1)
{
  volatile signed __int32 *v1; // rsi
  unsigned int v2; // edi
  _QWORD **v3; // rbx
  KIRQL v4; // dl
  _QWORD *i; // rcx
  _QWORD *v6; // rax

  v1 = (volatile signed __int32 *)(a1 + 1728);
  v2 = 1;
  v3 = (_QWORD **)(a1 + 2096);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1728));
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = i - 1;
    if ( (__int64)*(i - 1) >= 0 )
      v6 = (_QWORD *)*(i - 11);
    if ( (v6[7] & 8) == 0 )
    {
      v2 = 0;
      break;
    }
  }
  MiReleaseSpinLockShared(v1, v4);
  return v2;
}
