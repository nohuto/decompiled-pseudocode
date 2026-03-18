/*
 * XREFs of ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264
 * Callers:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F84 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073094 (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@QEAA.c)
 *     ??0CBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073164 (--0CBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073240 (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400737EC (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEA.c)
 *     ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140129180 (--0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x140154F1C (--0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x14022CB90 (--0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::CResourceMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 20) = a1 ^ 0xFFFFFFFE;
  result = a1;
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 36) = a2;
  return result;
}
