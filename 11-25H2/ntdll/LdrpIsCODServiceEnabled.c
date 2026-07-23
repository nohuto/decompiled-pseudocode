/*
 * XREFs of LdrpIsCODServiceEnabled @ 0x1801617B0
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180114A34 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKeyEx @ 0x180165770 (NtOpenKeyEx.c)
 */

bool LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v2[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  v2[0] = 13500620LL;
  ObjectAttributes.Attributes = 64;
  v0 = NtOpenKeyEx(&KeyHandle, 0x20119u, &ObjectAttributes, 0) >= 0;
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0;
}
