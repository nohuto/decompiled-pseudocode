/*
 * XREFs of AslRegistryOpenKey @ 0x180139504
 * Callers:
 *     AslEnvBuildBasic @ 0x180136F3C (AslEnvBuildBasic.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1802CE2E0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryOpenKey(PHANDLE KeyHandle, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS inited; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryOpenKey",
      828,
      (unsigned int)"AslRegistryOpenKey passed bad Path [%x]");
  }
  else
  {
    *KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, a3, &ObjectAttributes);
  }
  return (unsigned int)inited;
}
