/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800435A8
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180008B70 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180043394 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
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
  LODWORD(v9) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<2>((__int64)this, a2, a3, (__int64)a4, v8, retaddr, v9, a5, (char *)&a6);
  return v6;
}
