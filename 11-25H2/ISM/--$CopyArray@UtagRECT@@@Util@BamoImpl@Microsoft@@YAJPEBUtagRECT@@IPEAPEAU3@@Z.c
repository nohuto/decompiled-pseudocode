/*
 * XREFs of ??$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z @ 0x180141E60
 * Callers:
 *     ?UpdateSuppressionRegions@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z @ 0x180143950 (-UpdateSuppressionRegions@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z.c)
 *     ?UpdateSuppressionRegions@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z @ 0x18015A3E8 (-UpdateSuppressionRegions@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::CopyArray<tagRECT>(
        void *Src,
        unsigned int a2,
        _QWORD *a3,
        const char *a4)
{
  void *v4; // rdi
  size_t v7; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( Src )
  {
    v7 = 16LL * a2;
    v4 = operator new[](v7);
    memcpy_0(v4, Src, v7);
  }
  else if ( a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoUtil.h",
      a4);
  }
  result = 0LL;
  *a3 = v4;
  return result;
}
