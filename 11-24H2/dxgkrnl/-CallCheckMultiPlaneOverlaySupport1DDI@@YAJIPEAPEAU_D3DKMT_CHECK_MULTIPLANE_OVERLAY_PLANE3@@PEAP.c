/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1403BEE68
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1403BF124 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport1DDI(
        __int64 a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  __int64 v9; // rbx
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *Pool2; // r9
  __int64 v11; // rdi
  RECT *p_SrcRect; // r8
  signed __int64 v13; // r14
  __int64 v14; // r10
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  LONG top; // edx
  int v19; // ebx
  PVOID v20; // rcx
  bool v21; // zf
  __int64 CurrentProcess; // rax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v24; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v26[312]; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+180h] [rbp+80h]

  P = 0LL;
  v27 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 > 3 )
  {
    v11 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x68 )
      goto LABEL_26;
    Pool2 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)ExAllocatePool2(
                                                             256LL,
                                                             104LL * (unsigned int)a1,
                                                             1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v26;
    P = v26;
    if ( (_DWORD)a1 )
    {
      memset(v26, 0, 104LL * (unsigned int)a1);
      Pool2 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)P;
    }
  }
  v27 = v9;
  v11 = v9;
  if ( !Pool2 )
  {
LABEL_26:
    CurrentProcess = PsGetCurrentProcess(a1);
    v19 = -1073741801;
    WdLogSingleEntry3(3LL, v11, -1073741801LL, CurrentProcess);
    v20 = P;
    v21 = P == v26;
    WdLogGlobalForLineNumber = 10218;
    goto LABEL_18;
  }
  if ( (_DWORD)v9 )
  {
    p_SrcRect = &Pool2->PlaneAttributes.SrcRect;
    v13 = (char *)a2 - (char *)a3;
    do
    {
      v14 = *(__int64 *)((char *)a3 + v13);
      *(_QWORD *)&p_SrcRect[-1].left = *a3;
      p_SrcRect[-1].right = *(_DWORD *)(v14 + 16);
      *p_SrcRect = *(RECT *)(*(_QWORD *)(v14 + 24) + 4LL);
      p_SrcRect[1] = *(RECT *)(*(_QWORD *)(v14 + 24) + 20LL);
      p_SrcRect[2] = *(RECT *)(*(_QWORD *)(v14 + 24) + 36LL);
      p_SrcRect[3].left = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 52LL);
      v15 = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 72LL);
      if ( v15 == 8 || v15 == 6 )
        p_SrcRect[3].bottom |= 1u;
      if ( *(_DWORD *)(*(_QWORD *)(v14 + 24) + 72LL) == 8 || *(_DWORD *)(*(_QWORD *)(v14 + 24) + 72LL) == 9 )
        p_SrcRect[3].bottom |= 2u;
      v16 = p_SrcRect[-1].bottom ^ (**(_DWORD **)(v14 + 24) ^ p_SrcRect[-1].bottom) & 1;
      p_SrcRect[-1].bottom = v16;
      v17 = v16 & 0xFFFFFFFD | **(_DWORD **)(v14 + 24) & 2;
      top = p_SrcRect[3].top;
      p_SrcRect[-1].bottom = v17;
      p_SrcRect[3].top = top ^ (*(_DWORD *)(*(_QWORD *)(v14 + 24) + 56LL) ^ top) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v14 + 24) + 76LL) == 1 )
      {
        p_SrcRect[5].left = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v14 + 24) + 76LL) == 2 )
      {
        p_SrcRect[5].left = 2;
      }
      ++a3;
      p_SrcRect = (RECT *)((char *)p_SrcRect + 104);
      --v11;
    }
    while ( v11 );
  }
  *(&v24.PlaneCount + 1) = 0;
  *(_QWORD *)&v24.Supported = 0LL;
  v24.PlaneCount = v9;
  v24.pPlanes = Pool2;
  v19 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a4, &v24);
  if ( v19 >= 0 )
    *a5 = v24.Supported;
  v20 = P;
  v21 = P == v26;
LABEL_18:
  if ( !v21 && v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)v19;
}
