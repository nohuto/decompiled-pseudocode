/*
 * XREFs of MiInsertInSystemSpace @ 0x140393BFC
 * Callers:
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     MiMapViewInSystemSpace @ 0x1408EB578 (MiMapViewInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x14026C224 (MiGetPageTablesForLargeMap.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x140361160 (MiUnlockControlAreaFileObjectExclusive.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     MiReferenceDataSubsections @ 0x1403953D8 (MiReferenceDataSubsections.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiUnmapLargePages @ 0x1404D1FE8 (MiUnmapLargePages.c)
 *     MiDereferenceDataSubsections @ 0x14068CD90 (MiDereferenceDataSubsections.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiReferenceFileObjectForMap @ 0x140918140 (MiReferenceFileObjectForMap.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        char a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  _QWORD *v8; // r13
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // r12d
  _DWORD *v13; // r14
  __int64 v14; // rax
  __int64 Pool; // rax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  struct _KTHREAD *CurrentThread; // r12
  char *v21; // rax
  signed __int8 v22; // cf
  char *v23; // r15
  unsigned __int8 v24; // al
  _QWORD *v25; // rdx
  bool v26; // r8
  unsigned __int8 v27; // r15
  unsigned __int64 v28; // r8
  _QWORD *v29; // rax
  struct _KTHREAD *v30; // rax
  __int64 *v31; // r15
  __int64 v32; // rdx
  char *v33; // r13
  __int64 **v34; // rax
  int v35; // eax
  int active; // ebx
  unsigned __int64 PageTablesForLargeMap; // rax
  bool v38; // zf
  unsigned __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned __int64 v41; // r13
  __int64 v42; // r8
  volatile LONG *v44; // rbx
  KIRQL v45; // al
  bool v46; // r8
  unsigned __int8 v47; // r15
  _QWORD *v48; // rdx
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rdi
  __int64 v52; // rcx
  _QWORD *v53; // rbx
  _QWORD *v54; // r13
  __int64 v55; // rdx
  __int64 AnyMultiplexedVm; // rsi
  unsigned __int64 v57; // r8
  _QWORD *v58; // rax
  char v59; // [rsp+48h] [rbp-C0h]
  unsigned int v60; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h]
  __int64 v62; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v63; // [rsp+60h] [rbp-A8h]
  __int64 v64; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v65; // [rsp+70h] [rbp-98h]
  ULONG_PTR v66; // [rsp+78h] [rbp-90h]
  unsigned int v67; // [rsp+80h] [rbp-88h]
  __int64 v68; // [rsp+88h] [rbp-80h]
  unsigned __int64 v69[2]; // [rsp+90h] [rbp-78h] BYREF
  char v70[216]; // [rsp+A0h] [rbp-68h] BYREF
  char v71; // [rsp+188h] [rbp+80h]
  __int64 v75; // [rsp+1A8h] [rbp+A0h]

  v69[0] = 0LL;
  memset_0(v70, 0, 0x90uLL);
  v8 = 0LL;
  v9 = 0LL;
  v71 = 0;
  v10 = 0LL;
  v59 = 0;
  v11 = 0LL;
  v63 = 0LL;
  *a6 = 0LL;
  v65 = 0LL;
  v68 = 0LL;
  v12 = 3;
  v60 = 3;
  LODWORD(v61) = 0x7FFFF;
  v13 = (_DWORD *)MiSectionControlArea(a2);
  v66 = (unsigned __int16)a1;
  v64 = MiOffsetToProtos((__int64)v13, *a3, v69);
  if ( !v64 )
  {
    active = -1073741801;
    goto LABEL_63;
  }
  v75 = a5 & 8;
  v67 = (v75 != 0) + 2;
  v65 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v63 = 16 * ((a1 >> 16) + (v66 != 0));
  v68 = *((_QWORD *)qword_140E300C8 + (unsigned __int16)word_140E3806E);
  if ( (v13[14] & 0x20) != 0 )
    goto LABEL_3;
  v35 = MiReferenceDataSubsections(v13, a3, (a1 >> 12) + ((a1 & 0xFFF) != 0), &v60);
  v12 = v60;
  active = v35;
  if ( v35 < 0 )
  {
LABEL_63:
    ++dword_140E35E90;
    if ( v8 )
    {
      if ( v12 >= 3 )
        MiReleasePtes((__int64)&unk_140E35E60, v8, v63);
      else
        MiUnmapLargePages(v9, v63 << 12, 8LL);
    }
    if ( v71 )
      MiDereferenceDataSubsections(v13, a3, v65, v12 < 3);
    if ( v59 )
      MiDereferencePerSessionProtos(v13);
    if ( v11 )
      MiReturnCommit(v68, v11, 0);
    if ( v10 )
      ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)active;
  }
  v71 = 1;
  if ( v60 >= 3 )
  {
LABEL_3:
    v14 = MiReservePtes((__int64)&unk_140E35E60, v63);
    v62 = v14;
    if ( !v14 )
    {
      active = -1073741670;
      v8 = 0LL;
      goto LABEL_63;
    }
    v9 = v14 << 25 >> 16;
    v66 = v9;
  }
  else
  {
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(v63, 8, v60, 0);
    v66 = PageTablesForLargeMap;
    v9 = PageTablesForLargeMap;
    if ( !PageTablesForLargeMap )
    {
      active = -1073741670;
      goto LABEL_63;
    }
    v62 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  Pool = MiAllocatePool(0x40uLL, 0x68uLL, 2002151757);
  v10 = Pool;
  if ( !Pool )
  {
    active = -1073741670;
    goto LABEL_62;
  }
  v16 = v67;
  *(_DWORD *)(Pool + 56) = *(_DWORD *)(Pool + 56) & 0xFFFFFFE7 | (8 * (v12 & 3));
  v17 = MiControlAreaRequiresCharge(v13, v16);
  v18 = v17;
  if ( !v17 )
  {
    active = -1073740277;
    goto LABEL_62;
  }
  if ( v17 == 2 )
    *(_DWORD *)(v10 + 56) |= 4u;
  if ( (*(_DWORD *)(a2 + 56) & 0x10000000) != 0 )
    *(_DWORD *)(v10 + 56) |= 1u;
  if ( (a4 & 1) != 0 )
    *(_DWORD *)(v10 + 56) |= 2u;
  v19 = v13[14];
  if ( (v19 & 0x20) == 0 )
    goto LABEL_14;
  if ( (v19 & 0x8000000) != 0 )
  {
    LODWORD(v61) = -1;
    if ( (int)MiCreatePerSessionProtos(v13, 0xFFFFFFFFLL) < 0 )
    {
      active = -1073741801;
      goto LABEL_62;
    }
    v59 = 1;
  }
  v11 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
  if ( v11 && !(unsigned int)MiChargeCommit(v68, *(_QWORD *)(*(_QWORD *)v13 + 48LL), 0) )
  {
    v11 = 0LL;
    active = -1073741523;
LABEL_62:
    v8 = (_QWORD *)v62;
    goto LABEL_63;
  }
  if ( v18 == 2 )
  {
    v64 = (__int64)(v13 + 32);
    active = MiReferenceActiveSubsection((_QWORD *)v13 + 16, v75 != 0 ? 392 : 136, 0x11u);
    if ( active < 0 )
      goto LABEL_62;
  }
LABEL_14:
  *(_QWORD *)(v10 + 32) = v65 << 12;
  *(_QWORD *)(v10 + 48) = v64;
  *(_QWORD *)(v10 + 24) = *a3 >> 12;
  *(_QWORD *)(v10 + 40) = v11;
  *(_QWORD *)(v10 + 88) = v9 | 2;
  *(_DWORD *)(v10 + 96) = v61;
  *(_QWORD *)(v10 + 64) = MiReferenceFileObjectForMap(a2);
  CurrentThread = KeGetCurrentThread();
  if ( v60 )
  {
    --CurrentThread->SpecialApcDisable;
    v21 = (char *)KeAbPreAcquire((__int64)&qword_140E36080, 0LL);
    v22 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E36080, 0LL);
    v23 = v21;
    if ( v22 )
      ExfAcquirePushLockExclusiveEx(&qword_140E36080, v21, (__int64)&qword_140E36080);
    if ( v23 )
      v23[10] = 1;
    v24 = MiLockWorkingSetExclusive((__int64)&unk_140E37FC0);
    v25 = P;
    ++dword_140E36090;
    v26 = 0;
    v27 = v24;
    if ( P )
    {
      while ( 1 )
      {
        v28 = v25[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v9 >= v28 || v9 >= v28 + v25[4] )
        {
          v29 = (_QWORD *)v25[1];
          if ( !v29 )
          {
            v26 = 1;
            break;
          }
        }
        else
        {
          v29 = (_QWORD *)*v25;
          if ( !*v25 )
          {
            v26 = 0;
            break;
          }
        }
        v25 = v29;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v25, v26, (_QWORD *)v10);
    MiUnlockWorkingSetExclusive((__int64)&unk_140E37FC0, v27);
    v69[1] = (unsigned __int64)v13;
    v30 = KeGetCurrentThread();
    v31 = (__int64 *)(v10 + 72);
    --v30->SpecialApcDisable;
    v33 = (char *)KeAbPreAcquire((__int64)(v13 + 26), 0LL);
    if ( _interlockedbittestandset64(v13 + 26, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 13, v33, (__int64)(v13 + 26));
    if ( v33 )
      v33[10] = 1;
    if ( (v13[14] & 0x400) == 0 )
    {
      v34 = (__int64 **)(v13 + 2);
      v32 = *((_QWORD *)v13 + 1);
      if ( *(_DWORD **)(v32 + 8) != v13 + 2 )
        __fastfail(3u);
      *v31 = v32;
      *(_QWORD *)(v10 + 80) = v34;
      *(_QWORD *)(v32 + 8) = v31;
      *v34 = v31;
    }
    MiUnlockControlAreaFileObjectExclusive((__int64)v13, v32);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E36080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E36080);
    KeAbPostRelease((ULONG_PTR)&qword_140E36080);
    v38 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v38 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    v44 = (volatile LONG *)((char *)&unk_140E362C0 + 16 * (unsigned __int8)(v9 >> 30));
    v45 = ExAcquireSpinLockExclusive(v44 + 3);
    v46 = 0;
    ++*((_DWORD *)v44 + 2);
    v47 = v45;
    v48 = *(_QWORD **)v44;
    if ( *(_QWORD *)v44 )
    {
      while ( 1 )
      {
        v57 = v48[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v9 >= v57 + v48[4] || v9 >= v57 )
        {
          v58 = (_QWORD *)v48[1];
          if ( !v58 )
          {
            v46 = 1;
            break;
          }
        }
        else
        {
          v58 = (_QWORD *)*v48;
          if ( !*v48 )
          {
            v46 = 0;
            break;
          }
        }
        v48 = v58;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)v44, (unsigned __int64)v48, v46, (_QWORD *)v10);
    MiReleaseSpinLockExclusive((_DWORD *)v44 + 3, v47);
  }
  if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
    _InterlockedAdd(v13 + 23, 1u);
  if ( v60 < 3 )
  {
    v49 = 0LL;
    v50 = v9;
    v51 = MiPageSizes[v60];
    v52 = *(_QWORD *)(v64 + 8);
    v53 = (_QWORD *)(v52 + 8 * v69[0]);
    v54 = (_QWORD *)(v52 + 8LL * *(unsigned int *)(v64 + 44));
    if ( v63 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
      do
      {
        if ( v53 == v54 )
        {
          v64 = *(_QWORD *)(v55 + 16);
          v53 = *(_QWORD **)(v64 + 8);
          v54 = &v53[*(unsigned int *)(v64 + 44)];
        }
        MiMapWithLargePages(AnyMultiplexedVm, v50, (*v53 >> 12) & 0xFFFFFFFFFFLL, v51, v60, 4, 1);
        v55 = v64;
        v53 += v51;
        v50 += v51 << 12;
        v49 += v51;
      }
      while ( v49 < v63 );
      v9 = v66;
    }
    active = 0;
  }
  else
  {
    v39 = v65;
    v40 = 0;
    v41 = v62;
    if ( v65 )
    {
      v42 = 0LL;
      do
      {
        ++v40;
        *(_QWORD *)(v41 + 8 * v42) = CLFS_LSN_NULL_EXT;
        v42 = v40;
      }
      while ( v40 < v39 );
    }
    active = MiAddMappedPtes((__int64)&unk_140E37FC0, v41, v39, v13, a3, v61, 0);
    if ( active < 0 )
    {
      ++dword_140E35E90;
      MiRemoveFromSystemSpace(v9, 0);
      return (unsigned int)active;
    }
  }
  *a6 = v9;
  return (unsigned int)active;
}
