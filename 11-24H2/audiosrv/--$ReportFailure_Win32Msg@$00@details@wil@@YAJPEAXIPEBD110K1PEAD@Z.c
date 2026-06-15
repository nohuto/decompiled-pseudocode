/*
 * XREFs of ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x18012E344
 * Callers:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180136B4C (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180043624 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18004380C (--$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32Msg<1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        unsigned __int64 a8,
        char *a9)
{
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r10
  int v14; // [rsp+20h] [rbp-48h]
  _DWORD v15[6]; // [rsp+50h] [rbp-18h] BYREF

  v9 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v9 = (unsigned __int16)a7 | 0x80070000;
  v15[0] = v9;
  v15[2] = 0;
  v15[1] = wil::details::HrToNtStatus((wil::details *)v9);
  wil::details::ReportFailure_Msg<1>(
    v12,
    (unsigned __int16 *)(unsigned int)v10,
    v11,
    v10,
    v14,
    a6,
    (__int64)v15,
    a8,
    a9);
  return v9;
}
