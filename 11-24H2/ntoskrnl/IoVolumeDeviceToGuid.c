/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1409672A0
 * Callers:
 *     CmpVolumeContextStart @ 0x1407D89C0 (CmpVolumeContextStart.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140965D40 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140966DB8 (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     CcGetDeviceGuid @ 0x140A9796C (CcGetDeviceGuid.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140967330 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
