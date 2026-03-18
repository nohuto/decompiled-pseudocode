/*
 * XREFs of ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80
 * Callers:
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F7674 (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F77E4 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1401B96B0 (-DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z.c)
 *     ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401BCC88 (-OnDaemonTimer@CForegroundLaunch@@QEAAXXZ.c)
 *     ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x1401C2970 (-OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D1314 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402132DC (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x14021EB84 (-DeBoostAll@CShellForegroundBoost@@QEAAXXZ.c)
 * Callees:
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018902C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x1402018C0 (-_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027512C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 */

unsigned __int64 __fastcall CProcessAsPid::GetProcessInfo(CProcessAsPid *this)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+48h] [rbp-40h]

  if ( !*(_QWORD *)this )
    return 0LL;
  CLockProcessByPid::CLockProcessByPid(v5, *(_QWORD *)this, 0LL);
  if ( !CProcessAsPid::_IsValid(this, (const struct CLockProcessByPid *)v5) )
  {
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v5, v2);
    return 0LL;
  }
  v3 = v6;
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v5, v2);
  if ( !v3 )
    return 0LL;
  result = PsGetProcessWin32Process(v3);
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
