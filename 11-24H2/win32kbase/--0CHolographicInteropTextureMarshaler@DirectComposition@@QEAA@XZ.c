/*
 * XREFs of ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x140154F1C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 80);
  *(_DWORD *)(v1 + 16) |= 0x20u;
  *(_QWORD *)v1 = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  return v1;
}
