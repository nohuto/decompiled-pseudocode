/*
 * XREFs of CmpFindMachineHiveByMountPoint @ 0x1407D1E18
 * Callers:
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407D1AB0 (CmRegisterMachineHiveLoadedNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1407C9F20 (CmpBuildMachineHiveMountPoint.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall CmpFindMachineHiveByMountPoint(PCUNICODE_STRING String2, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int i; // ebx
  UNICODE_STRING String1; // [rsp+20h] [rbp-B8h] BYREF
  char v8; // [rsp+30h] [rbp-A8h] BYREF

  v2 = 0;
  for ( i = 0; i < 7; ++i )
  {
    *(_QWORD *)&String1.Length = 0x800000LL;
    String1.Buffer = (wchar_t *)&v8;
    CmpBuildMachineHiveMountPoint(i, &String1);
    if ( RtlEqualUnicodeString(&String1, String2, 1u) )
    {
      *a2 = i;
      return v2;
    }
  }
  return (unsigned int)-1073741766;
}
