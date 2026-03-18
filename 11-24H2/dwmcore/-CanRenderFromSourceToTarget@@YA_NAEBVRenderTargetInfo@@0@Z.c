/*
 * XREFs of ?CanRenderFromSourceToTarget@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x1801BC850
 * Callers:
 *     ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1801F8848 (-IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetIn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CanRenderFromSourceToTarget(const struct RenderTargetInfo *a1, const struct RenderTargetInfo *a2)
{
  int v2; // eax
  bool result; // al

  result = *(_DWORD *)a1 == *(_DWORD *)a2
        && *((_DWORD *)a1 + 1) == *((_DWORD *)a2 + 1)
        && ((v2 = *((_DWORD *)a1 + 2), v2 == -1) || v2 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
        && (*((float *)a1 + 4) != 0.0) == (*((float *)a2 + 4) != 0.0)
        && (!*((_BYTE *)a1 + 20) || *((_BYTE *)a2 + 20));
  return result;
}
