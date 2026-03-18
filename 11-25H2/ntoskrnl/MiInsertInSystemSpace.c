/*
 * XREFs of MiInsertInSystemSpace @ 0x1402A4B54
 * Callers:
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     MiMapViewInSystemSpace @ 0x1408BA3B8 (MiMapViewInSystemSpace.c)
 *     NtGetNlsSectionPtr @ 0x1408FB050 (NtGetNlsSectionPtr.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiReferenceDataSubsections @ 0x1402A485C (MiReferenceDataSubsections.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x14031FF90 (MiUnlockControlAreaFileObjectExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiGetPageTablesForLargeMap @ 0x14038FB4C (MiGetPageTablesForLargeMap.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiUnmapLargePages @ 0x1404DAD88 (MiUnmapLargePages.c)
 *     MiDereferenceDataSubsections @ 0x1406803D0 (MiDereferenceDataSubsections.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiReferenceFileObjectForMap @ 0x1408FF8F0 (MiReferenceFileObjectForMap.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v8; // r13
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // r12d
  _DWORD *v13; // r14
  int v14; // eax
  int active; // ebx
  __int64 v16; // rax
  __int64 Pool; // rax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 *v23; // rax
  signed __int8 v24; // cf
  __int64 *v25; // r15
  char v26; // al
  _QWORD *v27; // rdx
  unsigned __int64 v28; // r8
  char v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rax
  _QWORD *v33; // r15
  __int64 *v34; // r13
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  unsigned __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // r13
  __int64 v44; // r8
  unsigned __int64 PageTablesForLargeMap; // rax
  volatile LONG *v47; // rbx
  KIRQL v48; // al
  unsigned __int64 v49; // r8
  KIRQL v50; // r15
  _QWORD *v51; // rdx
  unsigned __int64 v52; // r12
  int v53; // r15d
  __int64 v54; // rdi
  __int64 v55; // rcx
  _QWORD *v56; // rbx
  _QWORD *v57; // r13
  __int64 v58; // rdx
  int AnyMultiplexedVm; // esi
  _QWORD *v60; // rax
  __int64 v61; // rdx
  char v62; // [rsp+48h] [rbp-C0h]
  unsigned int v63; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+60h] [rbp-A8h]
  __int64 v67; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v68; // [rsp+70h] [rbp-98h]
  ULONG_PTR v69; // [rsp+78h] [rbp-90h]
  unsigned int v70; // [rsp+80h] [rbp-88h]
  __int64 v71; // [rsp+88h] [rbp-80h]
  _QWORD v72[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v73[216]; // [rsp+A0h] [rbp-68h] BYREF
  char v74; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+1A8h] [rbp+A0h]

  v72[0] = 0LL;
  memset_0(v73, 0, 0x90uLL);
  v8 = 0LL;
  v9 = 0LL;
  v74 = 0;
  v10 = 0LL;
  v62 = 0;
  v11 = 0LL;
  v66 = 0LL;
  *a6 = 0LL;
  v68 = 0LL;
  v71 = 0LL;
  v12 = 3;
  v63 = 3;
  LODWORD(v64) = 0x7FFFF;
  v13 = (_DWORD *)MiSectionControlArea(a2);
  v69 = (unsigned __int16)a1;
  v67 = MiOffsetToProtos(v13, *a3, v72);
  if ( !v67 )
  {
    active = -1073741801;
    goto LABEL_60;
  }
  v78 = a5 & 8;
  v70 = (v78 != 0) + 2;
  v68 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v66 = 16 * ((a1 >> 16) + (v69 != 0));
  v71 = *((_QWORD *)qword_140E2FD48 + (unsigned __int16)word_140E37CEE);
  if ( (v13[14] & 0x20) != 0 )
    goto LABEL_5;
  v14 = MiReferenceDataSubsections((__int64)v13, a3, (a1 >> 12) + ((a1 & 0xFFF) != 0), &v63);
  v12 = v63;
  active = v14;
  if ( v14 < 0 )
  {
LABEL_60:
    ++dword_140E35B10;
    if ( v8 )
    {
      if ( v12 >= 3 )
        MiReleasePtes(&unk_140E35AE0, v8, (unsigned int)v66);
      else
        MiUnmapLargePages(v9, v66 << 12, 8LL);
    }
    if ( v74 )
      MiDereferenceDataSubsections(v13, a3, v68, v12 < 3);
    if ( v62 )
      MiDereferencePerSessionProtos(v13, (unsigned int)v64);
    if ( v11 )
      MiReturnCommit(v71, v11, 0LL);
    if ( v10 )
      ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)active;
  }
  v74 = 1;
  if ( v63 >= 3 )
  {
LABEL_5:
    v16 = MiReservePtes(&unk_140E35AE0, (unsigned int)v66);
    v65 = v16;
    if ( !v16 )
    {
      active = -1073741670;
      v8 = 0LL;
      goto LABEL_60;
    }
    v9 = v16 << 25 >> 16;
    v69 = v9;
  }
  else
  {
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(v66, 8LL, v63);
    v69 = PageTablesForLargeMap;
    v9 = PageTablesForLargeMap;
    if ( !PageTablesForLargeMap )
    {
      active = -1073741670;
      goto LABEL_60;
    }
    v65 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  Pool = MiAllocatePool(0x40uLL, 0x68uLL);
  v10 = Pool;
  if ( !Pool )
  {
    active = -1073741670;
    goto LABEL_59;
  }
  v18 = v70;
  *(_DWORD *)(Pool + 56) = *(_DWORD *)(Pool + 56) & 0xFFFFFFE7 | (8 * (v12 & 3));
  v19 = MiControlAreaRequiresCharge(v13, v18);
  v20 = v19;
  if ( !v19 )
  {
    active = -1073740277;
    goto LABEL_59;
  }
  if ( v19 == 2 )
    *(_DWORD *)(v10 + 56) |= 4u;
  if ( (*(_DWORD *)(a2 + 56) & 0x10000000) != 0 )
    *(_DWORD *)(v10 + 56) |= 1u;
  if ( (a4 & 1) != 0 )
    *(_DWORD *)(v10 + 56) |= 2u;
  v21 = v13[14];
  if ( (v21 & 0x20) == 0 )
    goto LABEL_16;
  if ( (v21 & 0x8000000) != 0 )
  {
    LODWORD(v64) = -1;
    if ( (int)MiCreatePerSessionProtos(v13, 0xFFFFFFFFLL) < 0 )
    {
      active = -1073741801;
      goto LABEL_59;
    }
    v62 = 1;
  }
  v11 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
  if ( v11 && !(unsigned int)MiChargeCommit(v71, *(_QWORD *)(*(_QWORD *)v13 + 48LL), 0) )
  {
    v11 = 0LL;
    active = -1073741523;
LABEL_59:
    v8 = v65;
    goto LABEL_60;
  }
  if ( v20 == 2 )
  {
    v67 = (__int64)(v13 + 32);
    active = MiReferenceActiveSubsection((_QWORD *)v13 + 16, v78 != 0 ? 392 : 136, 0x11u);
    if ( active < 0 )
      goto LABEL_59;
  }
LABEL_16:
  *(_QWORD *)(v10 + 32) = v68 << 12;
  *(_QWORD *)(v10 + 48) = v67;
  *(_QWORD *)(v10 + 24) = (unsigned __int64)*a3 >> 12;
  *(_QWORD *)(v10 + 40) = v11;
  *(_QWORD *)(v10 + 88) = v9 | 2;
  *(_DWORD *)(v10 + 96) = v64;
  *(_QWORD *)(v10 + 64) = MiReferenceFileObjectForMap(a2);
  CurrentThread = KeGetCurrentThread();
  if ( v63 )
  {
    --CurrentThread->SpecialApcDisable;
    v23 = KeAbPreAcquire((__int64)&qword_140E35D00, 0LL);
    v24 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E35D00, 0LL);
    v25 = v23;
    if ( v24 )
      ExfAcquirePushLockExclusiveEx(&qword_140E35D00, v23, (__int64)&qword_140E35D00);
    if ( v25 )
      *((_BYTE *)v25 + 10) = 1;
    v26 = MiLockWorkingSetExclusive((__int64)&unk_140E37C40);
    v27 = P;
    ++dword_140E35D10;
    LOBYTE(v28) = 0;
    v29 = v26;
    if ( P )
    {
      while ( 1 )
      {
        v28 = v27[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v9 >= v28 || v9 >= v28 + v27[4] )
        {
          v30 = (_QWORD *)v27[1];
          if ( !v30 )
          {
            LOBYTE(v28) = 1;
            break;
          }
        }
        else
        {
          v30 = (_QWORD *)*v27;
          if ( !*v27 )
          {
            LOBYTE(v28) = 0;
            break;
          }
        }
        v27 = v30;
      }
    }
    RtlAvlInsertNodeEx(&P, v27, v28, v10);
    LOBYTE(v31) = v29;
    MiUnlockWorkingSetExclusive(&unk_140E37C40, v31);
    v72[1] = v13;
    v32 = KeGetCurrentThread();
    v33 = (_QWORD *)(v10 + 72);
    --v32->SpecialApcDisable;
    v34 = KeAbPreAcquire((__int64)(v13 + 26), 0LL);
    if ( _interlockedbittestandset64(v13 + 26, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 13, v34, (__int64)(v13 + 26));
    if ( v34 )
      *((_BYTE *)v34 + 10) = 1;
    if ( (v13[14] & 0x400) == 0 )
    {
      v35 = v13 + 2;
      v36 = *((_QWORD *)v13 + 1);
      if ( *(_DWORD **)(v36 + 8) != v13 + 2 )
        __fastfail(3u);
      *v33 = v36;
      *(_QWORD *)(v10 + 80) = v35;
      *(_QWORD *)(v36 + 8) = v33;
      *v35 = v33;
    }
    MiUnlockControlAreaFileObjectExclusive(v13);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35D00, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140E35D00);
    KeAbPostRelease((ULONG_PTR)&qword_140E35D00);
    v40 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v40 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v37, v38, v39);
  }
  else
  {
    v47 = (volatile LONG *)((char *)&unk_140E35F40 + 16 * (unsigned __int8)(v9 >> 30));
    v48 = ExAcquireSpinLockExclusive(v47 + 3);
    LOBYTE(v49) = 0;
    ++*((_DWORD *)v47 + 2);
    v50 = v48;
    v51 = *(_QWORD **)v47;
    if ( *(_QWORD *)v47 )
    {
      while ( 1 )
      {
        v49 = v51[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v9 >= v49 + v51[4] || v9 >= v49 )
        {
          v60 = (_QWORD *)v51[1];
          if ( !v60 )
          {
            LOBYTE(v49) = 1;
            break;
          }
        }
        else
        {
          v60 = (_QWORD *)*v51;
          if ( !*v51 )
          {
            LOBYTE(v49) = 0;
            break;
          }
        }
        v51 = v60;
      }
    }
    RtlAvlInsertNodeEx(v47, v51, v49, v10);
    LOBYTE(v61) = v50;
    MiReleaseSpinLockExclusive(v47 + 3, v61);
  }
  if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
    _InterlockedAdd(v13 + 23, 1u);
  if ( v63 < 3 )
  {
    v52 = 0LL;
    v53 = v9;
    v54 = MiPageSizes[v63];
    v55 = *(_QWORD *)(v67 + 8);
    v56 = (_QWORD *)(v55 + 8LL * v72[0]);
    v57 = (_QWORD *)(v55 + 8LL * *(unsigned int *)(v67 + 44));
    if ( v66 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
      do
      {
        if ( v56 == v57 )
        {
          v67 = *(_QWORD *)(v58 + 16);
          v56 = *(_QWORD **)(v67 + 8);
          v57 = &v56[*(unsigned int *)(v67 + 44)];
        }
        MiMapWithLargePages(AnyMultiplexedVm, v53, *v56 >> 12, v54, v63, 4, 1);
        v58 = v67;
        v56 += v54;
        v53 += (_DWORD)v54 << 12;
        v52 += v54;
      }
      while ( v52 < v66 );
      v9 = v69;
    }
    active = 0;
  }
  else
  {
    v41 = v68;
    v42 = 0;
    v43 = v65;
    if ( v68 )
    {
      v44 = 0LL;
      do
      {
        ++v42;
        *(_QWORD *)(v43 + 8 * v44) = CLFS_LSN_NULL_EXT;
        v44 = v42;
      }
      while ( v42 < v41 );
    }
    active = MiAddMappedPtes((unsigned int)&unk_140E37C40, v43, v41, (_DWORD)v13, (__int64)a3, v64, 0);
    if ( active < 0 )
    {
      ++dword_140E35B10;
      MiRemoveFromSystemSpace(v9);
      return (unsigned int)active;
    }
  }
  *a6 = v9;
  return (unsigned int)active;
}
