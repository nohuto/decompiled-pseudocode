/*
 * XREFs of ?GetRenderTargetInfo@CRemoteRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180276F70
 * Callers:
 *     ?GetRenderTargetInfo@CRemoteRenderTarget@@WEI@EBA?AVRenderTargetInfo@@XZ @ 0x180276FA0 (-GetRenderTargetInfo@CRemoteRenderTarget@@WEI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@CRemoteRenderTarget@@WFA@EBA?AVRenderTargetInfo@@XZ @ 0x180276FB0 (-GetRenderTargetInfo@CRemoteRenderTarget@@WFA@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 228);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 212);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
