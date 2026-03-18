/*
 * XREFs of ?_QueryScalarMultiplierCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x140272BFC
 * Callers:
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042D7C0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_QueryScalarMultiplierCaps(
        DxgMonitor::MonitorGammaState *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax

  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 138;
  }
  *a4 = 0LL;
  if ( a2 < 0xC )
    return 3221225507LL;
  *(_QWORD *)a3 = *((_QWORD *)this + 10);
  a3[2] = *((_DWORD *)this + 22);
  result = 0LL;
  *a4 = 12LL;
  return result;
}
