/*
 * XREFs of ?HampSystemJobExtendedInfoQuery@@YAJPEAXPEAU_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2@@@Z @ 0x1800696B8
 * Callers:
 *     BiHamExtHostQueryResourceUsage @ 0x180069540 (BiHamExtHostQueryResourceUsage.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

NTSTATUS __fastcall HampSystemJobExtendedInfoQuery(
        HANDLE JobHandle,
        struct _JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2 *a2)
{
  memset_0(a2, 0, 0x1C0uLL);
  return NtQueryInformationJobObject(JobHandle, JobObjectBasicProcessIdList|0x10, a2, 0x1C0u, 0LL);
}
