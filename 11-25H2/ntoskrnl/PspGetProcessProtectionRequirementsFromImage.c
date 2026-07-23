/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x1409BC16C
 * Callers:
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
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
