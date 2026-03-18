/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140822800
 * Callers:
 *     CmpVolumeContextStart @ 0x1407C91D0 (CmpVolumeContextStart.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140821470 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     CcGetDeviceGuid @ 0x140A936FC (CcGetDeviceGuid.c)
 * Callees:
 *     IoVolumeDeviceToGuidPath @ 0x140822890 (IoVolumeDeviceToGuidPath.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}
