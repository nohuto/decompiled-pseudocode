/*
 * XREFs of ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18052FD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18052F2D4 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052F370 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1805309D0 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 */

__int64 __fastcall AppResizeView::OnKeyDown(AppResizeView *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ScaleFactorForDevice; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  if ( *((_BYTE *)this + 64) )
    return 0LL;
  if ( !*((_BYTE *)this + 460) )
    goto LABEL_8;
  if ( ((a2 - 37) & 0xFFFFFFFD) == 0 )
  {
    ScaleFactorForDevice = GetScaleFactorForDevice(1LL);
    v8 = -10;
    if ( a2 != 37 )
      v8 = 10;
    v9 = MulDiv(v8, ScaleFactorForDevice, 100) + *((_DWORD *)this + 27);
    v10 = *((_DWORD *)this + 19) - 1;
    if ( v10 >= v9 )
      v10 = v9;
    if ( *((_DWORD *)this + 17) > v10 )
      v10 = *((_DWORD *)this + 17);
    v12 = v10;
    v13 = *((_DWORD *)this + 28);
    AppResizeView::UpdateAppResizeData((char *)this - 32, &v12, 0LL);
    return 0LL;
  }
  if ( a2 != 13 )
  {
    if ( a2 != 27 )
      return 0LL;
LABEL_8:
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
    return 0LL;
  }
  v4 = AppResizeView::CommitResize((AppResizeView *)((char *)this - 32), (AppResizeView *)((char *)this + 108));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  return 0LL;
}
