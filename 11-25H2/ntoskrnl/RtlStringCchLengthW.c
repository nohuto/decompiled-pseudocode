/*
 * XREFs of RtlStringCchLengthW @ 0x140433290
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405E261C (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405E28D8 (RtlpNameprepAsciiRealWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     PpmRegisterProfiles @ 0x14075411C (PpmRegisterProfiles.c)
 *     PopPlInitWString @ 0x140755C4C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1407588D0 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140771564 (RtlpValidAttribute.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1407F1944 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x1407F1FDC (SdbpSafeAllocAndConcatW.c)
 *     AslPathCombine @ 0x1407FA100 (AslPathCombine.c)
 *     PiUEventCopyEventData @ 0x140967000 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 *     PnpGetDeviceDependencyList @ 0x140A7A000 (PnpGetDeviceDependencyList.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
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
