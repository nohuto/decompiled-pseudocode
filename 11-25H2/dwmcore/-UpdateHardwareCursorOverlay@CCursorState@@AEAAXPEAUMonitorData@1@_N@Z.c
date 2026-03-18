/*
 * XREFs of ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x1802BDDAC
 * Callers:
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x1802BD3BC (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x1802BD8E8 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x1802BC558 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802BCBEC (-Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::UpdateHardwareCursorOverlay(
        CCursorState *this,
        struct CCursorState::MonitorData *a2,
        char a3)
{
  float v3; // xmm4_4
  __int64 *v4; // rbx
  float v5; // xmm3_4
  __int64 v7; // rcx
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  char v12; // r13
  int v13; // r11d
  int v14; // r10d
  int v15; // r11d
  int v16; // ecx
  bool v17; // sf
  int v18; // ecx
  int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  CCursorState *v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  unsigned int v25; // r14d
  std::_Ref_count_base *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, _QWORD *, __int64, __int64 *); // rbx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // edi
  __int64 *v34; // rbx
  CCursorState *v35; // rcx
  __int64 v36; // rdx
  int v37; // r13d
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // r10
  unsigned int v43; // edx
  unsigned int *v44; // rax
  unsigned int v45; // r8d
  unsigned int v46; // r9d
  bool v47; // cf
  int v48; // [rsp+28h] [rbp-B9h]
  int v49; // [rsp+28h] [rbp-B9h]
  float v51; // [rsp+3Ch] [rbp-A5h]
  int v52; // [rsp+3Ch] [rbp-A5h]
  __int64 v53; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v54; // [rsp+48h] [rbp-99h] BYREF
  int v55; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v56; // [rsp+54h] [rbp-8Dh]
  __int64 v57; // [rsp+58h] [rbp-89h]
  __int64 v58; // [rsp+60h] [rbp-81h] BYREF
  __int64 v59; // [rsp+68h] [rbp-79h] BYREF
  std::_Ref_count_base *v60[2]; // [rsp+70h] [rbp-71h] BYREF
  __int128 v61; // [rsp+80h] [rbp-61h] BYREF
  __int128 v62; // [rsp+90h] [rbp-51h]
  std::_Ref_count_base *v63[2]; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-31h] BYREF
  int v65; // [rsp+B8h] [rbp-29h]
  int v66; // [rsp+BCh] [rbp-25h]
  int v67; // [rsp+C0h] [rbp-21h]
  int v68; // [rsp+C4h] [rbp-1Dh]
  _QWORD v69[2]; // [rsp+C8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v3 = *((float *)this + 14);
  v4 = (__int64 *)((char *)a2 + 96);
  v5 = *((float *)this + 15);
  v7 = *((_QWORD *)a2 + 12);
  v9 = (float)((float)((float)(v5 * *((float *)a2 + 7)) + (float)(v3 * *((float *)a2 + 3))) + *((float *)a2 + 15))
     + 6291456.25;
  v10 = (float)(((int)(LODWORD(v9) << 10) >> 11) - *(_DWORD *)v7);
  v51 = (float)((float)((float)(v3 * *((float *)a2 + 4)) + (float)(v5 * *((float *)a2 + 8))) + *((float *)a2 + 16))
      + 6291456.25;
  v11 = (float)(((int)(LODWORD(v51) << 10) >> 11) - *(_DWORD *)(v7 + 4));
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL) + 32LL))(
    *(_QWORD *)(v7 + 24) + 120LL,
    &v59);
  v12 = 0;
  v13 = *((_DWORD *)a2 + 21);
  v14 = *((_DWORD *)a2 + 20) - (int)v10;
  if ( v14 < 0 )
    v14 = 0;
  LODWORD(v57) = v14;
  v15 = v13 - (int)v11;
  if ( v15 < 0 )
    v15 = 0;
  v16 = (int)v10 - *((_DWORD *)a2 + 22);
  v17 = (int)v59 + v16 < 0;
  v18 = v59 + v16;
  v52 = v15;
  if ( v17 )
    v18 = 0;
  v19 = HIDWORD(v59) + (int)v11 - *((_DWORD *)a2 + 23);
  if ( v19 < 0 )
    v19 = 0;
  v20 = v14 + v18;
  if ( (unsigned int)v59 < v20 )
    v20 = v59;
  v21 = v59 - v20;
  v22 = (CCursorState *)(unsigned int)(v15 + v19);
  v56 = v21;
  if ( HIDWORD(v59) < (unsigned int)v22 )
    v22 = (CCursorState *)HIDWORD(v59);
  v23 = HIDWORD(v59) - (_DWORD)v22;
  if ( !v21 || !v23 )
  {
LABEL_45:
    CCursorState::EnsureHardwareOverlayCleared(v22, a2);
    return;
  }
  v24 = *(_QWORD *)a2;
  v67 = (int)v11;
  v25 = v59;
  v64 = v24;
  LODWORD(v24) = *((_DWORD *)a2 + 2);
  v66 = (int)v10;
  v65 = v24;
  v68 = 1;
  v26 = 0LL;
  if ( (unsigned int)v59 < HIDWORD(v59) )
    v25 = HIDWORD(v59);
  v61 = 0LL;
  v62 = 0LL;
  if ( *((_BYTE *)a2 + 125) && __PAIR64__(v23, v21) != v59 )
    v12 = 1;
  if ( !a3 && *((_BYTE *)a2 + 124) && !v12 )
  {
LABEL_41:
    if ( (int)NtHWCursorUpdatePointer(&v64, v26) >= 0 )
    {
      *((_BYTE *)a2 + 124) = 1;
      return;
    }
    *(_OWORD *)v63 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=(v4, (__int64 *)v63);
    v22 = v63[1];
    if ( v63[1] )
      std::_Ref_count_base::_Decref(v63[1]);
    goto LABEL_45;
  }
  v69[1] = v59;
  v27 = *v4;
  v54 = 0LL;
  v69[0] = 0LL;
  v28 = *(_QWORD *)(v27 + 24);
  v60[0] = (std::_Ref_count_base *)&v61;
  v29 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *))(*(_QWORD *)(v28 + 16) + 24LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v54);
  v30 = v29(v28 + 16, v69, 1LL, &v54);
  if ( v30 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6B8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v30,
      v48);
  v55 = 0;
  v58 = 0LL;
  LODWORD(v53) = 0;
  v31 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v54 + 48LL))(v54, &v55, &v58);
  if ( v31 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6BE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v31,
      v48);
  v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 40LL))(v54, &v53);
  if ( v32 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6BF,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v32,
      v48);
  if ( !v12 )
  {
    v42 = v58;
    v43 = v53;
LABEL_40:
    v44 = (unsigned int *)*((_QWORD *)a2 + 12);
    v45 = *v44;
    v46 = v44[1];
    v47 = *((_BYTE *)this + 81) != 0;
    DWORD1(v61) = v25;
    *((_QWORD *)&v61 + 1) = __PAIR64__(v43, v25);
    *(_QWORD *)&v62 = __PAIR64__(v46, v45);
    LODWORD(v61) = v47 + 1;
    *((_QWORD *)&v62 + 1) = v42;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v54);
    v26 = v60[0];
    v4 = (__int64 *)((char *)a2 + 96);
    goto LABEL_41;
  }
  v33 = v56;
  v34 = (__int64 *)((char *)this + 280);
  v25 = v56;
  if ( v56 < v23 )
    v25 = v23;
  if ( (int)CCursorState::PaddedBitmap::Reset((CCursorState *)((char *)this + 280), v25, *((_BYTE *)this + 81)) >= 0 )
  {
    v36 = *v34;
    v37 = v57;
    v38 = *((unsigned int *)this + 72);
    v39 = (unsigned int)(*((_DWORD *)this + 73) * *((_DWORD *)this + 72));
    v63[0] = (std::_Ref_count_base *)__PAIR64__(v52, v57);
    LODWORD(v63[1]) = v33 + v57;
    HIDWORD(v63[1]) = v52 + v23;
    v49 = v36;
    v40 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL) + 120LL;
    v41 = (*(__int64 (__fastcall **)(__int64, std::_Ref_count_base **, __int64, __int64))(*(_QWORD *)v40 + 64LL))(
            v40,
            v63,
            v38,
            v39);
    if ( v41 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6DA,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v41,
        v49);
    v42 = *v34;
    v66 += v37;
    v43 = *((_DWORD *)this + 72);
    v67 += v52;
    v58 = v42;
    LODWORD(v53) = v43;
    goto LABEL_40;
  }
  *(_OWORD *)v60 = 0LL;
  std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)a2 + 12, (__int64 *)v60);
  v35 = v60[1];
  if ( v60[1] )
    std::_Ref_count_base::_Decref(v60[1]);
  CCursorState::EnsureHardwareOverlayCleared(v35, a2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v54);
}
