/*
 * XREFs of ??$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z @ 0x180112644
 * Callers:
 *     ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x180125A2C (-UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 *     ?UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x180125BC0 (-UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::CopyArray<tagPOINT>(
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
    v7 = 8LL * a2;
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
