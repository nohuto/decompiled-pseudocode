/*
 * XREFs of MiGetExtendedLoaderBitmap @ 0x1404F89DC
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140A8FCB0 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A8FDB8 (MiCaptureImageExceptionValues.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetExtendedLoaderBitmap(__int64 a1)
{
  return a1 + 304;
}
