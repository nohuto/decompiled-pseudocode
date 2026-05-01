/*
 * XREFs of ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1804C88C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BCC18 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C7380 (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1804C8188 (-GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z.c)
 *     ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x1804D6CDC (-HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchItemGrid::MoveVirtualCursor(CSwitchItemGrid *this, const struct Geometry::CPoint *a2)
{
  char *v5; // rsi
  _DWORD *v6; // r8
  int v7; // r9d
  int v8; // ebx
  int v9; // eax
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r8
  LONG v18; // ecx
  LONG right; // eax
  LONG left; // r8d
  LONG v21; // ecx
  LONG bottom; // eax
  unsigned __int64 top; // r8
  int v24; // r14d
  __int64 **v25; // rbx
  __int64 **v26; // r12
  __int64 *v27; // rcx
  __int64 v28; // rax
  __m128i *v29; // rax
  __m128i v30; // xmm0
  int NearestEdgeToPointDistanceSquared; // eax
  ElementHelpers *v32; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  int v34; // [rsp+30h] [rbp-50h] BYREF
  int v35; // [rsp+34h] [rbp-4Ch]
  __int64 v36; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v37[4]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v39[16]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( *((_QWORD *)this - 23) )
  {
    v5 = (char *)this - 208;
    (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this - 26) + 120LL))((char *)this - 208, &v34);
    if ( !*((_BYTE *)this + 732) )
    {
      *((_BYTE *)this + 732) = 1;
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 5) + 88LL))(
                       *((_QWORD *)this - 5),
                       v37);
      v7 = v6[1] + (v6[3] - v6[1]) / 2;
      LODWORD(v33) = (v6[2] - *v6) / 2 + *v6;
      HIDWORD(v33) = v7;
      LODWORD(v32) = v33 - v34;
      HIDWORD(v32) = v7 - v35;
      *(_QWORD *)((char *)this + 724) = v32;
    }
    v8 = MulDiv(*(_DWORD *)a2, *((_DWORD *)this - 36) - *((_DWORD *)this - 38), *((_DWORD *)this + 160));
    v9 = MulDiv(*((_DWORD *)a2 + 1), *((_DWORD *)this - 35) - *((_DWORD *)this - 37), *((_DWORD *)this + 161));
    v10 = v8 + *((_DWORD *)this + 181);
    v11 = v9 + *((_DWORD *)this + 182);
    v12 = v10;
    v13 = *((_QWORD *)this + 75);
    if ( (int)v13 < v10 )
      v12 = *((_QWORD *)this + 75);
    v14 = *((_QWORD *)this + 74);
    if ( (int)v14 <= v12 )
    {
      if ( (int)v13 < v10 )
        v10 = *((_QWORD *)this + 75);
    }
    else
    {
      v10 = *((_QWORD *)this + 74);
    }
    *((_DWORD *)this + 181) = v10;
    v15 = HIDWORD(v13);
    v16 = v11;
    if ( (int)v15 < v11 )
      v16 = v15;
    v17 = HIDWORD(v14);
    if ( (int)v17 <= v16 )
    {
      if ( (int)v15 < v11 )
        v11 = v15;
      LODWORD(v17) = v11;
    }
    *((_DWORD *)this + 182) = v17;
    v33 = 0LL;
    GridLayout::HitTestRow((CSwitchItemGrid *)((char *)this + 560), (CSwitchItemGrid *)((char *)this + 724), &v33);
    rc = *(struct tagRECT *)(*((_QWORD *)this + 76) + 56 * v33 + 8);
    InflateRect(&rc, 0, *((_DWORD *)this + 141));
    v18 = *((_DWORD *)this + 181);
    right = v18;
    if ( rc.right < v18 )
      right = rc.right;
    left = rc.left;
    if ( rc.left <= right )
    {
      if ( rc.right < v18 )
        v18 = rc.right;
      left = v18;
    }
    *((_DWORD *)this + 181) = left;
    v21 = *((_DWORD *)this + 182);
    bottom = v21;
    if ( rc.bottom < v21 )
      bottom = rc.bottom;
    top = (unsigned int)rc.top;
    if ( rc.top <= bottom )
    {
      if ( rc.bottom < v21 )
        v21 = rc.bottom;
      top = (unsigned int)v21;
    }
    *((_DWORD *)this + 182) = top;
    v32 = 0LL;
    v24 = 0x7FFFFFFF;
    v25 = (__int64 **)*((_QWORD *)this - 24);
    v26 = &v25[*((_QWORD *)this - 23)];
    while ( v25 != v26 )
    {
      v33 = 0LL;
      Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25,
        (__int64 *)&v33);
      v27 = *v25;
      v28 = **v25;
      v36 = *(_QWORD *)((char *)this + 724);
      LODWORD(v36) = v34 + v36;
      HIDWORD(v36) += v35;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(v28 + 112))(v27, &v36) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v32, v25);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
        break;
      }
      v29 = (__m128i *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(**v25 + 88))(*v25, v39);
      v30 = *v29;
      v37[0] = _mm_cvtsi128_si32(*v29) - v34;
      v37[2] = v30.m128i_i32[2] - v34;
      v37[3] = v30.m128i_i32[3] - v35;
      v37[1] = v30.m128i_i32[1] - v35;
      NearestEdgeToPointDistanceSquared = Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
                                            (Geometry::CRect *)v37,
                                            (const struct tagPOINT *)((char *)this + 724));
      if ( NearestEdgeToPointDistanceSquared < v24 )
      {
        v24 = NearestEdgeToPointDistanceSquared;
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v32, v25);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      ++v25;
    }
    if ( !ElementHelpers::IsSameElement(
            (struct IUnknown *)v32,
            *((struct IUnknown **)this - 5),
            (struct IMultitaskingViewElement *)top) )
      (*(void (__fastcall **)(char *, ElementHelpers *))(*((_QWORD *)this - 26) + 288LL))(v5, v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
