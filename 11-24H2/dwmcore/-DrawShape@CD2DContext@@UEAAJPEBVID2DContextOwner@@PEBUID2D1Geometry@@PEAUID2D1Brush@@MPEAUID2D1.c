/*
 * XREFs of ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800FD720
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE620 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x1801EEDDC (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DrawShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        float a5,
        struct ID2D1StrokeStyle1 *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8
  void (__fastcall **v15)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v16)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  __int64 v17; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+40h] [rbp-61h] BYREF
  int v26; // [rsp+48h] [rbp-59h] BYREF
  struct D2D_MATRIX_3X2_F v27; // [rsp+50h] [rbp-51h] BYREF
  struct D2D_MATRIX_3X2_F v28; // [rsp+68h] [rbp-39h] BYREF
  __int64 v29; // [rsp+80h] [rbp-21h]
  int *v30; // [rsp+88h] [rbp-19h]
  __int64 v31; // [rsp+90h] [rbp-11h]

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v12 = 0;
  CD2DContext::EnsureBeginDraw(this, v13, v14);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v26 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    v29 = 4LL;
    *(_QWORD *)&v28.m[2][0] = &v25;
    v30 = &v26;
    v31 = 4LL;
    v25 = 3;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)"1",
      v19,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v28);
  }
  v15 = *(void (__fastcall ***)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))a2;
  memset(&v28, 0, sizeof(v28));
  v16 = *v15;
  if ( v16 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v28);
  else
    v16(a2, &v28);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 25) + 240LL))(
    *((_QWORD *)this + 25),
    &v28);
  if ( a8 != *((_DWORD *)this + 99) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 624LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a8);
    *((_DWORD *)this + 99) = a8;
  }
  if ( a7 != *((_DWORD *)this + 98) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a7);
    *((_DWORD *)this + 98) = a7;
  }
  v27 = v28;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v21 = *(_QWORD *)a3;
    *(_OWORD *)&v28.m11 = 0LL;
    v22 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64, struct ID2D1StrokeStyle1 *, struct D2D_MATRIX_3X2_F *, _DWORD, struct D2D_MATRIX_3X2_F *))(v21 + 40))(
            a3,
            v17,
            a6,
            &v27,
            LODWORD(FLOAT_0_25),
            &v28);
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x443u, 0LL);
      return v12;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v23,
        v24,
        SLOBYTE(v28.m[1][0]),
        SLOBYTE(v28.m[1][1]));
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *))(**((_QWORD **)this + 25) + 176LL))(
    *((_QWORD *)this + 25),
    a3,
    a4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v25 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    v29 = 4LL;
    *(_QWORD *)&v28.m[2][0] = &v26;
    v31 = 4LL;
    v30 = &v25;
    v26 = 3;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      v20,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v28);
  }
  return v12;
}
