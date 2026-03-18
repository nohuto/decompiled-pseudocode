/*
 * XREFs of MiSetDeleteOnCloseTimer @ 0x140458F14
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140458D80 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiSetDeleteOnCloseTimer(__int64 a1)
{
  _DWORD *v1; // rdi
  KIRQL v3; // si

  v1 = (_DWORD *)(a1 + 1728);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  if ( *(_QWORD *)(a1 + 1976) == a1 + 1976 )
  {
    *(_BYTE *)(a1 + 2072) = 0;
  }
  else if ( !*(_BYTE *)(a1 + 2072) )
  {
    *(_BYTE *)(a1 + 2072) = 1;
    KiSetTimerEx(a1 + 2008, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
  }
  return MiReleaseSpinLockExclusive(v1, v3);
}
