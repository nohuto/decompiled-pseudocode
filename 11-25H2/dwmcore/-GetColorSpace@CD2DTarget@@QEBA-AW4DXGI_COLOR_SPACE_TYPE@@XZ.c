/*
 * XREFs of ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1802D62A0
 * Callers:
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802C5320 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DTarget::GetColorSpace(CD2DTarget *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(unsigned int *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
                             *((_QWORD *)this + 3) + 8LL,
                             v2)
                         + 8);
}
