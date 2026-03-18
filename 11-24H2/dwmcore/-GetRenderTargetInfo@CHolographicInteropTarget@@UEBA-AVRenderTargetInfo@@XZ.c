/*
 * XREFs of ?GetRenderTargetInfo@CHolographicInteropTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180276F20
 * Callers:
 *     ?GetRenderTargetInfo@CHolographicInteropTarget@@WEI@EBA?AVRenderTargetInfo@@XZ @ 0x180276F50 (-GetRenderTargetInfo@CHolographicInteropTarget@@WEI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@CHolographicInteropTarget@@WFA@EBA?AVRenderTargetInfo@@XZ @ 0x180276F60 (-GetRenderTargetInfo@CHolographicInteropTarget@@WFA@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 8) = -1;
  *(_QWORD *)a2 = v2;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_BYTE *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
