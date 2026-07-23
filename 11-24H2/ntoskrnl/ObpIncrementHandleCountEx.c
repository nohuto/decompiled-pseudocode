/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14084BE20
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObInheritObjectHandle @ 0x140891E74 (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1408946D0 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404A1F34 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     MiSectionOpen @ 0x140919770 (MiSectionOpen.c)
 *     ObpLockHandleDataBaseEntry @ 0x14099B0D0 (ObpLockHandleDataBaseEntry.c)
 *     PspThreadOpen @ 0x1409E3420 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1409E3620 (PspProcessOpen.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140A3A080 (ObpUnlockHandleDatabaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  struct _KTHREAD *CurrentThread; // rax
  char *v13; // rax
  char *v14; // rdi
  char v15; // cl
  __int64 v16; // r12
  char v17; // di
  unsigned int v18; // edi
  unsigned int v19; // esi
  __int64 v20; // r13
  unsigned __int64 v21; // r12
  ULONG_PTR v22; // rsi
  __int64 v23; // rdi
  char v24; // r8
  _QWORD *v25; // rcx
  char v26; // al
  int v27; // esi
  bool v28; // zf
  __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  unsigned __int32 v33; // r15d
  signed __int64 v34; // rax
  signed __int64 v35; // rdx
  __int64 v36; // rtt
  void *v38; // rcx
  __int64 *v39; // rdi
  struct _KTHREAD *v40; // rax
  signed __int64 *v41; // rbx
  char *v42; // rax
  char *v43; // r14
  __int64 **v44; // rax
  unsigned int v45; // edx
  __int16 v46; // cx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r13
  signed __int64 v52; // rax
  signed __int64 v53; // rdx
  __int64 v54; // rtt
  char v55; // di
  unsigned int v56; // r10d
  struct _LIST_ENTRY *v57; // r12
  __int64 (__fastcall *v58)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // rax
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r9
  struct _KTHREAD *v62; // rax
  char *v63; // rax
  char *v64; // r13
  signed __int64 v65; // rax
  signed __int64 v66; // rdx
  __int64 v67; // rtt
  int *v68; // rax
  _DWORD *v69; // rdx
  _DWORD *v70; // r8
  int v71; // ecx
  _DWORD *i; // rax
  _DWORD *v73; // r10
  _DWORD *v74; // r9
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v76; // rax
  char v77; // r8
  __int64 v78; // rcx
  char v79; // r8
  __int64 v80; // rax
  signed __int64 v81; // rax
  signed __int64 v82; // rdx
  signed __int64 v83; // rtt
  struct _KTHREAD *v84; // rcx
  char v85; // [rsp+40h] [rbp-B8h]
  unsigned int v86; // [rsp+44h] [rbp-B4h]
  int v87; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v88; // [rsp+4Ch] [rbp-ACh]
  __int64 v89; // [rsp+50h] [rbp-A8h]
  __int64 v90; // [rsp+58h] [rbp-A0h]
  int v91; // [rsp+60h] [rbp-98h]
  __int64 v92; // [rsp+68h] [rbp-90h]
  unsigned __int64 v93; // [rsp+70h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-80h] BYREF

  v7 = a7;
  v8 = a4 - 48;
  v88 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v89 = a2;
  v93 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v90 = a4;
  v10 = ObTypeIndexTable[*(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v93];
  v11 = 1;
  if ( (a6 & 0x400) == 0 )
    v11 = a5;
  CurrentThread = KeGetCurrentThread();
  v91 = v11;
  --CurrentThread->KernelApcDisable;
  v13 = (char *)KeAbPreAcquire(v8 + 16, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v13, v8 + 16);
  if ( v14 )
    v14[10] = 1;
  v15 = *(_BYTE *)(v8 + 27);
  v16 = 0LL;
  v17 = v15 & 1;
  v85 = v15 & 1;
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 )
    v16 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0xF];
  v92 = v16;
  if ( !v17 )
    goto LABEL_20;
  *(_BYTE *)(v8 + 27) = v15 & 0xFE;
  if ( v16 )
  {
    v18 = *(_DWORD *)v16;
    v19 = *(_DWORD *)(v16 + 4);
    if ( !a7 )
    {
      v20 = *(_QWORD *)(v8 + 40);
      if ( !v20 )
        goto LABEL_14;
      v7 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v7 )
        goto LABEL_14;
    }
    v45 = 0;
    v86 = 0;
    if ( *(_BYTE *)v7 != 1 )
    {
      v27 = -1073741736;
      goto LABEL_42;
    }
    v46 = *(_WORD *)(v7 + 2);
    if ( v46 >= 0 )
    {
      v48 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v47 = *(unsigned int *)(v7 + 8);
      if ( (_DWORD)v47 )
        v48 = v7 + v47;
      else
        v48 = 0LL;
    }
    if ( (v46 & 4) != 0 )
    {
      if ( v46 >= 0 )
      {
        v50 = *(_QWORD *)(v7 + 32);
      }
      else
      {
        v49 = *(unsigned int *)(v7 + 16);
        if ( (_DWORD)v49 )
          v50 = v7 + v49;
        else
          v50 = 0LL;
      }
    }
    else
    {
      v50 = 0LL;
    }
    if ( v48 )
    {
      v45 = (4 * *(unsigned __int8 *)(v48 + 1) + 11) & 0xFFFFFFFC;
      v86 = v45;
    }
    if ( v50 )
    {
      v45 += (*(unsigned __int16 *)(v50 + 2) + 3) & 0xFFFFFFFC;
      v86 = v45;
    }
    if ( v45 )
    {
      if ( (PEPROCESS)a3 == PsInitialSystemProcess )
      {
        *(_QWORD *)(v16 + 16) = 1LL;
        *(_DWORD *)(v16 + 8) = v45;
        goto LABEL_14;
      }
      v51 = *(_QWORD *)(a3 + 760);
      if ( (int)PspChargeQuota(v51, 0LL, 1, v45) < 0 )
      {
        *(_QWORD *)(v16 + 16) = 0LL;
        goto LABEL_138;
      }
      v45 = v86;
      _InterlockedIncrement((volatile signed __int32 *)(v51 + 512));
      *(_QWORD *)(v16 + 16) = v51;
      if ( !v51 )
      {
LABEL_138:
        v27 = -1073741756;
        goto LABEL_42;
      }
    }
    *(_DWORD *)(v16 + 8) = v45;
  }
  else
  {
    v76 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v93];
    v18 = *(_DWORD *)(v76 + 104);
    v19 = *(_DWORD *)(v76 + 108);
  }
LABEL_14:
  v21 = v19;
  v22 = v18;
  if ( (PEPROCESS)a3 == PsInitialSystemProcess )
  {
    *(_QWORD *)(v8 + 32) = 1LL;
  }
  else
  {
    v23 = *(_QWORD *)(a3 + 760);
    if ( v22 && (int)PspChargeQuota(*(_QWORD *)(a3 + 760), 0LL, 1, (unsigned int)v22) < 0 )
    {
      *(_QWORD *)(v8 + 32) = 0LL;
      goto LABEL_54;
    }
    if ( v21 && (int)PspChargeQuota(v23, 0LL, 0, v21) < 0 )
    {
      if ( v22 )
        PspReturnQuota((__int64 *)v23, 0LL, 1, v22);
      *(_QWORD *)(v8 + 32) = 0LL;
LABEL_54:
      if ( v92 )
      {
        v38 = *(void **)(v92 + 16);
        if ( v38 )
        {
          PsReturnSharedPoolQuota(v38);
          v27 = -1073741756;
          goto LABEL_42;
        }
      }
      goto LABEL_138;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 512));
    *(_QWORD *)(v8 + 32) = v23;
    if ( !v23 )
      goto LABEL_54;
  }
  v17 = v85;
LABEL_20:
  v24 = *(_BYTE *)(v8 + 27);
  v25 = 0LL;
  v26 = v24 & 8;
  v27 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    if ( v26 == 0 || (a6 & 2) != 0 )
    {
      v27 = -1073741811;
      goto LABEL_42;
    }
    v77 = v24 & 8;
    if ( v77 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_131;
    if ( *(_QWORD *)(v8 + 8) )
    {
LABEL_41:
      v27 = -1073741790;
LABEL_42:
      _m_prefetchw((const void *)(v8 + 16));
      v34 = *(_QWORD *)(v8 + 16);
      v35 = v34 - 16;
      if ( (v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v35 = 0LL;
      if ( (v34 & 2) != 0
        || (v36 = *(_QWORD *)(v8 + 16),
            v36 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v35, v34)) )
      {
        ExfReleasePushLock((_QWORD *)(v8 + 16));
      }
      KeAbPostRelease(v8 + 16);
      KeLeaveCriticalRegionThread();
      return (unsigned int)v27;
    }
    if ( v77 )
    {
LABEL_131:
      v78 = *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      if ( v78 )
      {
        v80 = 0LL;
        if ( v79 )
          v80 = v78;
        if ( v80 != a3 )
          goto LABEL_41;
      }
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = a3;
  }
  else if ( v26 )
  {
    if ( (*(_BYTE *)(v8 + 26) & 0x10) != 0 )
      v25 = (_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]);
    if ( *v25 )
      goto LABEL_41;
  }
  if ( (_BYTE)v91 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
    v27 = -1073741790;
    goto LABEL_42;
  }
  if ( !*(_QWORD *)(v8 + 8)
    && !v17
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128) )
  {
    v27 = -1073741823;
    goto LABEL_42;
  }
  v28 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v87 = 0;
  if ( !v28 )
  {
    v27 = ObpLockHandleDataBaseEntry(v8, a3, &v87);
    if ( v27 < 0 )
      goto LABEL_42;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_28;
  _m_prefetchw((const void *)(v8 + 16));
  v52 = *(_QWORD *)(v8 + 16);
  v53 = v52 - 16;
  if ( (v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v53 = 0LL;
  if ( (v52 & 2) != 0
    || (v54 = *(_QWORD *)(v8 + 16), v54 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v53, v52)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 16));
  }
  KeAbPostRelease(v8 + 16);
  KeLeaveCriticalRegionThread();
  v55 = 0;
  v56 = v88;
  v57 = 0LL;
  if ( (_KPROCESS *)a3 != KeGetCurrentThread()->ApcState.Process && v88 != 3 )
  {
    v55 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(a3);
    v57 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess((PRKPROCESS)a3, &ApcState);
    v56 = v88;
  }
  v58 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))(v10 + 120);
  if ( v58 == PspProcessOpen )
  {
    v59 = PspProcessOpen(v56, a5, a3, v90, v89);
  }
  else if ( (char *)v58 == (char *)MiSectionOpen )
  {
    v59 = MiSectionOpen(v56, a5, a3, v90, v89, v87);
  }
  else if ( v58 == PspThreadOpen )
  {
    v59 = PspThreadOpen(v56, a5, a3, v90, v89);
  }
  else
  {
    v59 = guard_dispatch_icall_no_overrides(v56, a5);
  }
  v27 = v59;
  if ( v55 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0, v60, v61);
    PsDetachSiloFromCurrentThread(v57);
  }
  v62 = KeGetCurrentThread();
  --v62->KernelApcDisable;
  v63 = (char *)KeAbPreAcquire(v8 + 16, 0LL);
  v64 = v63;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v63, v8 + 16);
  if ( v64 )
    v64[10] = 1;
  if ( v27 < 0 )
  {
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
      ObpUnlockHandleDatabaseEntry(v8, a3);
    _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
    _m_prefetchw((const void *)(v8 + 16));
    v65 = *(_QWORD *)(v8 + 16);
    v66 = v65 - 16;
    if ( (v65 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v66 = 0LL;
    if ( (v65 & 2) != 0
      || (v67 = *(_QWORD *)(v8 + 16),
          v67 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v66, v65)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread();
    ObpDeleteNameCheck(v8);
  }
  else
  {
LABEL_28:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v29 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v29 + 11);
        *(_DWORD *)(v29 + 8) = (*(_DWORD *)(v29 + 8) + 1) & 0xFFFFFF | _byteswap_ulong(HIBYTE(*(_DWORD *)(v29 + 8)));
      }
      else
      {
        v68 = *(int **)v29;
        v69 = 0LL;
        v70 = 0LL;
        v71 = *v68;
        for ( i = v68 + 2; v71; --v71 )
        {
          v73 = v69;
          v74 = v69;
          if ( *(_QWORD *)i == a3 )
          {
            v69 = i;
            v70 = i;
            if ( v74 )
              v69 = v73;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v69[2] ^= (v69[2] ^ (v69[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v70 + 11);
      }
    }
    _m_prefetchw((const void *)(v8 + 16));
    v30 = *(_QWORD *)(v8 + 16);
    v31 = v30 - 16;
    if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (v30 & 2) != 0
      || (v32 = *(_QWORD *)(v8 + 16),
          v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v31, v30)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread();
    if ( !v88 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v39 = (__int64 *)(v8 - 32);
      if ( v8 != 32 )
      {
        v40 = KeGetCurrentThread();
        v41 = (signed __int64 *)(v10 + 184);
        --v40->SpecialApcDisable;
        v42 = (char *)KeAbPreAcquire(v10 + 184, 0LL);
        v43 = v42;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 184), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), v42, v10 + 184);
        if ( v43 )
          v43[10] = 1;
        v44 = *(__int64 ***)(v10 + 8);
        if ( *v44 != (__int64 *)v10 )
          __fastfail(3u);
        *v39 = v10;
        v39[1] = (__int64)v44;
        *v44 = v39;
        *(_QWORD *)(v10 + 8) = v39;
        _m_prefetchw(v41);
        v81 = *v41;
        v82 = *v41 - 16;
        if ( (*v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v82 = 0LL;
        if ( (v81 & 2) != 0 || (v83 = *v41, v83 != _InterlockedCompareExchange64(v41, v82, v81)) )
          ExfReleasePushLock((_QWORD *)(v10 + 184));
        KeAbPostRelease(v10 + 184);
        v84 = KeGetCurrentThread();
        v28 = v84->SpecialApcDisable++ == -1;
        if ( v28 && ($727077A9B6E167EAE1398C74674DC5A5 *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v33 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    if ( v33 > *(_DWORD *)(v10 + 56) )
      *(_DWORD *)(v10 + 56) = v33;
  }
  return (unsigned int)v27;
}
