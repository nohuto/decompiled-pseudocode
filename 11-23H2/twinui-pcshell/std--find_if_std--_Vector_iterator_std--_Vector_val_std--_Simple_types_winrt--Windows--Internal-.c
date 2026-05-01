/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_55cd249588c11a309203ecd81774c543___ @ 0x180689E38
 * Callers:
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x180689FF4 (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1802D4AE2 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_55cd249588c11a309203ecd81774c543___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v8; // rsi
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm1_4
  _DWORD v16[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a2 != a3 )
  {
    v8 = a2 + 16;
    do
    {
      if ( *(_DWORD *)(v8 + 8) <= 1u )
      {
        v9 = *(float *)(v8 - 8);
        v10 = *(float *)(v8 - 4);
        v11 = (int)v9;
        v12 = v9 + *(float *)v8;
        v16[0] = v11;
        v13 = (int)v10;
        v14 = v10 + *(float *)(v8 + 4);
        v16[1] = v13;
        v16[2] = (int)v12;
        v16[3] = (int)v14;
        if ( Geometry::CRect::Intersects((Geometry::CRect *)v16, a4) )
          break;
      }
      v6 += 32LL;
      v8 += 32LL;
    }
    while ( v6 != v5 );
  }
  *a1 = v6;
  return a1;
}
