/*
 * XREFs of ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18002754C
 * Callers:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ??$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800275B8 (--$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180033B60 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        unsigned __int64 a8,
        char *a9)
{
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  int v13; // [rsp+20h] [rbp-48h]
  _DWORD v14[6]; // [rsp+50h] [rbp-18h] BYREF

  v14[0] = (_DWORD)a7;
  v14[2] = 0;
  v14[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7, a2);
  return wil::details::ReportFailure_Msg<1>(v11, v10, v9, v10, v13, a6, (__int64)v14, a8, a9);
}
