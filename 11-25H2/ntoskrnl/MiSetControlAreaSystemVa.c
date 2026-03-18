/*
 * XREFs of MiSetControlAreaSystemVa @ 0x1404ABEF0
 * Callers:
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiSetControlAreaSystemVa(__int64 a1, int a2)
{
  KIRQL v4; // al
  int v5; // r9d
  unsigned int v6; // r8d
  int v7; // r9d

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 56) |= 0x20000000u;
  v6 = v5 & 0xFFFEFFFF;
  v7 = v5 | 0x10000;
  if ( a2 < 1 )
    v7 = v6;
  *(_DWORD *)(a1 + 92) = v7;
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v4);
}
