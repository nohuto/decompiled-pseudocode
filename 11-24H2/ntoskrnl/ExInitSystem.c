/*
 * XREFs of ExInitSystem @ 0x140C40704
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpInitSystemPhase0 @ 0x140C408C8 (ExpInitSystemPhase0.c)
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 *     ExpStringCheck @ 0x140C40E30 (ExpStringCheck.c)
 */

__int64 ExInitSystem()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    return ExpInitSystemPhase1();
  }
  else
  {
    ExpStringCheck(
      L"\\Registry\\Machine\\System\\Setup",
      L"SetupType",
      L"SystemPrefix",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions",
      L"ProductType",
      L"LanmanNT",
      L"ServerNT",
      L"WinNT",
      L"ProductSuite",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites",
      L"ConcurrentLimit",
      L"Small Business",
      L"Enterprise",
      L"CommunicationServer",
      L"BackOffice",
      L"Small Business(Restricted)",
      L"Terminal Server",
      L"EmbeddedNT",
      L"DataCenter",
      L"Personal",
      L"Blade",
      L"Embedded(Restricted)",
      L"Security Appliance",
      L"Storage Server",
      L"Compute Server",
      L"WH Server",
      L"SystemSetupInProgress",
      L"PhoneNT",
      L"Kernel-ProductType");
    return ExpInitSystemPhase0();
  }
}
