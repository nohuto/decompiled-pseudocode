/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x140158EC8
 * Callers:
 *     PiRegStateOpenClassKey @ 0x140158698 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1401589F8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x14008C460 (WdmlibRtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2, __int64 a3, HANDLE *a4)
{
  NTSTATUS result; // eax
  ACCESS_MASK v6; // r9d
  void *v7; // r10
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    *a4 = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v7;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, v6, &ObjectAttributes);
    if ( result >= 0 )
      *a4 = KeyHandle;
  }
  return result;
}
