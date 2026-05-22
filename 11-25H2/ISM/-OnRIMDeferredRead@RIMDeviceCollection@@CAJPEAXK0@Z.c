/*
 * XREFs of ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18004CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18004DEA4 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009A86C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMDeferredRead(RIMDeviceCollection *a1, int a2, void *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int InputReportFromRIM; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = 2147549183LL;
    v4 = 504LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v3 = 2147942487LL;
    v4 = 494LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v3,
      v7);
    return 0LL;
  }
  *((_BYTE *)a1 + 2736) = 0;
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(a1);
  if ( InputReportFromRIM < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)InputReportFromRIM,
      v7);
  return 0LL;
}
