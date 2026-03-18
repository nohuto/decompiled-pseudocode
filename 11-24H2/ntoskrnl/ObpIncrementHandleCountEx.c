/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14084FB60
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObInheritObjectHandle @ 0x14093D784 (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x140940090 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x140940288 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     PspChargeQuota @ 0x14024B520 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404A7504 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     MiSectionOpen @ 0x1408E2BC0 (MiSectionOpen.c)
 *     ObpLockHandleDataBaseEntry @ 0x1409B1610 (ObpLockHandleDataBaseEntry.c)
 *     PspThreadOpen @ 0x1409E8460 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1409E8660 (PspProcessOpen.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140A447F0 (ObpUnlockHandleDatabaseEntry.c)
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
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
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
  _QWORD *v42; // rax
  _QWORD *v43; // r14
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
  struct _KTHREAD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // r13
  signed __int64 v63; // rax
  signed __int64 v64; // rdx
  __int64 v65; // rtt
  int *v66; // rax
  _DWORD *v67; // rdx
  _DWORD *v68; // r8
  int v69; // ecx
  _DWORD *i; // rax
  _DWORD *v71; // r10
  _DWORD *v72; // r9
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v74; // rax
  char v75; // r8
  __int64 v76; // rcx
  char v77; // r8
  __int64 v78; // rax
  signed __int64 v79; // rax
  signed __int64 v80; // rdx
  signed __int64 v81; // rtt
  __int64 v82; // rdx
  struct _KTHREAD *v83; // rcx
  char v84; // [rsp+40h] [rbp-B8h]
  unsigned int v85; // [rsp+44h] [rbp-B4h]
  int v86; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v87; // [rsp+4Ch] [rbp-ACh]
  __int64 v88; // [rsp+50h] [rbp-A8h]
  __int64 v89; // [rsp+58h] [rbp-A0h]
  int v90; // [rsp+60h] [rbp-98h]
  __int64 v91; // [rsp+68h] [rbp-90h]
  unsigned __int64 v92; // [rsp+70h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-80h] BYREF

  v7 = a7;
  v8 = a4 - 48;
  v87 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v88 = a2;
  v92 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v89 = a4;
  v10 = ObTypeIndexTable[*(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v92];
  v11 = 1;
  if ( (a6 & 0x400) == 0 )
    v11 = a5;
  CurrentThread = KeGetCurrentThread();
  v90 = v11;
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire(v8 + 16, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), (__int64)v13, v8 + 16);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  v15 = *(_BYTE *)(v8 + 27);
  v16 = 0LL;
  v17 = v15 & 1;
  v84 = v15 & 1;
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 )
    v16 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0xF];
  v91 = v16;
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
    v85 = 0;
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
      v85 = v45;
    }
    if ( v50 )
    {
      v45 += (*(unsigned __int16 *)(v50 + 2) + 3) & 0xFFFFFFFC;
      v85 = v45;
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
      v45 = v85;
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
    v74 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v92];
    v18 = *(_DWORD *)(v74 + 104);
    v19 = *(_DWORD *)(v74 + 108);
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
      if ( v91 )
      {
        v38 = *(void **)(v91 + 16);
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
  v17 = v84;
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
    v75 = v24 & 8;
    if ( v75 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
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
    if ( v75 )
    {
LABEL_131:
      v76 = *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      if ( v76 )
      {
        v78 = 0LL;
        if ( v77 )
          v78 = v76;
        if ( v78 != a3 )
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
  if ( (_BYTE)v90 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
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
  v86 = 0;
  if ( !v28 )
  {
    v27 = ObpLockHandleDataBaseEntry(v8, a3, &v86);
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
  v56 = v87;
  v57 = 0LL;
  if ( (_KPROCESS *)a3 != KeGetCurrentThread()->ApcState.Process && v87 != 3 )
  {
    v55 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(a3);
    v57 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess((PRKPROCESS)a3, &ApcState);
    v56 = v87;
  }
  v58 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))(v10 + 120);
  if ( v58 == PspProcessOpen )
  {
    v59 = PspProcessOpen(v56, a5, a3, v89, v88);
  }
  else if ( (char *)v58 == (char *)MiSectionOpen )
  {
    v59 = MiSectionOpen(v56, a5, a3, v89, v88, v86);
  }
  else if ( v58 == PspThreadOpen )
  {
    v59 = PspThreadOpen(v56, a5, a3, v89, v88);
  }
  else
  {
    v59 = guard_dispatch_icall_no_overrides(v56, a5, a3, v89);
  }
  v27 = v59;
  if ( v55 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0);
    PsDetachSiloFromCurrentThread(v57);
  }
  v60 = KeGetCurrentThread();
  --v60->KernelApcDisable;
  v61 = KeAbPreAcquire(v8 + 16, 0LL);
  v62 = v61;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), (__int64)v61, v8 + 16);
  if ( v62 )
    *((_BYTE *)v62 + 10) = 1;
  if ( v27 < 0 )
  {
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
      ObpUnlockHandleDatabaseEntry(v8, a3);
    _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
    _m_prefetchw((const void *)(v8 + 16));
    v63 = *(_QWORD *)(v8 + 16);
    v64 = v63 - 16;
    if ( (v63 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v64 = 0LL;
    if ( (v63 & 2) != 0
      || (v65 = *(_QWORD *)(v8 + 16),
          v65 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v64, v63)) )
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
        v66 = *(int **)v29;
        v67 = 0LL;
        v68 = 0LL;
        v69 = *v66;
        for ( i = v66 + 2; v69; --v69 )
        {
          v71 = v67;
          v72 = v67;
          if ( *(_QWORD *)i == a3 )
          {
            v67 = i;
            v68 = i;
            if ( v72 )
              v67 = v71;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v67[2] ^= (v67[2] ^ (v67[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v68 + 11);
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
    if ( !v87 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v39 = (__int64 *)(v8 - 32);
      if ( v8 != 32 )
      {
        v40 = KeGetCurrentThread();
        v41 = (signed __int64 *)(v10 + 184);
        --v40->SpecialApcDisable;
        v42 = KeAbPreAcquire(v10 + 184, 0LL);
        v43 = v42;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 184), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), (__int64)v42, v10 + 184);
        if ( v43 )
          *((_BYTE *)v43 + 10) = 1;
        v44 = *(__int64 ***)(v10 + 8);
        if ( *v44 != (__int64 *)v10 )
          __fastfail(3u);
        *v39 = v10;
        v39[1] = (__int64)v44;
        *v44 = v39;
        *(_QWORD *)(v10 + 8) = v39;
        _m_prefetchw(v41);
        v79 = *v41;
        v80 = *v41 - 16;
        if ( (*v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v80 = 0LL;
        if ( (v79 & 2) != 0 || (v81 = *v41, v81 != _InterlockedCompareExchange64(v41, v80, v79)) )
          ExfReleasePushLock((_QWORD *)(v10 + 184));
        KeAbPostRelease(v10 + 184);
        v83 = KeGetCurrentThread();
        v28 = v83->SpecialApcDisable++ == -1;
        if ( v28 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v83->ApcState.ApcListHead[0].Flink != &v83->152 )
          KiCheckForKernelApcDelivery((__int64)v83, v82);
      }
    }
    v33 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    if ( v33 > *(_DWORD *)(v10 + 56) )
      *(_DWORD *)(v10 + 56) = v33;
  }
  return (unsigned int)v27;
}
