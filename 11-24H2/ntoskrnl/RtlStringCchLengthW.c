/*
 * XREFs of RtlStringCchLengthW @ 0x14042EE70
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1405EE95C (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405EEC18 (RtlpNameprepAsciiRealWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     PpmRegisterProfiles @ 0x140763BDC (PpmRegisterProfiles.c)
 *     PopPlInitWString @ 0x14076570C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1407807B4 (RtlpValidAttribute.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801804 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x140801E9C (SdbpSafeAllocAndConcatW.c)
 *     AslPathCombine @ 0x140809C70 (AslPathCombine.c)
 *     PiUEventCopyEventData @ 0x14085B840 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     PnpGetDeviceDependencyList @ 0x140A0DA98 (PnpGetDeviceDependencyList.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA9BA0 (DbgkWerCaptureLiveKernelDump2.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
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
