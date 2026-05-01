/*
 * XREFs of ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180023CF0
 * Callers:
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180023830 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostCommitDebtCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, __int64 a3, _QWORD *a4)
{
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u, 0LL);
  *a4 += *((_QWORD *)&ProcessInformation[0] + 1);
  return 0LL;
}
