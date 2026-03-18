/*
 * XREFs of MiCheckAndUpdatePagingFileMinimum @ 0x14066E8DC
 * Callers:
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

_BOOL8 __fastcall MiCheckAndUpdatePagingFileMinimum(unsigned int *a1, unsigned int a2)
{
  _DWORD *v2; // rsi
  KIRQL v5; // al
  unsigned int v6; // ecx
  BOOL v7; // ebx

  v2 = a1 + 50;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 50);
  v6 = *a1;
  if ( a2 <= *a1 )
    a1[2] = a2;
  v7 = a2 <= v6;
  MiReleaseSpinLockExclusive(v2, v5);
  return v7;
}
