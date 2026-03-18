/*
 * XREFs of ?SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1_N@Z @ 0x1802B3CCC
 * Callers:
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1802B41A0 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z @ 0x1802B49CC (-UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800279C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_N.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802B367C (-Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCursorState::SetHardwareShapeAndPosition(__int64 a1, __int64 *a2, int *a3, _DWORD *a4, char a5)
{
  bool v5; // zf
  unsigned int **v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // r13
  unsigned int v13; // r11d
  __int128 *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  bool v17; // cc
  unsigned int *v18; // rax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, std::_Ref_count_base **, __int64, __int64 *); // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r8d
  bool v25; // cf
  __int64 *v26; // rdi
  int v27; // r9d
  int v28; // r8d
  __int64 v29; // r11
  int v30; // eax
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // r8d
  __int64 v34; // rax
  char result; // al
  int v36; // [rsp+20h] [rbp-81h]
  int v37[2]; // [rsp+20h] [rbp-81h]
  int v38; // [rsp+30h] [rbp-71h] BYREF
  __int64 v39; // [rsp+38h] [rbp-69h] BYREF
  _DWORD *v40; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v41[2]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v42; // [rsp+50h] [rbp-51h] BYREF
  __int128 v43; // [rsp+60h] [rbp-41h]
  int v44; // [rsp+70h] [rbp-31h] BYREF
  std::_Ref_count_base *v45[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v46; // [rsp+88h] [rbp-19h] BYREF
  int v47; // [rsp+90h] [rbp-11h]
  int v48; // [rsp+94h] [rbp-Dh]
  int v49; // [rsp+98h] [rbp-9h]
  int v50; // [rsp+9Ch] [rbp-5h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = *(_BYTE *)(a1 + 80) == 0;
  v40 = a4;
  if ( !v5 )
    return 0;
  v9 = (unsigned int **)(a2 + 14);
  v10 = a2[14];
  if ( !v10 )
    return 0;
  v11 = *(_QWORD *)(v10 + 16);
  v12 = 1;
  if ( *((_DWORD *)a2 + 38) )
    v12 = a5;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v11 + 120) + 32LL))(v11 + 120, v41);
  v13 = v41[0];
  v14 = 0LL;
  v46 = *a2;
  v47 = *((_DWORD *)a2 + 2);
  v48 = *a3;
  v15 = a3[1];
  v50 = 1;
  v16 = v41[1];
  v49 = v15;
  v42 = 0LL;
  v43 = 0LL;
  if ( *((_BYTE *)a2 + 156)
    && !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEquivalentTo(v40, a3) )
  {
    v17 = v13 <= v16;
    goto LABEL_14;
  }
  if ( v12 )
  {
    v17 = v13 <= v16;
    if ( v13 == v16 )
    {
      v18 = *v9;
      v39 = 0LL;
      v45[0] = 0LL;
      v45[1] = (std::_Ref_count_base *)__PAIR64__(v16, v13);
      v19 = *((_QWORD *)v18 + 2);
      v20 = *(__int64 (__fastcall **)(__int64, std::_Ref_count_base **, __int64, __int64 *))(*(_QWORD *)(v19 + 16) + 24LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v39);
      v21 = v20(v19 + 16, v45, 1LL, &v39);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x208,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v21,
          v36);
      v44 = 0;
      v40 = 0LL;
      v38 = 0;
      v22 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD **))(*(_QWORD *)v39 + 48LL))(v39, &v44, &v40);
      if ( v22 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x20D,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v22,
          v36);
      v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 40LL))(v39, &v38);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x20E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v23,
          v36);
      v14 = &v42;
      v24 = (*v9)[1];
      v25 = *(_BYTE *)(a1 + 81) != 0;
      LODWORD(v43) = **v9;
      *(_QWORD *)((char *)&v42 + 4) = *(_QWORD *)v41;
      HIDWORD(v42) = v38;
      LODWORD(v42) = v25 + 1;
      DWORD1(v43) = v24;
      *((_QWORD *)&v43 + 1) = v40;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
      goto LABEL_19;
    }
LABEL_14:
    v26 = (__int64 *)(a1 + 280);
    if ( !v17 )
      v16 = v13;
    if ( (int)CCursorState::PaddedBitmap::Reset((void **)(a1 + 280), v16, *(_BYTE *)(a1 + 81)) < 0 )
      return 0;
    v27 = *(_DWORD *)(a1 + 288);
    v28 = v40[3] - v40[1];
    v29 = (unsigned int)(*v40 - *a3);
    v30 = v29 + v40[2] - *v40;
    HIDWORD(v45[0]) = v40[1] - a3[1];
    LODWORD(v45[1]) = v30;
    LODWORD(v45[0]) = v29;
    HIDWORD(v45[1]) = v28 + HIDWORD(v45[0]);
    *(_QWORD *)v37 = *v26 + (unsigned int)(HIDWORD(v45[0]) * v27) + 4 * v29;
    v31 = (*(__int64 (__fastcall **)(__int64, std::_Ref_count_base **, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v9 + 2)
                                                                                                  + 120LL)
                                                                                      + 64LL))(
            *((_QWORD *)*v9 + 2) + 120LL,
            v45,
            *(unsigned int *)(a1 + 288),
            (unsigned int)(v28 * v27 - 4 * v29));
    if ( v31 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F1,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v31,
        v37[0]);
    v32 = **v9;
    v33 = (*v9)[1];
    v25 = *(_BYTE *)(a1 + 81) != 0;
    DWORD1(v42) = v16;
    HIDWORD(v42) = *(_DWORD *)(a1 + 288);
    v34 = *v26;
    DWORD2(v42) = v16;
    LODWORD(v42) = v25 + 1;
    v14 = &v42;
    *(_QWORD *)&v43 = __PAIR64__(v33, v32);
    *((_QWORD *)&v43 + 1) = v34;
  }
LABEL_19:
  if ( !g_disableHardwareCursors && (int)NtHWCursorUpdatePointer(&v46, v14) >= 0 )
  {
    result = 1;
    *((_DWORD *)a2 + 35) = v48;
    *((_DWORD *)a2 + 36) = v49;
    *((_DWORD *)a2 + 38) = 1;
    return result;
  }
  *(_OWORD *)v45 = 0LL;
  std::shared_ptr<CRegion>::operator=(v9, (__int64 *)v45);
  if ( v45[1] )
    std::_Ref_count_base::_Decref(v45[1]);
  return 0;
}
