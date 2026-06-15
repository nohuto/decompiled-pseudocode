/*
 * XREFs of ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14001E6A8
 * Callers:
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EB60 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x14002BD10 (-Resume@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14005B874 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 wil::details::in1diag3::Log_IfFailedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-48h]
  wil::details *v9; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v6 = (unsigned int)a4;
  if ( (int)a4 < 0 )
  {
    LODWORD(v9) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<2>((int)this, (int)a2, a3, (int)a4, v8, retaddr, v9, a5, (__int64)&a6);
  }
  return v6;
}
