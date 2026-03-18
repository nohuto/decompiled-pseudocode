/*
 * XREFs of ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A9E14
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B3DCC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B577C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016B1B0 (NtMITSetInputDelegationMode.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401BD470 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLockProcessByPid::GetProcessInfo(CLockProcessByPid *this)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
    return 0LL;
  result = PsGetProcessWin32Process(v1);
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
