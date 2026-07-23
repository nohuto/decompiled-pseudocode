/*
 * XREFs of IoFillTriageDumpBuffer @ 0x14058E2EC
 * Callers:
 *     IopCollectTriageDumpData @ 0x140590828 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059287C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x140706E10 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IopWriteDriverList @ 0x1404A6D78 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404A6EC8 (IoGetLoadedDriverInfo.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x140590700 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405914B8 (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x14059166C (IopGetMaxValidMemorySize.c)
 *     KdCopyDataBlock @ 0x1405AC454 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x14067922C (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x14067934C (MmWriteUnloadedDriverInformation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        int a4,
        int *a5,
        __int64 a6,
        void *Src,
        int LoadedDriverInfo,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v13; // edi
  int v14; // esi
  __int16 v15; // r15
  char v16; // r14
  __int64 result; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  unsigned int v24; // esi
  int v25; // ebp
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r14
  char *DpcStack; // rax
  char *v30; // r15
  unsigned __int64 v31; // rax
  unsigned int v32; // r14d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char *v38; // rcx
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rdx
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  __int64 v44; // r15
  unsigned int v45; // r14d
  unsigned int v46; // r8d
  unsigned int v47; // edx
  _DWORD *i; // r10
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  bool v53; // cc
  void *v54; // r12
  __int64 v55; // rax
  __int64 v56; // rcx
  size_t v57; // r8
  __int64 v58; // rax
  int v59; // esi
  __int64 v60; // rax
  int v61[18]; // [rsp+30h] [rbp-48h] BYREF
  int v62; // [rsp+80h] [rbp+8h] BYREF
  char v63; // [rsp+90h] [rbp+18h]
  int v64; // [rsp+98h] [rbp+20h]

  v64 = a4;
  v63 = a3;
  v13 = a9;
  v14 = CmNtCSDVersion;
  v15 = a4;
  v61[0] = 0;
  v16 = a3;
  v62 = 0;
  LoadedDriverInfo = 0;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
    return 3221225495LL;
  memset_0(a2, 0, 0x80uLL);
  v20 = a6;
  v21 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  v22 = a1 - 4;
  v23 = (unsigned int)v22;
  *((_DWORD *)a2 + 2) = v21 - 4;
  *(_DWORD *)((char *)a2 + v22) = 0;
  *((_DWORD *)a2 + 16) = 0;
  *(_DWORD *)a2 = v14;
  v24 = 8320;
  *((_DWORD *)a2 + 3) = 840;
  *((_DWORD *)a2 + 4) = 3840;
  v25 = (v20 != 0) + 130;
  *((_DWORD *)a2 + 17) = v13;
  if ( (v15 & 0x100) != 0 )
  {
    if ( (unsigned int)v22 <= 0x20D0 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v25 |= 0x100u;
      v24 = 8400;
    }
  }
  if ( (v15 & 4) != 0 )
  {
    if ( v24 + 52992 >= (unsigned int)v22 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v24;
      v25 |= 4u;
      v24 += 52992;
    }
  }
  if ( (v15 & 8) != 0 )
  {
    if ( v24 + 2112 >= (unsigned int)v22 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v24;
      v25 |= 8u;
      v24 += 2112;
    }
  }
  if ( (v15 & 0x10) != 0 )
  {
    if ( v24 + 1944 >= (unsigned int)v22 )
    {
      *((_DWORD *)a2 + 17) = v13 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v24;
      v25 |= 0x10u;
      v24 += 1944;
    }
  }
  if ( (v15 & 0x20) != 0 && (*((_DWORD *)Src + 30) & 0x20000) != 0 )
  {
    v26 = *(_QWORD *)(v20 + 152);
    v27 = *((_QWORD *)Src + 6);
    v28 = *((_QWORD *)Src + 7);
    if ( v27 > v26 || v26 >= v28 )
    {
      v26 = *((_QWORD *)Src + 6);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && Src != KeGetCurrentPrcb()->IdleThread )
      {
        DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
        v30 = DpcStack + 80;
        if ( IopIsAddressRangeValid((__int64)DpcStack, 80LL) )
        {
          v31 = *((_QWORD *)v30 - 2);
          v15 = v64;
          if ( v27 <= v31 && v31 < v28 )
            v26 = v31;
        }
        else
        {
          v15 = v64;
        }
      }
    }
    if ( v28 - v26 >= 0x7FFF )
      v32 = 0x7FFF;
    else
      v32 = v28 - v26;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v26, v32);
    v16 = v63;
    v23 = (unsigned int)v22;
    if ( MaxValidMemorySize )
    {
      if ( v24 + MaxValidMemorySize >= (unsigned int)v22 )
      {
        *((_DWORD *)a2 + 17) |= 0x100u;
      }
      else
      {
        *((_DWORD *)a2 + 10) = v24;
        v24 = (v24 + MaxValidMemorySize + 7) & 0xFFFFFFF8;
        *((_DWORD *)a2 + 11) = MaxValidMemorySize;
        v25 |= 0x20u;
        a2[9] = v26;
      }
    }
  }
  if ( (v15 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v24 + 928 >= v23 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v24;
      v24 = (v24 + 935) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 928;
      v25 |= 0x400u;
    }
  }
  v34 = a2 - 1024;
  if ( !v16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v36 = MmUnloadedDrivers != 0LL ? 0xAF0 : 0;
  v37 = v24 + v36 + 8;
  if ( v37 >= (unsigned int)v22 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v25 |= 0x40u;
    *((_DWORD *)a2 + 6) = v24;
    v38 = (char *)v34 + v24;
    v24 = v37;
    MmWriteUnloadedDriverInformation(v38);
  }
  if ( (v15 & 0x40) != 0 )
  {
    LoadedDriverInfo = IoGetLoadedDriverInfo(v36, &v62, v61);
    if ( LoadedDriverInfo >= 0 )
    {
      v39 = v62;
      v40 = 144 * v62;
      if ( 144 * v62 )
      {
        if ( v24 + v40 >= (unsigned int)v22 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 12) = v24;
          v25 |= 0x40u;
          v24 += v40;
          *((_DWORD *)a2 + 13) = v39;
        }
      }
    }
  }
  v41 = (v61[0] + 6 * v62 + 7) & 0xFFFFFFF8;
  if ( ((v61[0] + 6 * v62 + 7) & 0xFFFFFFF8) != 0 )
  {
    if ( v24 + (unsigned int)v41 >= (unsigned int)v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v24;
      v24 = (v24 + v41 + 7) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 15) = v41;
    }
  }
  v42 = *((_DWORD *)a2 + 12);
  if ( v42 )
  {
    v43 = *((_DWORD *)a2 + 14);
    if ( v43 )
    {
      LoadedDriverInfo = IopWriteDriverList((__int64)(a2 - 1024), v41, v42, v43);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v16 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  v44 = a11;
  v45 = a10;
  if ( (v64 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    *((_DWORD *)a2 + 31) = 0;
    v46 = 0;
LABEL_69:
    if ( v46 < v45 )
    {
      v47 = 0;
      for ( i = *(_DWORD **)(v44 + 16LL * v46 + 8); ; i += 4 )
      {
        if ( v47 >= *(_DWORD *)(v44 + 16LL * v46) )
        {
          ++v46;
          goto LABEL_69;
        }
        v49 = v24 + ((i[2] - *i + 7) & 0xFFFFFFF8) + 16;
        if ( v49 >= (unsigned int)v22 )
          break;
        if ( !v47 )
          *((_DWORD *)a2 + 30) = v24;
        ++*((_DWORD *)a2 + 31);
        ++v47;
        v24 = v49;
      }
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    v24 = (v24 + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v25 |= 0x800u;
  }
  v50 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v50 )
    MmWriteTriageInformation((char *)v34 + v50);
  v51 = *((unsigned int *)a2 + 7);
  if ( (_DWORD)v51 && v51 + 52992 <= v23 )
    memmove((char *)v34 + (unsigned int)v51, KeGetCurrentPrcb(), 0xCF00uLL);
  v52 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v52 )
  {
    v53 = v52 + 2112 <= v23;
    v54 = Src;
    if ( v53 )
      memmove((char *)v34 + (unsigned int)v52, *((const void **)Src + 23), 0x840uLL);
  }
  else
  {
    v54 = Src;
  }
  v55 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v55 && v55 + 1944 <= (unsigned __int64)(unsigned int)v22 )
    memmove((char *)v34 + (unsigned int)v55, v54, 0x798uLL);
  v56 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v56 )
  {
    v57 = *((unsigned int *)a2 + 11);
    if ( (int)v56 + (int)v57 <= (unsigned int)v22 )
      memmove((char *)v34 + v56, (const void *)a2[9], v57);
  }
  v58 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v58 && v58 + 928 <= (unsigned __int64)(unsigned int)v22 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v58);
  if ( v45 )
    IopFillTriageDumpDataBlocks(a2, v45, v44, a2 - 1024);
  if ( (_DWORD)v22 != 253948 || a13 )
  {
    v59 = v24 + 4;
    if ( a13 )
      *a13 = v59 - 0x2000;
  }
  else
  {
    v59 = 0x40000;
  }
  if ( a5 )
    *a5 = v25;
  v60 = (unsigned int)(v59 - 4);
  *((_DWORD *)a2 + 1) = v59;
  *((_DWORD *)a2 + 2) = v60;
  if ( v60 - 0x2000 > (unsigned __int64)(unsigned int)v22 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v59 - 4) - 0x2000) = 1145524820;
  return result;
}
