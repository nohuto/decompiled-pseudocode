/*
 * XREFs of ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802227E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1801178F0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x1801FB2CC (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180222AD4 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180222B9C (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::DrawFallback(__int64 *a1, __int64 a2, struct _EVENT_DATA_DESCRIPTOR *a3)
{
  double v3; // xmm2_8
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, int *, __int64 *, __int64 *, int *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  const struct tagRECT *v16; // rax
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-99h] BYREF
  __int64 v22; // [rsp+40h] [rbp-89h] BYREF
  int v23; // [rsp+48h] [rbp-81h] BYREF
  int v24[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v25; // [rsp+58h] [rbp-71h] BYREF
  __int64 v26; // [rsp+60h] [rbp-69h] BYREF
  __int128 v27; // [rsp+68h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp-51h] BYREF
  FastRegion::CRegion *v29[10]; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+E0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Start,
      (__int64)a3,
      1u,
      &v30);
  a3->Reserved = 0;
  a3->Size = 0;
  HIDWORD(a3->Ptr) = 0;
  LODWORD(a3->Ptr) = 0;
  v7 = *a1;
  v23 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, int *, __int64 *, __int64 *, int *))(v7 + 88);
  *(_QWORD *)v24 = 0LL;
  v9 = v8(a1, &v23, &v26, &v25, v24);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1[2] + 96LL))(a1[2]) <= 1 )
      return 0LL;
    v11 = (__int64 *)a1[2];
    v27 = 0LL;
    v12 = *v11;
    v22 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v12 + 88))(v11, &v27, &v22);
    v10 = v13;
    if ( v13 < 0 )
    {
      v19 = 185LL;
    }
    else
    {
      *(float *)&v21.Ptr = (float)(int)v27;
      *((float *)&v21.Ptr + 1) = (float)SDWORD1(v27);
      *(float *)&v21.Size = (float)SDWORD2(v27);
      *(float *)&v21.Reserved = (float)SHIDWORD(v27);
      v30 = v21;
      v13 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, (__m128 *)&v30, 1, 1);
      v10 = v13;
      if ( v13 >= 0 )
      {
        LOBYTE(v14) = 1;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a2 + 16) + 64LL))(a2 + 16, v22, v14);
        v10 = v15;
        if ( v15 < 0 )
        {
          v20 = 197LL;
        }
        else
        {
          v28 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v22 + 32LL))(v22, &v28);
          v10 = v15;
          if ( v15 >= 0 )
          {
            v21 = 0LL;
            v30 = v28;
            CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v30, &v21);
            v16 = (const struct tagRECT *)PixelAlign((int *)&v30, (unsigned int *)&v21, v3);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v29, v16);
            CDrawingContext::AddTransientInkDirtyRegion((CDrawingContext *)a2, (const struct CRegion *)v29);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
              McTemplateU0ffff_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Stop,
                v17,
                *((float *)&v21.Ptr + 1),
                v21.Size,
                v21.Type);
            *a3 = v21;
            FastRegion::CRegion::FreeMemory(v29);
            CBaseClipStack::Pop((CBaseClipStack *)(a2 + 3112));
            --*(_QWORD *)(*(_QWORD *)(a2 + 752) - 184LL);
            *(_BYTE *)(a2 + 8065) = 1;
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            return 0LL;
          }
          v20 = 200LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
          (const char *)(unsigned int)v15);
        CDrawingContext::PopGpuClipRectInternal((CDrawingContext *)a2, 0);
        goto LABEL_22;
      }
      v19 = 192LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v13);
LABEL_22:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
    return v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAE,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
