/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18027FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801C3440 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  int v3; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 30);
  v10[0] = 0;
  v10[1] = 0;
  v10[2] = v3;
  v10[3] = *((_DWORD *)this + 31);
  if ( **((_QWORD **)this + 330) )
  {
    v6 = 0;
    v9 = (__int128)*a2;
    if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v10, (int *)&v9) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *, struct IBitmapDest *, _QWORD, _DWORD))(***((_QWORD ***)this + 330)
                                                                                          + 128LL))(
             **((_QWORD **)this + 330),
             v10,
             a3,
             0LL,
             0);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1E9u, 0LL);
    }
  }
  else
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x1E1u, 0LL);
  }
  return v6;
}
