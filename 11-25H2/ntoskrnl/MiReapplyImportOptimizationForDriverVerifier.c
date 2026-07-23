/*
 * XREFs of MiReapplyImportOptimizationForDriverVerifier @ 0x140670958
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140B947B0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140671168 (MiUnlockAndFreeDvPatchImage.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmHasImageBeenImportOptimized @ 0x1406EF740 (MmHasImageBeenImportOptimized.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x1407047B8 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     MiLockAndMapEntireDriver @ 0x1407E0A98 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1407E0C50 (MiUnlockEntireDriver.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407EB758 (MiCheckVerifierFunctionsCfgState.c)
 *     MiInitializeDriverPatchState @ 0x140A946A8 (MiInitializeDriverPatchState.c)
 *     MiEnumerateBasePatches @ 0x140B53228 (MiEnumerateBasePatches.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReapplyImportOptimizationForDriverVerifier(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  int v7; // ebx
  PVOID v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  char *MappedSystemVa; // r12
  char *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r15d
  unsigned __int16 **v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rbx
  _OWORD *Pool; // rax
  unsigned int v23; // r15d
  unsigned __int16 *v24; // rdx
  unsigned int v25; // ebx
  void *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // eax
  unsigned __int8 CurrentIrql; // di
  PVOID v34; // rcx
  __int64 v35; // rax
  ULONG Context; // [rsp+30h] [rbp-A9h] BYREF
  ULONG Context_4; // [rsp+34h] [rbp-A5h]
  int v39; // [rsp+3Ch] [rbp-9Dh]
  __int64 v40; // [rsp+40h] [rbp-99h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-91h] BYREF
  PVOID P; // [rsp+50h] [rbp-89h]
  int *v43; // [rsp+58h] [rbp-81h]
  int v44; // [rsp+60h] [rbp-79h]
  PVOID v45[2]; // [rsp+68h] [rbp-71h] BYREF
  int v46; // [rsp+78h] [rbp-61h]
  PVOID v47; // [rsp+80h] [rbp-59h]
  _BYTE v48[160]; // [rsp+90h] [rbp-49h] BYREF
  int v49; // [rsp+140h] [rbp+67h]
  __int64 Size; // [rsp+158h] [rbp+7Fh] BYREF

  v4 = a3;
  memset_0(v48, 0, 0x68uLL);
  v49 = 0;
  memset_0(&Context, 0, 0x50uLL);
  v45[1] = v45;
  v45[0] = v45;
  MiInitializeDriverPatchState(a1, v48);
  v40 = a1;
  if ( (unsigned int)MmHasImageBeenImportOptimized(a1) )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
      goto LABEL_4;
    if ( *(_QWORD *)(a1 + 256) != a1 + 256 )
    {
      MiEnumerateBasePatches(v6, MiLockPatchIatForDV, &Context);
      v7 = v46;
      if ( v46 < 0 )
        goto LABEL_56;
    }
    v8 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, (PULONG)&Size);
    v9 = *(_QWORD *)(a1 + 112);
    v10 = 0LL;
    v47 = v8;
    if ( v9 )
    {
      v11 = *(_QWORD *)((*(_QWORD *)(MiSectionControlArea(v9) + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
      if ( v11 )
        v10 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 280);
    }
    v12 = *(_DWORD *)(a1 + 64) >> 12;
    if ( v10 )
    {
      v7 = MiLockAndMapEntireDriver(a1, v48, &MemoryDescriptorList);
      if ( v7 >= 0 )
      {
        if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 1u, 0x20u);
        v14 = &MappedSystemVa[(_QWORD)v47 - *(_QWORD *)(a1 + 48)];
        if ( (MiFlags & 0x8000) != 0 )
        {
          v7 = MiCheckVerifierFunctionsCfgState(a2, (unsigned int)v4);
          if ( v7 >= 0 )
          {
            v7 = VslReapplyImportOptimizationForDriverVerifier(a1, a2, (unsigned int)v4);
            if ( v7 >= 0 )
            {
              if ( (_DWORD)v4 )
              {
                v15 = v4;
                do
                {
                  v16 = *a2;
                  v17 = *((_QWORD *)a2 + 1);
                  a2 += 6;
                  *(_QWORD *)&v14[8 * v16] = v17;
                  --v15;
                }
                while ( v15 );
              }
            }
          }
        }
        else
        {
          v39 = 8 * v12 + 64;
          if ( (_DWORD)v12 )
          {
            v18 = 0;
            v19 = (unsigned __int16 **)(v10 + 64);
            v20 = (unsigned int)v12;
            do
            {
              if ( *v19 )
                v18 += ((*v19)[1] >> 1) + ((*v19)[2] >> 1) + (**v19 >> 2);
              ++v19;
              --v20;
            }
            while ( v20 );
            v49 = v18;
            LODWORD(v4) = a3;
          }
          v21 = 64LL;
          Size = 64LL;
          Pool = (_OWORD *)MiAllocatePool(0x40uLL, (unsigned int)(8 * v12 + 64 + 4 * (v12 + v49 + 2 * v12)), 1719037261);
          P = Pool;
          if ( Pool )
          {
            *Pool = *(_OWORD *)v10;
            Pool[1] = *(_OWORD *)(v10 + 16);
            Pool[2] = *(_OWORD *)(v10 + 32);
            *((_QWORD *)Pool + 6) = *(_QWORD *)(v10 + 48);
            *((_QWORD *)P + 7) = (char *)P + (unsigned int)(8 * v12 + 64);
            if ( (_DWORD)v12 )
            {
              v23 = 0;
              do
              {
                v24 = *(unsigned __int16 **)(v21 + v10);
                if ( v24 )
                {
                  v25 = v24[1] + 12 + v24[2] + *v24;
                  v26 = (void *)(*((_QWORD *)P + 7) + v23);
                  *(_QWORD *)((char *)P + Size) = v26;
                  memmove(v26, v24, v25);
                  v23 += v25;
                  v21 = Size;
                }
                v21 += 8LL;
                Size = v21;
                --v12;
              }
              while ( v12 );
              LODWORD(v4) = a3;
            }
            *((_DWORD *)P + 1) = (_DWORD)v47 - *(_DWORD *)(a1 + 48);
            *((_QWORD *)P + 3) = v14;
            *((_QWORD *)P + 2) = 0LL;
            *((_QWORD *)P + 4) = *(_QWORD *)(a1 + 48);
            if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
              *((_QWORD *)P + 5) = MiIsTargetFullyRetpolined;
            v43 = a2;
            v44 = 24 * v4;
            v27 = *(_QWORD *)(v10 + 16);
            if ( (_DWORD)v4 )
            {
              v28 = (unsigned int)v4;
              do
              {
                if ( v27 )
                {
                  v29 = *((_QWORD *)a2 + 1);
                  v30 = *(_QWORD *)(a1 + 48);
                  if ( v29 <= v30 )
                    v31 = v30 + *(unsigned int *)(a1 + 64) - v29;
                  else
                    v31 = v29 - v30;
                  v32 = 0;
                  if ( v31 <= 0x80000000 )
                    v32 = v31;
                  *(_DWORD *)(v27 + 4LL * *a2) = v32;
                  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
                    && !_bittest64(
                          (const signed __int64 *)qword_140E2D520,
                          (unsigned __int64)(*((_QWORD *)a2 + 1) + 0x800000000000LL) >> 16) )
                  {
                    *(_DWORD *)(v27 + 4LL * *a2) = 0;
                  }
                }
                a2 += 6;
                --v28;
              }
              while ( v28 );
            }
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
            Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
            Context = Context_4;
            v7 = KeIpiGenericCall(MiReapplyImportOptimizationWorker, (ULONG_PTR)&Context);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          else
          {
            v7 = -1073741670;
          }
        }
      }
    }
    else
    {
LABEL_4:
      v7 = -1073741637;
    }
  }
  else
  {
    v7 = -1073741436;
  }
LABEL_56:
  MiUnlockEntireDriver(v48, MemoryDescriptorList);
  while ( 1 )
  {
    v34 = v45[0];
    if ( v45[0] == v45 )
      break;
    if ( *((PVOID **)v45[0] + 1) != v45 || (v35 = *(_QWORD *)v45[0], *(PVOID *)(*(_QWORD *)v45[0] + 8LL) != v45[0]) )
      __fastfail(3u);
    v45[0] = *(PVOID *)v45[0];
    *(_QWORD *)(v35 + 8) = v45;
    MiUnlockAndFreeDvPatchImage(v34);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
