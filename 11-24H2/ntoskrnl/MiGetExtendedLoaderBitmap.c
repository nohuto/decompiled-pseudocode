/*
 * XREFs of MiGetExtendedLoaderBitmap @ 0x1404FB0FC
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x140A3DA08 (MiHandleDriverNonPagedSections.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140A93500 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A93608 (MiCaptureImageExceptionValues.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetExtendedLoaderBitmap(__int64 a1)
{
  return a1 + 304;
}
