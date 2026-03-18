/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1403FD200
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1401A1794 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *Pool2; // r9
  __int64 CurrentProcess; // rax
  int v13; // ebx
  PVOID v14; // rcx
  bool v15; // zf
  UINT *p_LayerIndex; // r10
  char *v17; // r14
  int v18; // edx
  unsigned int v19; // ecx
  UINT v20; // edx
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v22; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v24[336]; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+198h] [rbp+98h]

  v7 = a3;
  P = 0LL;
  v25 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v24;
    P = v24;
    if ( (_DWORD)a1 )
    {
      memset(v24, 0, 112LL * (unsigned int)a1);
      Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)P;
    }
  }
  else
  {
    v10 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(a1);
      v13 = -1073741801;
      WdLogSingleEntry3(3LL, v10, -1073741801LL, CurrentProcess);
      v14 = P;
      v15 = P == v24;
      WdLogGlobalForLineNumber = 10141;
      goto LABEL_18;
    }
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)ExAllocatePool2(256LL, 112LL * (unsigned int)a1, 1265072196LL);
    P = Pool2;
  }
  v25 = v9;
  v10 = v9;
  if ( !Pool2 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    p_LayerIndex = &Pool2->LayerIndex;
    v17 = (char *)((char *)a2 - (char *)v7);
    do
    {
      a3 = *(void ***)((char *)v7 + (_QWORD)v17);
      *(_QWORD *)(p_LayerIndex - 3) = *v7;
      *(p_LayerIndex - 1) = *((_DWORD *)a3 + 4);
      *p_LayerIndex = *(_DWORD *)a3;
      *(_OWORD *)(p_LayerIndex + 2) = *(_OWORD *)((char *)a3[3] + 4);
      *(_OWORD *)(p_LayerIndex + 6) = *(_OWORD *)((char *)a3[3] + 20);
      *(_OWORD *)(p_LayerIndex + 10) = *(_OWORD *)((char *)a3[3] + 36);
      p_LayerIndex[14] = *((_DWORD *)a3[3] + 13);
      p_LayerIndex[17] = *((_DWORD *)a3[3] + 18);
      v18 = p_LayerIndex[1] ^ (*(_DWORD *)a3[3] ^ p_LayerIndex[1]) & 1;
      p_LayerIndex[1] = v18;
      v19 = v18 & 0xFFFFFFFD | *(_DWORD *)a3[3] & 2;
      v20 = p_LayerIndex[15];
      p_LayerIndex[1] = v19;
      p_LayerIndex[15] = v20 ^ (*((_DWORD *)a3[3] + 14) ^ v20) & 1;
      if ( *((_DWORD *)a3[3] + 19) == 1 )
      {
        p_LayerIndex[22] = 1;
      }
      else if ( *((_DWORD *)a3[3] + 19) == 2 )
      {
        p_LayerIndex[22] = 2;
      }
      ++v7;
      p_LayerIndex += 28;
      --v10;
    }
    while ( v10 );
  }
  *(&v22.PlaneCount + 1) = 0;
  *(_QWORD *)&v22.Supported = 0LL;
  v22.PlaneCount = v9;
  v22.pPlanes = Pool2;
  v13 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(a4, &v22, (__int64)a3);
  if ( v13 >= 0 )
  {
    *a5 = v22.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v22.ReturnInfo.0;
  }
  v14 = P;
  v15 = P == v24;
LABEL_18:
  if ( !v15 && v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v13;
}
