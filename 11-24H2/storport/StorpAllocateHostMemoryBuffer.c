/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x140040D6C
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400EF734 (NvmeControllerInitHostMemoryBuffer.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140053A10 (MiniportGetNvmeAdapter.c)
 *     McTemplateK0zdqqqqqqqqq_EtwWriteTransfer @ 0x140072418 (McTemplateK0zdqqqqqqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  _BYTE *v10; // rcx
  __int64 v11; // rdi
  unsigned int *v12; // rsi
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 NvmeAdapter; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned __int64 v19; // r9
  SIZE_T v20; // r10
  bool v21; // zf
  unsigned int v22; // ebx
  __int64 RaidAdapter; // rax
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // edx
  unsigned __int64 v28; // r9
  SIZE_T v29; // r12
  __int64 v30; // rax
  SIZE_T v31; // r14
  __int64 v32; // r9
  __int64 Pool; // rax
  unsigned int *v34; // rbp
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD); // r10
  __int64 v37; // rax
  __int64 *v38; // rcx
  PMDL PagesForMdl; // rax
  PMDL v40; // rax
  __int64 ByteCount; // rdx
  __int64 v42; // r9
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  SIZE_T v47; // rax
  struct _MDL *v48; // rcx
  unsigned int *v49; // rbx
  _DWORD *Flags; // [rsp+28h] [rbp-D0h]
  unsigned int v52; // [rsp+70h] [rbp-88h]
  SIZE_T v53; // [rsp+78h] [rbp-80h]
  _QWORD *v54; // [rsp+80h] [rbp-78h]
  __int64 v55; // [rsp+88h] [rbp-70h]
  _DWORD v56[2]; // [rsp+90h] [rbp-68h] BYREF
  PMDL *v57; // [rsp+98h] [rbp-60h]
  __int64 *v58; // [rsp+A0h] [rbp-58h]
  _QWORD *v59; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+B0h] [rbp-48h]
  unsigned int v61; // [rsp+100h] [rbp+8h]
  char v63; // [rsp+110h] [rbp+18h]

  v63 = a3;
  v10 = *(_BYTE **)(a1 - 16);
  v11 = 0LL;
  v12 = 0LL;
  v56[1] = 0;
  v56[0] = 0;
  v54 = 0LL;
  v13 = a3;
  v53 = 0LL;
  v61 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( (v10[248] & 1) != 0 )
  {
    NvmeAdapter = MiniportGetNvmeAdapter();
    v15 = NvmeAdapter;
    if ( !NvmeAdapter )
      goto LABEL_15;
    v21 = *(_QWORD *)(NvmeAdapter + 1408) == 0LL;
  }
  else
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v10);
    v14 = RaidAdapter;
    if ( !RaidAdapter )
      goto LABEL_15;
    v21 = *(_QWORD *)(RaidAdapter + 5600) == 0LL;
  }
  if ( !v21 )
  {
    v22 = -1056964607;
    goto LABEL_16;
  }
  v24 = 4096LL;
  if ( v17 )
    v24 = v17;
  v60 = v24;
  if ( v13 < v24 || ((v13 | v24) & 0xFFF) != 0 )
    goto LABEL_15;
  if ( 0x1000 % a5 )
  {
    LODWORD(v17) = a2;
LABEL_15:
    v22 = -1056964602;
    goto LABEL_16;
  }
  if ( !a10 || (v27 = *a10, (v52 = *a10) == 0) || a8 )
  {
    LODWORD(v17) = a2;
    goto LABEL_15;
  }
  switch ( HmbAllocationPolicy )
  {
    case 1:
      v28 = v24;
      break;
    case 2:
      v28 = v13;
      break;
    case 3:
      v28 = (v19 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v28 >= v24 )
      {
        if ( v28 > v13 )
          v28 = v13;
      }
      else
      {
        v28 = v24;
      }
      v27 = *a10;
      break;
    default:
      v22 = -1056964606;
      goto LABEL_27;
  }
  v29 = (unsigned int)HmbMaximumSize;
  if ( v28 <= (unsigned int)HmbMaximumSize )
    v29 = v28;
  if ( v14 )
  {
    v30 = *(_QWORD *)(v14 + 880);
  }
  else
  {
    v52 = v27;
    if ( !v15 )
    {
      v55 = 0LL;
      goto LABEL_43;
    }
    v30 = *(_QWORD *)(v15 + 1144);
  }
  v55 = v30;
  v11 = v30;
LABEL_43:
  v31 = v29;
  while ( v31 >= 0x1000 && v20 < v29 )
  {
    if ( v14 )
      v32 = *(_QWORD *)(v14 + 8);
    else
      v32 = *(_QWORD *)(v15 + 8);
    Pool = RaidAllocatePool(64LL, 40LL, 1161912658LL, v32);
    v34 = (unsigned int *)Pool;
    if ( !Pool )
    {
      v18 = v61;
      v20 = v53;
      break;
    }
    v35 = *(_QWORD *)(v11 + 8);
    v57 = (PMDL *)(Pool + 8);
    v58 = (__int64 *)(Pool + 24);
    v59 = (_QWORD *)(Pool + 16);
    v36 = *(__int64 (__fastcall **)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD))(v35 + 272);
    if ( v36 )
    {
      Flags = v56;
      v37 = v36(v11, &LowAddress, &HighAddress, (unsigned int)v31, 0);
      v38 = v58;
      *v58 = v37;
    }
    else
    {
      PagesForMdl = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v31, MmNonCached, 0x20u);
      *v57 = PagesForMdl;
      v38 = v58;
    }
    v20 = v53;
    v40 = *v57;
    if ( *v57 )
    {
      ByteCount = v40->ByteCount;
      v42 = a9;
      v43 = v61;
      v44 = 2LL * v61;
      v20 = ByteCount + v53;
      *(_QWORD *)(a9 + 8 * v44) = (__int64)v40[1].Next << 12;
      *(_DWORD *)(v42 + 8 * v44 + 8) = ByteCount;
LABEL_55:
      v18 = v43 + 1;
      v53 = v20;
      v61 = v18;
      if ( v12 )
        *v54 = v34;
      else
        v12 = v34;
      v54 = v34;
      goto LABEL_62;
    }
    if ( *v38 )
    {
      v45 = a9;
      v43 = v61;
      v46 = 2LL * v61;
      v20 = v31 + v53;
      *(_QWORD *)(a9 + 8 * v46) = *v59;
      *(_DWORD *)(v45 + 8 * v46 + 8) = v31;
      *((_QWORD *)v34 + 4) = v31;
      goto LABEL_55;
    }
    v18 = v61;
    v31 -= 4096LL;
LABEL_62:
    v47 = v29 - v20;
    if ( v31 <= v29 - v20 )
      v47 = v31;
    v31 = v47;
    if ( v18 >= v52 )
      break;
  }
  if ( !v18 )
  {
LABEL_81:
    v22 = -1056964605;
    goto LABEL_82;
  }
  if ( v20 < v60 )
  {
    if ( v12 )
    {
      do
      {
        v48 = (struct _MDL *)*((_QWORD *)v12 + 1);
        v49 = *(unsigned int **)v12;
        if ( v48 )
        {
          MmFreePagesFromMdl(v48);
          ExFreePoolWithTag(*((PVOID *)v12 + 1), 0);
        }
        if ( *((_QWORD *)v12 + 3) )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v55 + 8) + 24LL))(
            v55,
            v12[8],
            *((_QWORD *)v12 + 2));
        ExFreePoolWithTag(v12, 0);
        v12 = v49;
      }
      while ( v49 );
      v18 = v61;
    }
    goto LABEL_81;
  }
  if ( v14 )
  {
    *(_QWORD *)(v14 + 5600) = v12;
  }
  else if ( v15 )
  {
    *(_QWORD *)(v15 + 1408) = v12;
  }
  v22 = 0;
  *a10 = v18;
LABEL_82:
  LOBYTE(v13) = v63;
LABEL_27:
  LODWORD(v17) = a2;
LABEL_16:
  if ( byte_140171464 < 0 )
  {
    if ( v14 )
    {
      v25 = *(_DWORD *)(v14 + 56);
      v26 = *(_QWORD *)(v14 + 48);
    }
    else
    {
      v25 = *(_DWORD *)(v15 + 56);
      v26 = *(_QWORD *)(v15 + 48);
    }
    McTemplateK0zdqqqqqqqqq_EtwWriteTransfer(v22 == 0, v17, v18, v26, v25, (_DWORD)Flags, v17, v13);
  }
  return v22;
}
