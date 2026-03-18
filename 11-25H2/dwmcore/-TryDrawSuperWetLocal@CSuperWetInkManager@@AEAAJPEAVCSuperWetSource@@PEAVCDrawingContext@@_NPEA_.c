/*
 * XREFs of ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801ACA34
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD340 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     TryFillRenderState @ 0x180177164 (TryFillRenderState.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801ACFF4 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x18022A31C (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryDrawSuperWetLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        const struct CVisualTree **a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct CSuperWetInkManager::SuperWetStroke *v8; // rdx
  __int64 v10; // rax
  int v11; // eax
  CVisual *CurrentVisual; // rax
  __int64 **TreeData; // rax
  const __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rax
  const struct CVisualTree *v18; // rdx
  int v19; // eax
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v23[2]; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-41h] BYREF
  __m128i v25; // [rsp+50h] [rbp-31h] BYREF
  __int128 v26; // [rsp+60h] [rbp-21h] BYREF
  __int64 v27[2]; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v28[2]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0;
  v8 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  if ( !v8 || *((_QWORD *)g_pComposition + 111) - *((_QWORD *)v8 + 11) >= 0xAuLL )
    return 0LL;
  v29 = 0LL;
  v10 = *(_QWORD *)a2;
  *(_OWORD *)v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v11 = (*(__int64 (__fastcall **)(struct CSuperWetSource *))(v10 + 360))(a2);
  if ( !TryFillRenderState((CDrawingContext *)a3, a4, v11, 0, (__int64)v27) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        20LL);
    return 0LL;
  }
  (*(void (__fastcall **)(const struct CVisualTree *, _DWORD *))(*(_QWORD *)a3[4] + 88LL))(a3[4], v23);
  v24[0] = 0;
  v24[1] = 0;
  v24[2] = v23[0];
  v24[3] = v23[1];
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)a3);
  TreeData = CVisual::FindTreeData(CurrentVisual, a3[993]);
  if ( TreeData && (v14 = (const __m128i *)TreeData[33]) != 0LL )
    v15 = _mm_loadu_si128(v14);
  else
    v15 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v25 = v15;
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip(&v25, v24, a3 + 12, (char *)v28 + 12) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0x_EventWriteTransfer(v16, &EVTDESC_COMPUTESCRIBBLE_DRAWSKIPPED, a2);
    *a5 = 1;
    return 0LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int64 *, _QWORD))(*(_QWORD *)a2 + 312LL))(
          a2,
          a3[5],
          v27,
          0LL) )
    return 0LL;
  v17 = *(_QWORD *)a2;
  v18 = a3[5];
  v22 = 0LL;
  v19 = (*(__int64 (__fastcall **)(struct CSuperWetSource *, const struct CVisualTree *, __int64 *, __int64 *))(v17 + 320))(
          a2,
          v18,
          v27,
          &v22);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v22);
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          19LL);
LABEL_14:
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      return 0LL;
    }
    v26 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, const struct CVisualTree **, __int128 *))(*(_QWORD *)v22 + 80LL))(
            v22,
            a3,
            &v26);
    v20 = v21;
    if ( v21 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a3[993] + 184LL))(a3[993]) )
        *(_OWORD *)((char *)a2 + 72) = v26;
      *a5 = 1;
      goto LABEL_14;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v21);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  }
  return v20;
}
