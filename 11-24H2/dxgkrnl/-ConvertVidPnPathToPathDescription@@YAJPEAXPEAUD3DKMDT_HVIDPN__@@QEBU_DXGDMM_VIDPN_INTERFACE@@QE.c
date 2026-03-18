/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403AE6BC
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140362970 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004C84C (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004D56C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140315D70 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403AEC30 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        _QWORD *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a9)
{
  __int64 (__fastcall *v9)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *); // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v11; // r14
  int v13; // eax
  __int64 v14; // rdi
  char v15; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int64 (__fastcall *v28)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // xmm1_8
  __int64 v36; // rax
  __int64 v38; // rdi
  const wchar_t *v39; // r9
  __int64 v40; // r14
  __int64 v41; // rdi
  __int64 v42; // r15
  char v43; // [rsp+58h] [rbp-91h] BYREF
  _WORD v44[3]; // [rsp+59h] [rbp-90h] BYREF
  __int64 v45; // [rsp+60h] [rbp-89h] BYREF
  __int64 v46; // [rsp+68h] [rbp-81h] BYREF
  __int64 v47; // [rsp+70h] [rbp-79h] BYREF
  __int64 v48; // [rsp+78h] [rbp-71h] BYREF
  _BYTE v49[8]; // [rsp+80h] [rbp-69h] BYREF
  __int64 v50; // [rsp+88h] [rbp-61h]
  void (__fastcall *v51)(__int64, __int64); // [rsp+90h] [rbp-59h]
  __int64 v52; // [rsp+98h] [rbp-51h]
  int v53; // [rsp+A0h] [rbp-49h]
  __int64 v54; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-29h] BYREF
  _BYTE v58[8]; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-19h]
  void (__fastcall *v60)(__int64, __int64); // [rsp+D8h] [rbp-11h]
  __int64 v61; // [rsp+E0h] [rbp-9h]
  int v62; // [rsp+E8h] [rbp-1h]
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v65; // [rsp+140h] [rbp+57h] BYREF

  v65 = a4;
  v9 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))*((_QWORD *)a4 + 3);
  v11 = a5;
  v54 = 0LL;
  v13 = v9(a5, a6, a7, &v54);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v13);
    WdLogGlobalForLineNumber = 3803;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire Vidpn present path from VidPn topology 0x%I64x (status = 0x%I64x)",
      (__int64)v11,
      v14,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
  v44[0] = 0;
  v43 = 0;
  if ( (int)DxgkQueryMonitorTypeLockHeld(a1, a7, 0LL, 0LL, 0LL, (__int64)v44 + 1, (__int64)v44, (__int64)&v43) < 0 )
    v15 = 0;
  else
    v15 = (v43 != 0 ? 4 : 0) | (LOBYTE(v44[0]) != 0 ? 2 : 0) | (HIBYTE(v44[0]) != 0);
  v16 = a9;
  *((_BYTE *)a9 + 129) = v15;
  v17 = v54;
  v18 = *(_DWORD *)(v54 + 12);
  if ( v18 != 254 )
  {
    *((_DWORD *)v16 + 35) = v18;
    *((_DWORD *)v16 + 34) = *(_DWORD *)(v17 + 12);
    *(_QWORD *)v16 |= 0x40000010000uLL;
  }
  v19 = *(_DWORD *)(v17 + 20);
  if ( v19 != 254 )
  {
    *(_QWORD *)v16 |= 0x200uLL;
    *((_DWORD *)v16 + 33) = v19;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v65 + 4))(v11);
  v45 = 0LL;
  v47 = 0LL;
  v20 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 1))(
          a2,
          a6,
          &v45,
          &v47);
  v21 = v20;
  if ( v20 < 0 )
  {
    v38 = a6;
    WdLogSingleEntry3(2LL, a6, a2, v20);
    v39 = L"Failed to acquire source mode set on source 0x%I64x of VidPN 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 3861;
LABEL_22:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v39, v38, (__int64)a2, v21, 0LL, 0LL);
    return (unsigned int)v21;
  }
  v22 = *((_QWORD *)a3 + 2);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v49,
    v45,
    v22,
    (__int64)a2);
  v55 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v47 + 24))(v45, &v55);
  v21 = v23;
  if ( v23 < 0 )
  {
    v41 = a6;
    v42 = v50;
    WdLogSingleEntry3(2LL, a6, v50, v23);
    WdLogGlobalForLineNumber = 3882;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire pinned mode info on source 0x%I64x in mode set 0x%I64x (status = 0x%I64x)",
      v41,
      v42,
      v21,
      0LL,
      0LL);
    if ( v49[0] )
      v51(v52, v42);
    return (unsigned int)v21;
  }
  if ( v23 != 1075708679 )
  {
    v24 = v55;
    v25 = v45;
    *((_BYTE *)v16 + 128) = (unsigned int)(*(_DWORD *)(v55 + 4) - 3) <= 1;
    v26 = v47;
    *((_OWORD *)v16 + 6) = *(_OWORD *)(v24 + 8);
    v27 = *(_OWORD *)(v24 + 24);
    *(_QWORD *)v16 |= 0x100uLL;
    *((_OWORD *)v16 + 7) = v27;
    (*(void (__fastcall **)(__int64))(v26 + 32))(v25);
  }
  if ( v49[0] )
    v51(v52, v50);
  v28 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a3 + 3);
  v49[0] = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = -1073741212;
  v46 = 0LL;
  v48 = 0LL;
  v29 = v28(a2, a7, &v46, &v48);
  v21 = v29;
  if ( v29 < 0 )
  {
    v38 = a7;
    WdLogSingleEntry3(2LL, a7, a2, v29);
    v39 = L"Failed to acquire target mode set of target 0x%I64x in VidPN 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 3917;
    goto LABEL_22;
  }
  v30 = *((_QWORD *)a3 + 4);
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0;
  v58[0] = 0;
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v58,
    v46,
    v30,
    (__int64)a2);
  v56 = 0LL;
  v57 = 0LL;
  LODWORD(v65) = 0;
  v31 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))(v48 + 24))(
          v46,
          &v56,
          &v57,
          &v65);
  v14 = v31;
  if ( v31 < 0 || v31 == 1075708679 )
  {
    v40 = v59;
    WdLogSingleEntry2(2LL, v59, v31);
    WdLogGlobalForLineNumber = 3943;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire info of mode pinned in VidPN target mode set 0x%I64x (status = 0x%I64x)",
      v40,
      v14,
      0LL,
      0LL,
      0LL);
    if ( v58[0] )
      v60(v61, v40);
    return (unsigned int)v14;
  }
  v32 = v56;
  v33 = v57;
  v34 = v46;
  *((_OWORD *)v16 + 2) = *(_OWORD *)(v56 + 8);
  *((_OWORD *)v16 + 3) = *(_OWORD *)(v32 + 24);
  *((_OWORD *)v16 + 4) = *(_OWORD *)(v32 + 40);
  v35 = *(_QWORD *)(v32 + 56);
  *(_QWORD *)v16 |= 0x1000087uLL;
  *((_QWORD *)v16 + 28) = v33;
  *((_DWORD *)v16 + 60) = (_DWORD)v65;
  v36 = v48;
  *((_QWORD *)v16 + 10) = v35;
  (*(void (__fastcall **)(__int64))(v36 + 32))(v34);
  if ( a8 )
  {
    if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                a1,
                a6,
                a7,
                (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v16 + 51,
                (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v16 + 52) >= 0 )
    {
      *(_QWORD *)v16 |= 8uLL;
    }
    else
    {
      WdLogSingleEntry2(3LL, a6, a7);
      WdLogGlobalForLineNumber = 3965;
    }
  }
  if ( v58[0] )
    v60(v61, v59);
  return 0LL;
}
