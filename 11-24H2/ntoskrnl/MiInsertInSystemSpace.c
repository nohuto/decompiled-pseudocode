/*
 * XREFs of MiInsertInSystemSpace @ 0x140415F30
 * Callers:
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewInSystemSpace @ 0x140946C58 (MiMapViewInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiAddMappedPtes @ 0x140243C60 (MiAddMappedPtes.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x1402B9A20 (MiUnlockControlAreaFileObjectExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetPageTablesForLargeMap @ 0x1403A6BE4 (MiGetPageTablesForLargeMap.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     MiReferenceDataSubsections @ 0x140416740 (MiReferenceDataSubsections.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiUnmapLargePages @ 0x1404D8B98 (MiUnmapLargePages.c)
 *     MiDereferenceDataSubsections @ 0x14068BC60 (MiDereferenceDataSubsections.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiReferenceFileObjectForMap @ 0x1408E1590 (MiReferenceFileObjectForMap.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v21; // rax
  signed __int8 v22; // cf
  _QWORD *v23; // r15
  unsigned __int8 v24; // al
  _QWORD *v25; // rdx
  bool v26; // r8
  unsigned __int8 v27; // r15
  unsigned __int64 v28; // r8
  _QWORD *v29; // rax
  struct _KTHREAD *v30; // rax
  __int64 *v31; // r15
  __int64 v32; // rdx
  _QWORD *v33; // r13
  __int64 **v34; // rax
  int v35; // eax
  int active; // ebx
  unsigned __int64 PageTablesForLargeMap; // rax
  __int64 v38; // rdx
  bool v39; // zf
  unsigned __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned __int64 v42; // r13
  __int64 v43; // r8
  volatile LONG *v45; // rbx
  KIRQL v46; // al
  bool v47; // r8
  unsigned __int8 v48; // r15
  _QWORD *v49; // rdx
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rdi
  __int64 v53; // rcx
  _QWORD *v54; // rbx
  _QWORD *v55; // r13
  __int64 v56; // rdx
  __int64 AnyMultiplexedVm; // rsi
  unsigned __int64 v58; // r8
  _QWORD *v59; // rax
  char v60; // [rsp+48h] [rbp-C0h]
  unsigned int v61; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h]
  __int64 v63; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+70h] [rbp-98h]
  ULONG_PTR v67; // [rsp+78h] [rbp-90h]
  unsigned int v68; // [rsp+80h] [rbp-88h]
  __int64 v69; // [rsp+88h] [rbp-80h]
  unsigned __int64 v70[2]; // [rsp+90h] [rbp-78h] BYREF
  char v71[216]; // [rsp+A0h] [rbp-68h] BYREF
  char v72; // [rsp+188h] [rbp+80h]
  __int64 v76; // [rsp+1A8h] [rbp+A0h]

  v70[0] = 0LL;
  memset_0(v71, 0, 0x90uLL);
  v8 = 0LL;
  v9 = 0LL;
  v72 = 0;
  v10 = 0LL;
  v60 = 0;
  v11 = 0LL;
  v64 = 0LL;
  *a6 = 0LL;
  v66 = 0LL;
  v69 = 0LL;
  v12 = 3;
  v61 = 3;
  LODWORD(v62) = 0x7FFFF;
  v13 = (_DWORD *)MiSectionControlArea(a2);
  v67 = (unsigned __int16)a1;
  v65 = MiOffsetToProtos((__int64)v13, *a3, v70);
  if ( !v65 )
  {
    active = -1073741801;
    goto LABEL_63;
  }
  v76 = a5 & 8;
  v68 = (v76 != 0) + 2;
  v66 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v64 = 16 * ((a1 >> 16) + (v67 != 0));
  v69 = *((_QWORD *)qword_140E2FF88 + (unsigned __int16)word_140E37F2E);
  if ( (v13[14] & 0x20) != 0 )
    goto LABEL_3;
  v35 = MiReferenceDataSubsections(v13, a3, (a1 >> 12) + ((a1 & 0xFFF) != 0), &v61);
  v12 = v61;
  active = v35;
  if ( v35 < 0 )
  {
LABEL_63:
    ++dword_140E35D50;
    if ( v8 )
    {
      if ( v12 >= 3 )
        MiReleasePtes((__int64)&unk_140E35D20, v8, v64);
      else
        MiUnmapLargePages(v9, v64 << 12, 8LL);
    }
    if ( v72 )
      MiDereferenceDataSubsections(v13, a3, v66, v12 < 3);
    if ( v60 )
      MiDereferencePerSessionProtos(v13);
    if ( v11 )
      MiReturnCommit(v69, v11, 0);
    if ( v10 )
      ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)active;
  }
  v72 = 1;
  if ( v61 >= 3 )
  {
LABEL_3:
    v14 = MiReservePtes((__int64)&unk_140E35D20, v64);
    v63 = v14;
    if ( !v14 )
    {
      active = -1073741670;
      v8 = 0LL;
      goto LABEL_63;
    }
    v9 = v14 << 25 >> 16;
    v67 = v9;
  }
  else
  {
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(v64, 8, v61, 0);
    v67 = PageTablesForLargeMap;
    v9 = PageTablesForLargeMap;
    if ( !PageTablesForLargeMap )
    {
      active = -1073741670;
      goto LABEL_63;
    }
    v63 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  Pool = MiAllocatePool(0x40uLL, 0x68uLL, 2002151757);
  v10 = Pool;
  if ( !Pool )
  {
    active = -1073741670;
    goto LABEL_62;
  }
  v16 = v68;
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
    LODWORD(v62) = -1;
    if ( (int)MiCreatePerSessionProtos(v13, 0xFFFFFFFFLL) < 0 )
    {
      active = -1073741801;
      goto LABEL_62;
    }
    v60 = 1;
  }
  v11 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
  if ( v11 && !(unsigned int)MiChargeCommit(v69, *(_QWORD *)(*(_QWORD *)v13 + 48LL), 0) )
  {
    v11 = 0LL;
    active = -1073741523;
LABEL_62:
    v8 = (_QWORD *)v63;
    goto LABEL_63;
  }
  if ( v18 == 2 )
  {
    v65 = (__int64)(v13 + 32);
    active = MiReferenceActiveSubsection((_QWORD *)v13 + 16, v76 != 0 ? 392 : 136, 0x11u);
    if ( active < 0 )
      goto LABEL_62;
  }
LABEL_14:
  *(_QWORD *)(v10 + 32) = v66 << 12;
  *(_QWORD *)(v10 + 48) = v65;
  *(_QWORD *)(v10 + 24) = *a3 >> 12;
  *(_QWORD *)(v10 + 40) = v11;
  *(_QWORD *)(v10 + 88) = v9 | 2;
  *(_DWORD *)(v10 + 96) = v62;
  *(_QWORD *)(v10 + 64) = MiReferenceFileObjectForMap(a2);
  CurrentThread = KeGetCurrentThread();
  if ( v61 )
  {
    --CurrentThread->SpecialApcDisable;
    v21 = KeAbPreAcquire((__int64)&qword_140E35F40, 0LL);
    v22 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E35F40, 0LL);
    v23 = v21;
    if ( v22 )
      ExfAcquirePushLockExclusiveEx(&qword_140E35F40, (__int64)v21, (__int64)&qword_140E35F40);
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    v24 = MiLockWorkingSetExclusive((__int64)&unk_140E37E80);
    v25 = P;
    ++dword_140E35F50;
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
    MiUnlockWorkingSetExclusive((__int64)&unk_140E37E80, v27);
    v70[1] = (unsigned __int64)v13;
    v30 = KeGetCurrentThread();
    v31 = (__int64 *)(v10 + 72);
    --v30->SpecialApcDisable;
    v33 = KeAbPreAcquire((__int64)(v13 + 26), 0LL);
    if ( _interlockedbittestandset64(v13 + 26, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 13, (__int64)v33, (__int64)(v13 + 26));
    if ( v33 )
      *((_BYTE *)v33 + 10) = 1;
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E35F40);
    KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
    v39 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v39 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v38);
  }
  else
  {
    v45 = (volatile LONG *)((char *)&unk_140E36180 + 16 * (unsigned __int8)(v9 >> 30));
    v46 = ExAcquireSpinLockExclusive(v45 + 3);
    v47 = 0;
    ++*((_DWORD *)v45 + 2);
    v48 = v46;
    v49 = *(_QWORD **)v45;
    if ( *(_QWORD *)v45 )
    {
      while ( 1 )
      {
        v58 = v49[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v9 >= v58 + v49[4] || v9 >= v58 )
        {
          v59 = (_QWORD *)v49[1];
          if ( !v59 )
          {
            v47 = 1;
            break;
          }
        }
        else
        {
          v59 = (_QWORD *)*v49;
          if ( !*v49 )
          {
            v47 = 0;
            break;
          }
        }
        v49 = v59;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)v45, (unsigned __int64)v49, v47, (_QWORD *)v10);
    MiReleaseSpinLockExclusive((_DWORD *)v45 + 3, v48);
  }
  if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
    _InterlockedAdd(v13 + 23, 1u);
  if ( v61 < 3 )
  {
    v50 = 0LL;
    v51 = v9;
    v52 = MiPageSizes[v61];
    v53 = *(_QWORD *)(v65 + 8);
    v54 = (_QWORD *)(v53 + 8 * v70[0]);
    v55 = (_QWORD *)(v53 + 8LL * *(unsigned int *)(v65 + 44));
    if ( v64 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
      do
      {
        if ( v54 == v55 )
        {
          v65 = *(_QWORD *)(v56 + 16);
          v54 = *(_QWORD **)(v65 + 8);
          v55 = &v54[*(unsigned int *)(v65 + 44)];
        }
        MiMapWithLargePages(AnyMultiplexedVm, v51, (*v54 >> 12) & 0xFFFFFFFFFFLL, v52, v61, 4, 1);
        v56 = v65;
        v54 += v52;
        v51 += v52 << 12;
        v50 += v52;
      }
      while ( v50 < v64 );
      v9 = v67;
    }
    active = 0;
  }
  else
  {
    v40 = v66;
    v41 = 0;
    v42 = v63;
    if ( v66 )
    {
      v43 = 0LL;
      do
      {
        ++v41;
        *(_QWORD *)(v42 + 8 * v43) = CLFS_LSN_NULL_EXT;
        v43 = v41;
      }
      while ( v41 < v40 );
    }
    active = MiAddMappedPtes((__int64)&unk_140E37E80, v42, v40, v13, a3, v62, 0);
    if ( active < 0 )
    {
      ++dword_140E35D50;
      MiRemoveFromSystemSpace(v9, 0);
      return (unsigned int)active;
    }
  }
  *a6 = v9;
  return (unsigned int)active;
}
