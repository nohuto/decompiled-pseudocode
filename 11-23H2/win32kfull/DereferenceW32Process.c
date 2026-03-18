/*
 * XREFs of DereferenceW32Process @ 0x1C0070A00
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0298F2C (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     DereferenceW32ProcessEx @ 0x1C0070E10 (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall DereferenceW32Process(__int64 a1)
{
  return DereferenceW32ProcessEx(a1, 1LL);
}
