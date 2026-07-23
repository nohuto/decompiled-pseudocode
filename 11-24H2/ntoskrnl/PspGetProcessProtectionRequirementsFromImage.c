/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x140A4E604
 * Callers:
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  PS_PROTECTION v1; // r10
  unsigned __int8 *v2; // r11
  char v4; // r9
  char v5; // r10

  if ( (*(_BYTE *)(*(_QWORD *)MiSectionControlArea(a1) + 15LL) & 0xF) == 5 )
  {
    v4 = -127;
    if ( v1.Level && v1.Level != 0x81 && RtlTestProtectedAccess(v1, (PS_PROTECTION)-127) )
      v4 = v5;
    v1.Level = v4;
  }
  *v2 = v1.Level;
  return 0LL;
}
