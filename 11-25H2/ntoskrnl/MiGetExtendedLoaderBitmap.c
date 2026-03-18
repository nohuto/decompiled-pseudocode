/*
 * XREFs of MiGetExtendedLoaderBitmap @ 0x1404F8A74
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x140A396E8 (MiHandleDriverNonPagedSections.c)
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140A8EA10 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140A8EB18 (MiCaptureImageExceptionValues.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetExtendedLoaderBitmap(__int64 a1)
{
  return a1 + 304;
}
