/*
 * XREFs of __report_rangecheckfailure @ 0x14026DDC0
 * Callers:
 *     NtUserRemoteConnect @ 0x1401F4F90 (NtUserRemoteConnect.c)
 *     NtGdiMakeFontDir @ 0x14021BEF0 (NtGdiMakeFontDir.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     SetAppCompatFlags @ 0x1402B1970 (SetAppCompatFlags.c)
 *     NtGdiEudcLoadUnloadLink @ 0x14030D380 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x14030D520 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x14033042C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
