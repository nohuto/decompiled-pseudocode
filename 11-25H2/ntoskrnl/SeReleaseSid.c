/*
 * XREFs of SeReleaseSid @ 0x140A19690
 * Callers:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
