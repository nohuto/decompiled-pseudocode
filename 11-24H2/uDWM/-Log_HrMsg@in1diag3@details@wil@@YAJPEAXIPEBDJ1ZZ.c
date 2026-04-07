/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180096D74
 * Callers:
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C8908 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??$InternalCallback@H@?$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z @ 0x1800ED404 (--$InternalCallback@H@-$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180096DB0 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
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
  LODWORD(v9) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<2>((int)this, (int)a2, a3, (int)a4, v8, retaddr, v9, a5, (char *)&a6);
  return v6;
}
