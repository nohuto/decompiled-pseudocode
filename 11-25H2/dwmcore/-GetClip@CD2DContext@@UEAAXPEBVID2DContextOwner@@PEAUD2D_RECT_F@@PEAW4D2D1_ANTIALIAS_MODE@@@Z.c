/*
 * XREFs of ?GetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@PEAUD2D_RECT_F@@PEAW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1802C5660
 * Callers:
 *     <none>
 * Callees:
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x180082590 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 */

void __fastcall CD2DContext::GetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct D2D_RECT_F *a3,
        enum D2D1_ANTIALIAS_MODE *a4)
{
  struct CD2DTarget *v4; // rax
  _OWORD *v5; // r8
  _DWORD *v6; // r9

  v4 = CD2DTargetStack::Top((CD2DContext *)((char *)this + 328));
  *v5 = *(_OWORD *)((char *)v4 + 52);
  *v6 = *((_DWORD *)v4 + 17);
}
