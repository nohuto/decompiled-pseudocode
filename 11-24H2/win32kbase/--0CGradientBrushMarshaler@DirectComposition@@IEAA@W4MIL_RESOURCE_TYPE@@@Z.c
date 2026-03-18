/*
 * XREFs of ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073038
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073164 (--0CBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler()
{
  __int64 v0; // rcx
  __int64 result; // rax

  DirectComposition::CBrushMarshaler::CBrushMarshaler();
  *(_QWORD *)(v0 + 72) = 2LL;
  *(_QWORD *)(v0 + 88) = 0LL;
  *(_QWORD *)(v0 + 96) = 0LL;
  *(_QWORD *)(v0 + 104) = 0LL;
  result = v0;
  *(_DWORD *)(v0 + 80) = 1;
  return result;
}
