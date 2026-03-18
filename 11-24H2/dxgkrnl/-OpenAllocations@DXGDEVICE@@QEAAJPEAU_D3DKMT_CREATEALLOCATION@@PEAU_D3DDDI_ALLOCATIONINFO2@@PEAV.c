/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140324850
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x140324E20 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        void *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  struct DXGALLOCATION *v13; // r14
  struct _D3DDDI_ALLOCATIONINFO2 *v14; // r15
  __int64 v17; // rcx
  UINT v18; // ebx
  int v19; // esi
  UINT NumAllocations; // edx
  DXGK_OPENALLOCATIONINFO *pOpenAllocation; // rcx
  UINT v22; // r12d
  __int64 v23; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v24; // r8
  void *v25; // rcx
  void *pPrivateDriverData; // r10
  int v27; // r15d
  UINT *p_PrivateDriverDataSize; // rsi
  unsigned __int64 PrivateDriverDataSize; // rax
  struct DXGALLOCATION *v30; // r14
  void *v31; // r12
  _BYTE **v32; // r13
  const void *v33; // r9
  size_t v34; // r8
  char *v35; // rcx
  size_t v36; // r8
  const void *v37; // rdx
  void *v38; // rcx
  void *v40; // rax
  size_t v41; // r8
  size_t v42; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  __int64 v44; // r8
  UINT *v45; // [rsp+50h] [rbp-88h]
  void *v46; // [rsp+58h] [rbp-80h]
  _DXGKARG_OPENALLOCATION v47; // [rsp+68h] [rbp-70h] BYREF

  v13 = a4;
  v14 = a3;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v17 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
  {
    v18 = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3671;
    v18 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3671LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v46 = 0LL;
  v19 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
  {
    v31 = 0LL;
    goto LABEL_35;
  }
  *(&v47.NumAllocations + 1) = 0;
  v47.pPrivateDriverData = 0LL;
  memset(&v47.SubresourceIndex + 1, 0, 20);
  v47.Flags.Value = (a10 == 0) | (*(_DWORD *)&a2->Flags >> 6) & 2;
  v47.NumAllocations = NumAllocations;
  pOpenAllocation = a5;
  v47.pOpenAllocation = a5;
  v47.SubresourceIndex = a11;
  v22 = 0;
  while ( 1 )
  {
    v23 = v22;
    pOpenAllocation[v23].hAllocation = *((_DWORD *)v13 + 4);
    v47.pOpenAllocation[v23].hDeviceSpecificAllocation = 0LL;
    v24 = &v14[v22];
    v47.pOpenAllocation[v23].PrivateDriverDataSize = v24->PrivateDriverDataSize;
    v25 = a6[v22];
    v47.pOpenAllocation[v23].pPrivateDriverData = v25;
    pPrivateDriverData = v24->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        memmove(v47.pOpenAllocation[v23].pPrivateDriverData, pPrivateDriverData, v24->PrivateDriverDataSize);
      else
        memmove(v25, a7[v22], v24->PrivateDriverDataSize);
    }
    else if ( v24->PrivateDriverDataSize && a9 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3739;
      v19 = -1073741811;
    }
    v27 = v19;
    ++v22;
    v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
    if ( v22 >= a2->NumAllocations )
      break;
    pOpenAllocation = v47.pOpenAllocation;
    v14 = a3;
  }
  p_PrivateDriverDataSize = &a2->PrivateDriverDataSize;
  v45 = &a2->PrivateDriverDataSize;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v47.PrivateDriverSize = a2->PrivateDriverDataSize;
  v30 = a4;
  if ( a2->pStandardAllocation && (_DWORD)PrivateDriverDataSize )
  {
    v40 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
    v31 = v40;
    v46 = v40;
    if ( !v40 )
    {
      v44 = *p_PrivateDriverDataSize;
      v19 = -1073741801;
      WdLogSingleEntry3(3LL, this, v44, -1073741801LL);
      WdLogGlobalForLineNumber = 3756;
      goto LABEL_35;
    }
    v47.pPrivateDriverData = v40;
    v41 = *p_PrivateDriverDataSize;
    if ( a9 )
      memmove(v40, Src, v41);
    else
      memmove(v40, a2->pStandardAllocation, v41);
  }
  else
  {
    v31 = 0LL;
  }
  v19 = v27;
  if ( v27 >= 0 && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    v19 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 77), &v47);
  if ( v19 >= 0 )
  {
    if ( a12 )
      *a12 = v47.Pitch;
    if ( a13 )
      *a13 = v47.SubresourceOffset;
    if ( v31 && !a10 )
    {
      if ( a9 )
      {
        v42 = *v45;
        pStandardAllocation = a2->pStandardAllocation;
        v32 = (_BYTE **)MmUserProbeAddress;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v42) <= pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v42 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(pStandardAllocation, v31, v42);
        memmove(Src, v31, *v45);
        goto LABEL_23;
      }
      memmove(a2->pStandardAllocation, v31, a2->PrivateDriverDataSize);
    }
    v32 = (_BYTE **)MmUserProbeAddress;
LABEL_23:
    while ( v18 < a2->NumAllocations )
    {
      *((_QWORD *)v30 + 4) = v47.pOpenAllocation[v18].hDeviceSpecificAllocation;
      v33 = a6[v18];
      if ( v33 && !a10 )
      {
        if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v36 = a3[v18].PrivateDriverDataSize;
          v37 = a6[v18];
          v38 = a3[v18].pPrivateDriverData;
        }
        else
        {
          v34 = a3[v18].PrivateDriverDataSize;
          v35 = (char *)a3[v18].pPrivateDriverData;
          if ( &v35[v34] <= v35 || &v35[v34] > *v32 )
            **v32 = 0;
          memmove(v35, v33, v34);
          v36 = a3[v18].PrivateDriverDataSize;
          v37 = a6[v18];
          v38 = a7[v18];
        }
        memmove(v38, v37, v36);
      }
      ++v18;
      v30 = (struct DXGALLOCATION *)*((_QWORD *)v30 + 8);
    }
    v31 = v46;
  }
LABEL_35:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
  return (unsigned int)v19;
}
