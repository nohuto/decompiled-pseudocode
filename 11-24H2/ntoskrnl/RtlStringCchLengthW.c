/*
 * XREFs of RtlStringCchLengthW @ 0x140420BA0
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405EBF3C (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405EC1F8 (RtlpNameprepAsciiRealWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14072F37C (PiCMGenerateDeviceInstance.c)
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     PopPlInitWString @ 0x1407650DC (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1407806E4 (RtlpValidAttribute.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x1408025DC (SdbpSafeAllocAndConcatW.c)
 *     AslPathCombine @ 0x14080A3B0 (AslPathCombine.c)
 *     PiUEventCopyEventData @ 0x1408575B0 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // rax
  NTSTATUS v4; // ecx

  if ( !psz || cchMax > 0x7FFFFFFF )
  {
    v4 = -1073741811;
LABEL_15:
    if ( pcchLength )
      *pcchLength = 0LL;
    return v4;
  }
  for ( i = cchMax; i; --i )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  v4 = -1073741811;
  if ( i )
    v4 = 0;
  if ( pcchLength )
  {
    if ( i )
      *pcchLength = cchMax - i;
    else
      *pcchLength = 0LL;
  }
  if ( !i )
    goto LABEL_15;
  return v4;
}
