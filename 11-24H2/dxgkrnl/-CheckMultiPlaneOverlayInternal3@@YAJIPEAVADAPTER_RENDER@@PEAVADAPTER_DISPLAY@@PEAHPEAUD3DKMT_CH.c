/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14036F49C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14040154C (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x140042784 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_DDisplay_AggCheckMpo__private_IsEnabledDeviceUsageNoInline @ 0x14006CAF0 (Feature_DDisplay_AggCheckMpo__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A9E88 (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1402F54D0 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1402FF768 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403703A0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x14037041C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x140393D94 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1403950AC (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x140395EE0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1403BEE68 (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1403FD200 (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x140406680 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        unsigned int a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  void **v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGALLOCATION **v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v23; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v24; // rcx
  __int64 *v25; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v26; // r8
  __int64 v27; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v28; // rcx
  __int64 v29; // rdx
  bool v30; // al
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v31; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v32; // r10
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v33; // edx
  __int64 v34; // rdi
  unsigned int v35; // ebx
  void **v36; // rdx
  signed __int64 v37; // r13
  __int64 v38; // r8
  bool v39; // al
  __int64 v40; // rcx
  struct _KTHREAD **v41; // r13
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v42; // r14
  unsigned int v43[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v44[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // [rsp+60h] [rbp-A0h]
  ADAPTER_DISPLAY *v46; // [rsp+68h] [rbp-98h]
  struct ADAPTER_RENDER *v47; // [rsp+70h] [rbp-90h]
  PVOID v48; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v49[24]; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+98h] [rbp-68h]
  unsigned int v51; // [rsp+A0h] [rbp-60h]
  PVOID v52; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v53[24]; // [rsp+B0h] [rbp-50h] BYREF
  int v54; // [rsp+C8h] [rbp-38h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v55; // [rsp+D0h] [rbp-30h]
  PVOID v56; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v57[24]; // [rsp+E0h] [rbp-20h] BYREF
  int v58; // [rsp+F8h] [rbp-8h]
  PVOID v59; // [rsp+100h] [rbp+0h] BYREF
  char v60; // [rsp+108h] [rbp+8h] BYREF
  int v61; // [rsp+120h] [rbp+20h]
  PVOID v62; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v63[96]; // [rsp+138h] [rbp+38h] BYREF
  int v64; // [rsp+198h] [rbp+98h]
  PVOID P; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v66[264]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v67; // [rsp+2B0h] [rbp+1B0h]
  PVOID v68; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v69[132]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v70; // [rsp+34Ch] [rbp+24Ch]

  *a4 = 0;
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned int *)a3 + 24);
  v47 = a2;
  v51 = a1;
  v8 = *(_DWORD *)(v6 + 2944) * v7;
  v46 = a3;
  v62 = 0LL;
  v64 = 0;
  *(_QWORD *)v44 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                     (__int64 *)&v62,
                     v8);
  if ( !*(_QWORD *)v44 )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry3(3LL, v8, -1073741801LL, CurrentProcess);
    WdLogGlobalForLineNumber = 10309;
LABEL_37:
    if ( v62 != v63 )
    {
      if ( v62 )
        ExFreePoolWithTag(v62, 0);
    }
    return 3221225495LL;
  }
  v48 = 0LL;
  v50 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                  (__int64 *)&v48,
                                                                  v8);
  P = 0LL;
  v67 = 0;
  v12 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements((__int64 *)&P, v8);
  if ( !v12 )
  {
    v13 = PsGetCurrentProcess(v11);
    WdLogSingleEntry3(3LL, v8, -1073741801LL, v13);
    WdLogGlobalForLineNumber = 10333;
LABEL_5:
    if ( P != v66 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v67 = 0;
    if ( v48 != v49 && v48 )
      ExFreePoolWithTag(v48, 0);
    v48 = 0LL;
    v50 = 0;
    goto LABEL_37;
  }
  v52 = 0LL;
  v54 = 0;
  v15 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                   (__int64 *)&v52,
                   v8);
  if ( !v15 )
  {
    v16 = PsGetCurrentProcess(v14);
    WdLogSingleEntry3(3LL, v8, -1073741801LL, v16);
    WdLogGlobalForLineNumber = 10345;
    if ( v52 != v53 && v52 )
      ExFreePoolWithTag(v52, 0);
    v52 = 0LL;
    v54 = 0;
    goto LABEL_5;
  }
  v56 = 0LL;
  v58 = 0;
  v18 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                   (__int64 *)&v56,
                                   v8);
  if ( !v18 )
  {
    v19 = PsGetCurrentProcess(v17);
    WdLogSingleEntry3(3LL, v8, -1073741801LL, v19);
    WdLogGlobalForLineNumber = 10357;
LABEL_24:
    if ( v56 != v57 && v56 )
      ExFreePoolWithTag(v56, 0);
    v58 = 0;
    v56 = 0LL;
    if ( v52 != v53 && v52 )
      ExFreePoolWithTag(v52, 0);
    v54 = 0;
    v52 = 0LL;
    if ( P != v66 && P )
      ExFreePoolWithTag(P, 0);
    v67 = 0;
    P = 0LL;
    if ( v48 != v49 && v48 )
      ExFreePoolWithTag(v48, 0);
    v50 = 0;
    v48 = 0LL;
    goto LABEL_37;
  }
  v68 = 0LL;
  v70 = 0;
  *(_QWORD *)v43 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                     (__int64 *)&v68,
                     v7);
  if ( !*(_QWORD *)v43 )
  {
    v21 = PsGetCurrentProcess(v20);
    WdLogSingleEntry3(3LL, v7, -1073741801LL, v21);
    WdLogGlobalForLineNumber = 10369;
    if ( v68 != v69 && v68 )
      ExFreePoolWithTag(v68, 0);
    v68 = 0LL;
    v70 = 0;
    goto LABEL_24;
  }
  v59 = 0LL;
  v61 = 0;
  v23 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(
                                                                             (__int64 *)&v59,
                                                                             v7);
  v55 = v23;
  if ( v8 )
  {
    v24 = Elements;
    v25 = (__int64 *)(*(_QWORD *)v44 + 24LL);
    v26 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v44;
    v27 = v8;
    do
    {
      *v24 = v26++;
      *v25 = v12;
      ++v24;
      v12 += 88LL;
      v25 += 4;
      --v27;
    }
    while ( v27 );
  }
  if ( (_DWORD)v7 )
  {
    v28 = *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v43;
    v29 = v7;
    do
    {
      *v23++ = v28++;
      --v29;
    }
    while ( v29 );
  }
  v43[0] = 0;
  v44[0] = 0;
  v30 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v47 + 2));
  v33 = -1;
  if ( !v30 )
    v33 = v51;
  ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe((struct _KTHREAD **)v46, v33, v8, v18, v43, v32, v44, v31);
  v34 = v43[0];
  if ( v43[0] > v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10421;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ActualPlaneCount <= MaxPlanes",
      10421LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v35 = v44[0];
  if ( v44[0] > (unsigned int)v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10422;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"ActualPostCompositionCount <= NumVidPnSources",
      10422LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v34 )
  {
    v36 = v15;
    v37 = (char *)v18 - (char *)v15;
    v38 = v34;
    do
    {
      *v36 = *(void **)((*(_QWORD **)((char *)v36 + v37))[6] + 16LL);
      ++v36;
      --v38;
    }
    while ( v38 );
  }
  v39 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v47 + 2));
  v41 = (struct _KTHREAD **)v46;
  if ( v39 )
  {
    v42 = Elements;
    CallCheckMultiPlaneOverlaySupport3DDI(v34, Elements, v15, v35, v55, v46, a4, a5);
  }
  else if ( (unsigned int)v34 > *(_DWORD *)(v40 + 2944) )
  {
    v42 = Elements;
  }
  else
  {
    v42 = Elements;
    if ( *(_QWORD *)(v40 + 992) )
      CallCheckMultiPlaneOverlaySupport2DDI((unsigned int)v34, Elements, v15, v46, a4, a5);
    else
      CallCheckMultiPlaneOverlaySupport1DDI((unsigned int)v34, Elements, v15, v46, a4, a5);
  }
  if ( !(unsigned int)Feature_DDisplay_AggCheckMpo__private_IsEnabledDeviceUsageNoInline()
    && *a4 == 1
    && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v41)
    && !*(_BYTE *)(*((_QWORD *)v47 + 2) + 3051LL) )
  {
    *a4 = 0;
    a5->Value = a5->Value & 0xFFFFFFE0 | 0x10;
  }
  LogCheckMutiplaneOverlaySupport(0LL, (unsigned int)*a4, v34, v42, v15, v35, v55, v47);
  if ( v59 != &v60 && v59 )
    ExFreePoolWithTag(v59, 0);
  v59 = 0LL;
  v61 = 0;
  if ( v68 != v69 && v68 )
    ExFreePoolWithTag(v68, 0);
  v68 = 0LL;
  v70 = 0;
  if ( v56 != v57 && v56 )
    ExFreePoolWithTag(v56, 0);
  v56 = 0LL;
  v58 = 0;
  if ( v52 != v53 && v52 )
    ExFreePoolWithTag(v52, 0);
  v52 = 0LL;
  v54 = 0;
  if ( P != v66 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v67 = 0;
  if ( v48 != v49 && v48 )
    ExFreePoolWithTag(v48, 0);
  v48 = 0LL;
  v50 = 0;
  if ( v62 != v63 && v62 )
    ExFreePoolWithTag(v62, 0);
  return 0LL;
}
