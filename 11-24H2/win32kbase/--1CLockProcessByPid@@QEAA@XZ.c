/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B3DCC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B577C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016B1B0 (NtMITSetInputDelegationMode.c)
 *     NtUserCheckProcessSession @ 0x14016B6A0 (NtUserCheckProcessSession.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401BD470 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A3B50 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(CLockProcessByPid *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    if ( (*((_DWORD *)this + 5) & 8) != 0 )
      *((_QWORD *)PtiCurrent((__int64)this) + 48) = *((_QWORD *)this + 6);
    CLockProcessByPid::_Cleanup(this);
  }
}
