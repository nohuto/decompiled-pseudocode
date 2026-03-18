/*
 * XREFs of ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180087010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x18002B3F0 (-GetCurrentZ@CDrawingContext@@UEBAHXZ.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800873A0 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FillShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  unsigned int v10; // r14d
  void (__fastcall **v11)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v12)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *); // rax
  __int64 (__fastcall *v14)(CDrawingContext *); // rax
  float v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  __int64 (__fastcall *v20)(CDrawingContext *); // rax
  float v21; // eax
  __int64 v22; // r8
  int m12_low; // [rsp+30h] [rbp-D0h] BYREF
  FLOAT m11; // [rsp+38h] [rbp-C8h] BYREF
  FLOAT m21; // [rsp+40h] [rbp-C0h] BYREF
  int m22_low; // [rsp+48h] [rbp-B8h] BYREF
  struct D2D_MATRIX_3X2_F v27; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_MATRIX_3X2_F v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  FLOAT *p_m21; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  _BYTE v32[16]; // [rsp+A0h] [rbp-60h] BYREF
  FLOAT *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  FLOAT *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *p_m22_low; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]

  CD2DContext::FlushDrawList(this);
  v10 = 0;
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v14 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 8LL);
    if ( v14 == CDrawingContext::GetCurrentZ )
      LODWORD(v15) = CDrawingContext::GetCurrentZ(a2);
    else
      LODWORD(v15) = v14(a2);
    m11 = v15;
    m12_low = 3;
    *(_QWORD *)&v28.m[2][0] = &m12_low;
    v29 = 4LL;
    p_m21 = &m11;
    v31 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      v16,
      3LL,
      &v28);
  }
  v11 = *(void (__fastcall ***)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *))a2;
  memset(&v28, 0, sizeof(v28));
  v12 = *v11;
  if ( v12 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v28);
  else
    v12(a2, &v28);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 25) + 240LL))(
    *((_QWORD *)this + 25),
    &v28);
  if ( a6 != *((_DWORD *)this + 99) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 624LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a6);
    *((_DWORD *)this + 99) = a6;
  }
  if ( a5 != *((_DWORD *)this + 98) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a5);
    *((_DWORD *)this + 98) = a5;
  }
  v27 = v28;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v17 = *(_QWORD *)a3;
    *(_OWORD *)&v28.m11 = 0LL;
    v18 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, struct D2D_MATRIX_3X2_F *))(v17 + 32))(
            a3,
            &v27,
            &v28);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x410u, 0LL);
      return v10;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v33 = &m11;
      m22_low = LODWORD(v28.m22);
      v35 = &m12_low;
      v37 = &m21;
      p_m22_low = &m22_low;
      m21 = v28.m21;
      m12_low = LODWORD(v28.m12);
      m11 = v28.m11;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v19,
        5LL,
        v32);
    }
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *, _QWORD))(**((_QWORD **)this + 25)
                                                                                            + 184LL))(
    *((_QWORD *)this + 25),
    a3,
    a4,
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v20 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)a2 + 8LL);
    if ( v20 == CDrawingContext::GetCurrentZ )
      LODWORD(v21) = CDrawingContext::GetCurrentZ(a2);
    else
      LODWORD(v21) = v20(a2);
    m21 = v21;
    m22_low = 3;
    *(_QWORD *)&v28.m[2][0] = &m22_low;
    v29 = 4LL;
    p_m21 = &m21;
    v31 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      v22,
      3LL,
      &v28);
  }
  return v10;
}
