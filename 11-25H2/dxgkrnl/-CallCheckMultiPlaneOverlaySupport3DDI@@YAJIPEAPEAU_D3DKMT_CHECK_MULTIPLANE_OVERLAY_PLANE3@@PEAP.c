/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A374C
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A1D1C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1402A46A8 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403EE1C4 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403EE240 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        __int64 a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v10; // rcx
  __int64 v12; // r14
  _BYTE *Pool2; // r15
  unsigned __int64 v14; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v15; // rsi
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v16; // r10
  LONG *p_HighPart; // r9
  __int64 v18; // r11
  signed __int64 v19; // rbx
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  LONG v23; // edx
  int v24; // ebx
  __int64 CurrentProcess; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v30; // r9
  __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rax
  int v37; // [rsp+28h] [rbp-D8h]
  PVOID v38; // [rsp+30h] [rbp-D0h] BYREF
  char v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  _BYTE v42[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY *v44; // [rsp+70h] [rbp-90h]
  int *v45; // [rsp+78h] [rbp-88h]
  struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *v46; // [rsp+80h] [rbp-80h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v47; // [rsp+88h] [rbp-78h] BYREF
  PVOID v48; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v49[44]; // [rsp+B8h] [rbp-48h] BYREF
  int v50; // [rsp+E4h] [rbp-1Ch]
  PVOID v51; // [rsp+F0h] [rbp-10h]
  _BYTE v52[312]; // [rsp+F8h] [rbp-8h] BYREF
  int v53; // [rsp+230h] [rbp+130h]

  v8 = 0LL;
  v9 = a1;
  v10 = a8;
  v44 = a6;
  v12 = (unsigned int)a4;
  v37 = v9;
  *a7 = 0;
  a8->Value = 0;
  v45 = a7;
  v46 = (struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *)a8;
  P = 0LL;
  v43 = 0;
  if ( (unsigned int)v9 > 3 )
  {
    v14 = v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_33;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, a4);
    P = Pool2;
  }
  else
  {
    Pool2 = v42;
    P = v42;
    if ( (_DWORD)v9 )
    {
      memset(v42, 0, 8LL * (unsigned int)v9);
      Pool2 = P;
    }
  }
  v43 = v9;
  v14 = v9;
  if ( !Pool2 )
  {
LABEL_33:
    CurrentProcess = PsGetCurrentProcess(v10);
    WdLogSingleEntry3(3LL, v14, -1073741801LL, CurrentProcess);
    WdLogGlobalForLineNumber = 9740;
LABEL_34:
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225495LL;
  }
  v51 = 0LL;
  v53 = 0;
  if ( (unsigned int)v9 > 3 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x68 )
    {
LABEL_57:
      v35 = PsGetCurrentProcess(v10);
      WdLogSingleEntry3(3LL, v9, -1073741801LL, v35);
      WdLogGlobalForLineNumber = 9752;
      if ( v51 != v52 && v51 )
        ExFreePoolWithTag(v51, 0);
      v51 = 0LL;
      v53 = 0;
      goto LABEL_34;
    }
    v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)ExAllocatePool2(256LL, 104 * v9, 1265072196LL, a4);
    v51 = v15;
  }
  else
  {
    v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)v52;
    v51 = v52;
    if ( (_DWORD)v9 )
    {
      memset(v52, 0, 104 * v9);
      v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)v51;
    }
  }
  v53 = v9;
  if ( !v15 )
    goto LABEL_57;
  v38 = 0LL;
  v16 = 0LL;
  v40 = 0;
  v48 = 0LL;
  v50 = 0;
  if ( (_DWORD)v12 )
  {
    v8 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
           &v48,
           (unsigned int)v12);
    v27 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
            &v38,
            (unsigned int)v12);
    v16 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v27;
    if ( !v8 || !v27 )
    {
      v29 = PsGetCurrentProcess(v28);
      WdLogSingleEntry3(3LL, v12, -1073741801LL, v29);
      WdLogGlobalForLineNumber = 9773;
      if ( v38 != &v39 && v38 )
        ExFreePoolWithTag(v38, 0);
      v38 = 0LL;
      v40 = 0;
      if ( v48 != v49 && v48 )
        ExFreePoolWithTag(v48, 0);
      v48 = 0LL;
      v50 = 0;
      if ( v51 != v52 && v51 )
        ExFreePoolWithTag(v51, 0);
      v51 = 0LL;
      v53 = 0;
      goto LABEL_34;
    }
  }
  if ( (_DWORD)v9 )
  {
    p_HighPart = &v15->CompSurfaceLuid.HighPart;
    v18 = Pool2 - (_BYTE *)a2;
    v19 = (char *)a3 - (char *)a2;
    do
    {
      *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)a2 + v18) = v15;
      v20 = (__int64)*a2;
      *(_QWORD *)(p_HighPart - 3) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)a2 + v19);
      *(p_HighPart - 1) = *(_DWORD *)(v20 + 16);
      *p_HighPart = *(_DWORD *)v20;
      *(_OWORD *)(p_HighPart + 2) = *(_OWORD *)(*(_QWORD *)(v20 + 24) + 4LL);
      *(_OWORD *)(p_HighPart + 6) = *(_OWORD *)(*(_QWORD *)(v20 + 24) + 20LL);
      *(_OWORD *)(p_HighPart + 10) = *(_OWORD *)(*(_QWORD *)(v20 + 24) + 36LL);
      p_HighPart[14] = *(_DWORD *)(*(_QWORD *)(v20 + 24) + 52LL);
      p_HighPart[16] = *(_DWORD *)(*(_QWORD *)(v20 + 24) + 72LL);
      v21 = p_HighPart[1] ^ (**(_DWORD **)(v20 + 24) ^ p_HighPart[1]) & 1;
      p_HighPart[1] = v21;
      v22 = v20;
      LODWORD(v20) = v21 & 0xFFFFFFFD | **(_DWORD **)(v20 + 24) & 2;
      v23 = p_HighPart[15];
      p_HighPart[1] = v20;
      p_HighPart[1] = v20 & 0xFFFFFFFB | **(_DWORD **)(v22 + 24) & 4;
      p_HighPart[15] = v23 ^ (*(_DWORD *)(*(_QWORD *)(v22 + 24) + 56LL) ^ v23) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 76LL) == 1 )
      {
        p_HighPart[17] = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 76LL) == 2 )
      {
        p_HighPart[17] = 2;
      }
      v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)v15 + 104);
      ++a2;
      p_HighPart[18] = *(_DWORD *)(*(_QWORD *)(v22 + 24) + 80LL);
      p_HighPart += 26;
      --v14;
    }
    while ( v14 );
    LODWORD(v9) = v37;
  }
  if ( (_DWORD)v12 )
  {
    v30 = a5;
    v31 = v8 + 4;
    v32 = v12;
    do
    {
      *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v30 + (char *)v16 - (char *)a5) = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v8;
      v8 += 44LL;
      v33 = (__int64)*v30++;
      *(_DWORD *)(v31 - 4) = *(_DWORD *)v33;
      *(_OWORD *)(v31 + 4) = *(_OWORD *)(v33 + 8);
      *(_OWORD *)(v31 + 20) = *(_OWORD *)(v33 + 24);
      *(_DWORD *)(v31 + 36) = *(_DWORD *)(v33 + 40);
      v34 = *(_DWORD *)v31 ^ (*(_DWORD *)(v33 + 4) ^ *(_DWORD *)v31) & 1;
      *(_DWORD *)v31 = v34;
      *(_DWORD *)v31 = v34 ^ (*(_DWORD *)(v33 + 4) ^ v34) & 2;
      v31 += 44LL;
      --v32;
    }
    while ( v32 );
  }
  *(&v47.PlaneCount + 1) = 0;
  *(&v47.PostCompositionCount + 1) = 0;
  *(_QWORD *)&v47.Supported = 0LL;
  v47.PlaneCount = v9;
  v47.ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)Pool2;
  v47.PostCompositionCount = v12;
  v47.ppPostComposition = v16;
  v24 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(v44, &v47);
  if ( v24 >= 0 )
  {
    *v45 = v47.Supported;
    *v46 = v47.ReturnInfo.0;
  }
  if ( v38 != &v39 && v38 )
    ExFreePoolWithTag(v38, 0);
  v38 = 0LL;
  v40 = 0;
  if ( v48 != v49 && v48 )
    ExFreePoolWithTag(v48, 0);
  v48 = 0LL;
  v50 = 0;
  if ( v51 != v52 && v51 )
    ExFreePoolWithTag(v51, 0);
  v51 = 0LL;
  v53 = 0;
  if ( P != v42 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v24;
}
