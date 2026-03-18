/*
 * XREFs of ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x1801340C0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134410 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134654 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::PreComputePreSubgraph(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        const struct CVisual *a4)
{
  int v5; // ebp
  _DWORD *v6; // r8
  _DWORD *v10; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 i; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rdx
  unsigned int j; // ecx
  void **v20; // rbx
  _DWORD *v21; // rbx
  unsigned int k; // r13d
  _DWORD *v23; // rcx
  bool v24; // bl
  struct CTreeEffect *(__fastcall *v25)(CLayerVisual *); // rax
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rax
  unsigned int v29; // edx
  _BYTE *v30; // rcx
  unsigned int m; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  v6 = (_DWORD *)*((_QWORD *)a3 + 29);
  if ( (*v6 & 0x20000000) != 0 )
  {
    v12 = (unsigned int)v6[1];
    v13 = v6 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v12; ++v13 )
    {
      if ( *v13 == 3 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v12 )
      v15 = 0LL;
    else
      v15 = (__int64 *)((char *)v6 + 8 * i - (((_BYTE)v12 + 15) & 7) + v12 + 15);
    v16 = *v15;
    if ( v16 && *(_DWORD *)(v16 + 24) )
    {
      v17 = (unsigned int)v6[1];
      v18 = v6 + 2;
      for ( j = 0; j < (unsigned int)v17; ++v18 )
      {
        if ( *v18 == 3 )
          break;
        ++j;
      }
      if ( j >= (unsigned int)v17 )
        v20 = 0LL;
      else
        v20 = (void **)((char *)v6 + v17 + 8LL * j - (((_BYTE)v17 + 15) & 7) + 15);
      v21 = *v20;
      if ( v21 )
      {
        for ( k = v21[6]; k; ReleaseInterface<CPolygon>((__int64 *)(*(_QWORD *)v21 + 8LL * k)) )
          --k;
        v21[6] = 0;
        DynArrayImpl<0>::ShrinkToSize(v21, 8LL);
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v21);
        operator delete(v21, 0x20uLL);
        v23 = (_DWORD *)*((_QWORD *)a3 + 29);
        if ( (*v23 & 0x20000000) != 0 )
          CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v23, 3LL);
      }
    }
  }
  v10 = (_DWORD *)((char *)a4 + 112);
  if ( a4 )
  {
    if ( *v10 == 1 )
    {
      v5 = CBspPreComputeHelper::PushStacksForBspChildVisual(this, a2, a3);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x4Bu, 0LL);
        return (unsigned int)v5;
      }
    }
  }
  if ( *((_DWORD *)a3 + 28) == 1 )
  {
    v24 = a4 && *v10 == 1;
    v25 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)a3 + 224LL);
    if ( v25 == CLayerVisual::GetTreeEffect )
      v26 = *((_QWORD *)a3 + 85);
    else
      v26 = (__int64)v25(a3);
    if ( v26 )
      goto LABEL_32;
    v6 = (_DWORD *)*((_QWORD *)a3 + 29);
    if ( (*v6 & 0x800000) == 0 )
      goto LABEL_50;
    v29 = v6[1];
    v30 = v6 + 2;
    for ( m = 0; m < v29; ++v30 )
    {
      if ( *v30 == 9 )
        break;
      ++m;
    }
    v32 = (unsigned int)v6[1];
    v33 = m >= (unsigned int)v32 ? 0LL : (_QWORD *)((char *)v6 + 8LL * m - (((_BYTE)v32 + 15) & 7) + v32 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v33 + 64LL))(*v33, 60LL) )
LABEL_32:
      v27 = 1;
    else
LABEL_50:
      v27 = 0;
    if ( v24 )
    {
      if ( !v27 )
        goto LABEL_5;
    }
    else
    {
      v28 = *((_QWORD *)a3 + 10);
      if ( (v28 & 2) != 0 )
        v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v28) = v28 & 1;
      if ( !(_DWORD)v28 )
        goto LABEL_5;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_BSPTREE_Start,
        (__int64)v6,
        1u,
        &v34);
    v5 = CBspPreComputeHelper::PushStacksForBspRootVisual(this, a2, a3);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x51u, 0LL);
      return (unsigned int)v5;
    }
  }
LABEL_5:
  ++*((_DWORD *)this + 66);
  return (unsigned int)v5;
}
