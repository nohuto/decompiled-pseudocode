/*
 * XREFs of IoVolumeDeviceNameToGuid @ 0x1407156A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14094FF60 (IoVolumeDeviceNameToGuidPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuid(__int64 a1, GUID *a2)
{
  __int64 result; // rax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+28h] [rbp-18h]
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  v6 = 0LL;
  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  result = IoVolumeDeviceNameToGuidPath(a1, &v6);
  if ( (int)result >= 0 )
  {
    v4 = P;
    GuidString.Length = v6 - 20;
    GuidString.MaximumLength = WORD1(v6) - 20;
    GuidString.Buffer = (wchar_t *)((char *)P + 20);
    v5 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(v4, 0);
    return v5;
  }
  return result;
}
