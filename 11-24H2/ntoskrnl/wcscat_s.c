/*
 * XREFs of wcscat_s @ 0x140504740
 * Callers:
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBA04 (ExpCreateOutputSIGNATURE.c)
 *     AslPathToNetworkPathNt @ 0x140809E14 (AslPathToNetworkPathNt.c)
 *     VhdiMountVhdFile @ 0x14082A068 (VhdiMountVhdFile.c)
 *     BcdGetSystemStorePath @ 0x14085F5F8 (BcdGetSystemStorePath.c)
 *     RtlConvertSidToUnicodeString @ 0x140865350 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x140A3C920 (NtLockProductActivationKeys.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  errno_t v4; // ebx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v3 = Dst;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v6 = *Src++;
        *v3++ = v6;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_7:
      v4 = 22;
LABEL_8:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
