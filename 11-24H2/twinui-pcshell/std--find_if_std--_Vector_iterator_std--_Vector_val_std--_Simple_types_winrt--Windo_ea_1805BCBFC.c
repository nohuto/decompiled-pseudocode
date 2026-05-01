/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805BCBFC
 * Callers:
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BBE7C (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1805B043C (-IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r11
  float *v6; // rbx
  const struct Geometry::CRect *v7; // rdx
  const struct Geometry::CRect *v8; // r8
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm1_4
  __int64 v15; // r10
  _DWORD v17[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( a2 != a3 )
  {
    v6 = (float *)(a2 + 16);
    v7 = *(const struct Geometry::CRect **)a4;
    v8 = (const struct Geometry::CRect *)**(unsigned int **)(a4 + 8);
    do
    {
      v9 = *(v6 - 2);
      v10 = *(v6 - 1);
      v11 = (int)v9;
      v12 = v9 + *v6;
      v17[0] = v11;
      v13 = (int)v10;
      v14 = v10 + v6[1];
      v17[1] = v13;
      v17[2] = (int)v12;
      v17[3] = (int)v14;
      if ( SnapRectHelpers::IsEqualWithErrorThreshold((SnapRectHelpers *)v17, v7, v8) )
        break;
      v4 += 32LL;
      v6 += 8;
    }
    while ( v4 != v15 );
  }
  *a1 = v4;
  return a1;
}
