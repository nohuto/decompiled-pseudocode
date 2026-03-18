/*
 * XREFs of SeReleaseSid @ 0x140A249A0
 * Callers:
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     NtCreateTokenEx @ 0x140936AB0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
