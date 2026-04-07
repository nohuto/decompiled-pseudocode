/*
 * XREFs of ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104874
 * Callers:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1801044CC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104550 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?WFRectToDpiScaledMarginRect@Utils@Private@Transitions@Udwm@winrt@@YA?AUtagRECT@@URect@Foundation@Windows@5@@Z @ 0x180104994 (-WFRectToDpiScaledMarginRect@Utils@Private@Transitions@Udwm@winrt@@YA-AUtagRECT@@URect@Foundatio.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  __m128i *v2; // rax
  int v3; // r11d
  __m128i v4; // xmm1
  unsigned __int64 v5; // xmm0_8
  int v6; // ecx
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  char v16[16]; // [rsp+30h] [rbp-10h] BYREF
  struct tagPOINT v17; // [rsp+50h] [rbp+10h] BYREF

  v15 = *(_OWORD *)((char *)this + 92);
  v2 = (__m128i *)winrt::Udwm::Transitions::Private::Utils::WFRectToDpiScaledMarginRect(v16, &v15);
  v3 = 0;
  v4 = *v2;
  v8 = v2->m128i_i64[0];
  v5 = _mm_srli_si128(v4, 8).m128i_u64[0];
  v6 = v5 - v8;
  v7 = HIDWORD(v5) - HIDWORD(v8);
  LODWORD(v8) = 0;
  if ( *((_QWORD *)this + 7) )
  {
    if ( v6 >= 0 )
      LODWORD(v8) = v6;
    v9 = *((_QWORD *)this + 6);
    v10 = *(_QWORD *)(v9 + 128);
    v17.x = ((int)v8 - (int)v10) / 2 - 32;
    if ( v7 >= 0 )
      v3 = HIDWORD(v5) - HIDWORD(v8);
    v17.y = (v3 - HIDWORD(v10)) / 2 - 32;
    CVisual::SetOffset((struct tagPOINT *)v9, &v17);
    v11 = *((_QWORD *)this + 10);
    v12 = *(_QWORD *)(v11 + 128);
    v17.x = (64 - (int)v12) / 2;
    v13 = 64 - HIDWORD(v12);
  }
  else
  {
    if ( v6 >= 0 )
      LODWORD(v8) = v6;
    v11 = *((_QWORD *)this + 10);
    v14 = *(_QWORD *)(v11 + 128);
    v17.x = ((int)v8 - (int)v14) / 2;
    if ( v7 >= 0 )
      v3 = HIDWORD(v5) - HIDWORD(v8);
    v13 = v3 - HIDWORD(v14);
  }
  v17.y = v13 / 2;
  CVisual::SetOffset((struct tagPOINT *)v11, &v17);
}
