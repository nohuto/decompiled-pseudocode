/*
 * XREFs of MiMarkPendingCommitRequests @ 0x140459440
 * Callers:
 *     MiComputeUnusedSegmentReduction @ 0x1404592F0 (MiComputeUnusedSegmentReduction.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

unsigned __int64 __fastcall MiMarkPendingCommitRequests(__int64 a1)
{
  _DWORD *v1; // rbp
  __int64 **v3; // rsi
  unsigned __int64 v4; // rbx
  KIRQL v5; // al
  __int64 *v6; // rdx
  unsigned __int8 v7; // r14
  unsigned __int64 v9; // rcx

  v1 = (_DWORD *)(a1 + 1728);
  v3 = (__int64 **)(a1 + 1944);
  v4 = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v6 = *v3;
  v7 = v5;
  while ( v6 != (__int64 *)v3 )
  {
    v9 = v4 + v6[3];
    if ( v9 <= v4 )
    {
      KeSetEvent((PRKEVENT)(a1 + 1904), 0, 0);
      break;
    }
    *((_BYTE *)v6 + 71) |= 0x40u;
    v4 = v9;
    v6 = (__int64 *)*v6;
  }
  MiReleaseSpinLockExclusive(v1, v7);
  return v4;
}
