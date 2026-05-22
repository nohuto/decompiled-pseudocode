/*
 * XREFs of ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x180083B34
 * Callers:
 *     ?UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z @ 0x18012B760 (-UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z.c)
 *     ?SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x18014079C (-SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::CopyArray<INPUT_SPACE_REGION>(
        void *Src,
        unsigned int a2,
        _QWORD *a3,
        const char *a4)
{
  void *v4; // rdi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( Src )
  {
    v7 = 200LL * a2;
    v4 = operator new[](v7);
    memcpy_0(v4, Src, v7);
  }
  else if ( a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoUtil.h",
      a4);
  }
  result = 0LL;
  *a3 = v4;
  return result;
}
