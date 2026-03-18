/*
 * XREFs of ?FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BBF10
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE180 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x1801EEDDC (McTemplateU0ffff_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FillRectangles(
        CD2DContext *this,
        void (__fastcall ***a2)(CDrawingContext *__hidden this, struct D2D_MATRIX_3X2_F *),
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rbx

  v8 = a4;
  v9 = a3;
  CD2DContext::FlushDrawList(this, (__int64)a2, a3);
  CD2DContext::EnsureBeginDraw(this, v12, v13);
  CD2DContext::SetCommonState(this, a2, a8, &a7, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0ffff_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT,
      v14,
      (float)a6[1],
      COERCE_UNSIGNED_INT((float)a6[2]),
      COERCE_UNSIGNED_INT((float)a6[3]));
  if ( (_DWORD)v8 )
  {
    v15 = v8;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 25) + 136LL))(
        *((_QWORD *)this + 25),
        v9,
        a5);
      v9 += 16LL;
      --v15;
    }
    while ( v15 );
  }
  return 0LL;
}
