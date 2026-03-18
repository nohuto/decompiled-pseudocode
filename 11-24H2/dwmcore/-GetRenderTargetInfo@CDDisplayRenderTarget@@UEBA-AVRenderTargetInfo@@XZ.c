/*
 * XREFs of ?GetRenderTargetInfo@CDDisplayRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1801DF610
 * Callers:
 *     ?GetRenderTargetInfo@CLegacyRenderTarget@@WEI@EBA?AVRenderTargetInfo@@XZ @ 0x180276F00 (-GetRenderTargetInfo@CLegacyRenderTarget@@WEI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@CLegacyRenderTarget@@WFA@EBA?AVRenderTargetInfo@@XZ @ 0x180276F10 (-GetRenderTargetInfo@CLegacyRenderTarget@@WFA@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 33024);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 33008);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
