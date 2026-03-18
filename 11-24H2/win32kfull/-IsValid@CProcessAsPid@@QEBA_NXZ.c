/*
 * XREFs of ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4
 * Callers:
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F77E4 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x14028CB4C (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
 * Callees:
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018902C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x1402018C0 (-_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x140275300 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     ?_IsEmpty@CProcessAsPid@@AEBA_NXZ @ 0x14028F238 (-_IsEmpty@CProcessAsPid@@AEBA_NXZ.c)
 */

char __fastcall CProcessAsPid::IsValid(CProcessAsPid *this)
{
  _QWORD *v2; // rcx
  char IsValid; // bl
  __int64 v5; // rdx
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( CProcessAsPid::_IsEmpty(this) )
    return 0;
  CLockProcessByPid::CLockProcessByPid(v6, *v2, 1LL);
  IsValid = CProcessAsPid::_IsValid(this, (const struct CLockProcessByPid *)v6);
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v6, v5);
  return IsValid;
}
