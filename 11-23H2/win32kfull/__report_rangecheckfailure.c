/*
 * XREFs of __report_rangecheckfailure @ 0x1C0138230
 * Callers:
 *     RemoveHmodDependency @ 0x1C003D358 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C003D730 (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0098E30 (NtUserRemoteConnect.c)
 *     SetAppCompatFlags @ 0x1C00A2C40 (SetAppCompatFlags.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C73BC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02A0470 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02A0640 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A6B54 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02C35B0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
