/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1801CB4EC
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800A60DC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJPEAXIPEBD110@Z @ 0x1801CB57C (-GetLastErrorFailHr@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1802A9B80 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6)
{
  unsigned int v6; // ebp
  unsigned int LastErrorFailHr; // ebx
  const char *v10; // [rsp+20h] [rbp-48h]
  void *v11; // [rsp+30h] [rbp-38h]

  v6 = (unsigned int)a2;
  LastErrorFailHr = wil::details::GetLastErrorFailHr(a1, a2, a3, a4, v10, a6, v11);
  wil::details::HrToNtStatus((wil::details *)LastErrorFailHr);
  wil::details::ReportFailure_Base<1,0>(a1, v6);
  return LastErrorFailHr;
}
