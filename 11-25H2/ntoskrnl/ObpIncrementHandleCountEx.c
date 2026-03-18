/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1408539A0
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1408AD75C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1408AD954 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     ObInheritObjectHandle @ 0x140972284 (ObInheritObjectHandle.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PspChargeQuota @ 0x1403C65E0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404A6D60 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     MiSectionOpen @ 0x140900A20 (MiSectionOpen.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     PspThreadOpen @ 0x1409BBDF0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1409BBF00 (PspProcessOpen.c)
 *     ObpLockHandleDataBaseEntry @ 0x1409CC250 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140A3FF94 (ObpUnlockHandleDatabaseEntry.c)
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
  __int64 v10; // rsi
  int v11; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v13; // rax
  __int64 *v14; // rdi
  char v15; // cl
  signed __int64 v16; // r9
  char v17; // di
  __int64 v18; // r12
  unsigned int v19; // edi
  unsigned int v20; // ebp
  __int64 v21; // r13
  unsigned int v22; // edx
  __int16 v23; // cx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r13
  unsigned __int64 v29; // r12
  ULONG_PTR v30; // rbp
  __int64 v31; // rdi
  char v32; // r8
  int v33; // ebp
  char v34; // al
  bool v35; // zf
  __int64 v36; // rdx
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  __int64 v39; // rtt
  unsigned __int32 v40; // r14d
  void *v42; // rcx
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  __int64 v45; // rtt
  __int64 *v46; // rdi
  struct _KTHREAD *v47; // rax
  signed __int64 *v48; // rbx
  __int64 *v49; // rax
  __int64 *v50; // r15
  __int64 **v51; // rax
  signed __int64 v52; // rax
  signed __int64 v53; // rdx
  __int64 v54; // rtt
  unsigned int v55; // r10d
  struct _LIST_ENTRY *v56; // r12
  char v57; // di
  __int64 (__fastcall *v58)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // rax
  int v59; // eax
  struct _KTHREAD *v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // r13
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
  _QWORD *v73; // rcx
  signed __int64 v74; // rax
  signed __int64 v75; // rdx
  signed __int64 v76; // rtt
  struct _KTHREAD *v77; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v79; // rax
  char v80; // r8
  signed __int64 v81; // rcx
  char v82; // r8
  signed __int64 v83; // rax
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
  v88 = a2;
  memset(&ApcState, 0, 32);
  v92 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v89 = a4;
  v10 = ObTypeIndexTable[*(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v92];
  v11 = 1;
  if ( (a6 & 0x400) == 0 )
    v11 = a5;
  *(_OWORD *)&ApcState.Process = 0LL;
  CurrentThread = KeGetCurrentThread();
  v90 = v11;
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire(v8 + 16, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v13, v8 + 16);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  v15 = *(_BYTE *)(v8 + 27);
  v16 = 0LL;
  v17 = v15 & 1;
  v84 = v15 & 1;
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 )
    v18 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0xF];
  else
    v18 = 0LL;
  v91 = v18;
  if ( v17 )
  {
    *(_BYTE *)(v8 + 27) = v15 & 0xFE;
    if ( !v18 )
    {
      v79 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v92];
      v19 = *(_DWORD *)(v79 + 104);
      v20 = *(_DWORD *)(v79 + 108);
      goto LABEL_33;
    }
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)(v18 + 4);
    if ( !a7 )
    {
      v21 = *(_QWORD *)(v8 + 40);
      if ( !v21 || (v7 = v21 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
LABEL_33:
        v29 = v20;
        v30 = v19;
        if ( (PEPROCESS)a3 != PsInitialSystemProcess )
        {
          v31 = *(_QWORD *)(a3 + 760);
          if ( v30 && (int)PspChargeQuota(*(_QWORD *)(a3 + 760), 0LL, 1, (unsigned int)v30) < 0 )
          {
            *(_QWORD *)(v8 + 32) = 0LL;
          }
          else
          {
            if ( v29 && (int)PspChargeQuota(v31, 0LL, 0, v29) < 0 )
            {
              if ( v30 )
                PspReturnQuota((__int64 *)v31, 0LL, 1, v30);
              *(_QWORD *)(v8 + 32) = 0LL;
              goto LABEL_65;
            }
            _InterlockedIncrement((volatile signed __int32 *)(v31 + 512));
            *(_QWORD *)(v8 + 32) = v31;
            if ( v31 )
            {
              v16 = 0LL;
LABEL_39:
              v17 = v84;
              goto LABEL_40;
            }
          }
LABEL_65:
          if ( v91 )
          {
            v42 = *(void **)(v91 + 16);
            if ( v42 )
              PsReturnSharedPoolQuota(v42);
          }
          v33 = -1073741756;
          goto LABEL_69;
        }
        *(_QWORD *)(v8 + 32) = 1LL;
        goto LABEL_39;
      }
    }
    v22 = 0;
    v85 = 0;
    if ( *(_BYTE *)v7 != 1 )
    {
      v33 = -1073741736;
      goto LABEL_70;
    }
    v23 = *(_WORD *)(v7 + 2);
    if ( v23 >= 0 )
    {
      v25 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v24 = *(unsigned int *)(v7 + 8);
      if ( (_DWORD)v24 )
        v25 = v7 + v24;
      else
        v25 = 0LL;
    }
    if ( (v23 & 4) != 0 )
    {
      if ( v23 >= 0 )
      {
        v27 = *(_QWORD *)(v7 + 32);
      }
      else
      {
        v26 = *(unsigned int *)(v7 + 16);
        if ( (_DWORD)v26 )
          v27 = v7 + v26;
        else
          v27 = 0LL;
      }
    }
    else
    {
      v27 = 0LL;
    }
    if ( v25 )
    {
      v22 = (4 * *(unsigned __int8 *)(v25 + 1) + 11) & 0xFFFFFFFC;
      v85 = v22;
    }
    if ( v27 )
    {
      v22 += (*(unsigned __int16 *)(v27 + 2) + 3) & 0xFFFFFFFC;
      v85 = v22;
    }
    if ( !v22 )
    {
LABEL_32:
      *(_DWORD *)(v18 + 8) = v22;
      goto LABEL_33;
    }
    if ( (PEPROCESS)a3 != PsInitialSystemProcess )
    {
      v28 = *(_QWORD *)(a3 + 760);
      if ( (int)PspChargeQuota(v28, 0LL, 1, v22) < 0 )
      {
        v16 = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
      }
      else
      {
        v22 = v85;
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 512));
        *(_QWORD *)(v18 + 16) = v28;
        if ( v28 )
        {
LABEL_31:
          v16 = 0LL;
          goto LABEL_32;
        }
        v16 = 0LL;
      }
      v33 = -1073741756;
      goto LABEL_70;
    }
    *(_QWORD *)(v18 + 16) = 1LL;
    goto LABEL_31;
  }
LABEL_40:
  v32 = *(_BYTE *)(v8 + 27);
  v33 = 0;
  v34 = v32 & 8;
  if ( (a6 & 0x20) != 0 )
  {
    if ( v34 == 0 || (a6 & 2) != 0 )
    {
      v33 = -1073741811;
      goto LABEL_70;
    }
    v80 = v32 & 8;
    if ( v80 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_156;
    if ( *(_QWORD *)(v8 + 8) )
    {
LABEL_118:
      v33 = -1073741790;
      goto LABEL_70;
    }
    if ( v80 )
    {
LABEL_156:
      v81 = *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      if ( v81 )
      {
        v83 = v16;
        if ( v82 )
          v83 = v81;
        if ( v83 != a3 )
          goto LABEL_118;
      }
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = a3;
  }
  else if ( v34 )
  {
    v73 = (*(_BYTE *)(v8 + 26) & 0x10) != 0 ? (_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) : 0LL;
    if ( *v73 )
      goto LABEL_118;
  }
  if ( (_BYTE)v90 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_70;
  }
  if ( !*(_QWORD *)(v8 + 8)
    && !v17
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128) )
  {
    v33 = -1073741823;
    goto LABEL_70;
  }
  v35 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v86 = v16;
  if ( !v35 )
  {
    v33 = ObpLockHandleDataBaseEntry(v8, a3, &v86);
    if ( v33 < 0 )
    {
LABEL_69:
      v16 = 0LL;
LABEL_70:
      _m_prefetchw((const void *)(v8 + 16));
      v43 = *(_QWORD *)(v8 + 16);
      v44 = v43 - 16;
      if ( (v43 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v44 = v16;
      if ( (v43 & 2) != 0
        || (v45 = *(_QWORD *)(v8 + 16),
            v45 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v44, v43)) )
      {
        ExfReleasePushLock((_QWORD *)(v8 + 16));
      }
      KeAbPostRelease(v8 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)v33;
    }
    v16 = 0LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_48;
  _m_prefetchw((const void *)(v8 + 16));
  v52 = *(_QWORD *)(v8 + 16);
  v53 = v52 - 16;
  if ( (v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v53 = v16;
  if ( (v52 & 2) != 0
    || (v54 = *(_QWORD *)(v8 + 16), v54 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v53, v52)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 16));
  }
  KeAbPostRelease(v8 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v55 = v87;
  v56 = 0LL;
  v57 = 0;
  if ( (_KPROCESS *)a3 != KeGetCurrentThread()->ApcState.Process && v87 != 3 )
  {
    v57 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(a3);
    v56 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess((PRKPROCESS)a3, &ApcState);
    v55 = v87;
  }
  v58 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))(v10 + 120);
  if ( v58 == PspProcessOpen )
  {
    v59 = PspProcessOpen(v55, a5, a3, v89, v88);
  }
  else if ( (char *)v58 == (char *)MiSectionOpen )
  {
    v59 = MiSectionOpen(v55, a5, a3, v89, v88, v86);
  }
  else if ( v58 == PspThreadOpen )
  {
    v59 = PspThreadOpen(v55, a5, a3, v89, v88);
  }
  else
  {
    v59 = guard_dispatch_icall_no_overrides(v55);
  }
  v33 = v59;
  if ( v57 )
  {
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    PsDetachSiloFromCurrentThread(v56);
  }
  v60 = KeGetCurrentThread();
  --v60->KernelApcDisable;
  v61 = KeAbPreAcquire(v8 + 16, 0LL);
  v62 = v61;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v61, v8 + 16);
  if ( v62 )
    *((_BYTE *)v62 + 10) = 1;
  if ( v33 < 0 )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObpDeleteNameCheck(v8);
  }
  else
  {
LABEL_48:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v36 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v36 + 11);
        *(_DWORD *)(v36 + 8) = (*(_DWORD *)(v36 + 8) + 1) & 0xFFFFFF | _byteswap_ulong(HIBYTE(*(_DWORD *)(v36 + 8)));
      }
      else
      {
        v66 = *(int **)v36;
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
    v37 = *(_QWORD *)(v8 + 16);
    v38 = v37 - 16;
    if ( (v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v38 = 0LL;
    if ( (v37 & 2) != 0
      || (v39 = *(_QWORD *)(v8 + 16),
          v39 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v38, v37)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 16));
    }
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v87 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v46 = (__int64 *)(v8 - 32);
      if ( v8 != 32 )
      {
        v47 = KeGetCurrentThread();
        v48 = (signed __int64 *)(v10 + 184);
        --v47->SpecialApcDisable;
        v49 = KeAbPreAcquire(v10 + 184, 0LL);
        v50 = v49;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 184), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), v49, v10 + 184);
        if ( v50 )
          *((_BYTE *)v50 + 10) = 1;
        v51 = *(__int64 ***)(v10 + 8);
        if ( *v51 != (__int64 *)v10 )
          __fastfail(3u);
        *v46 = v10;
        v46[1] = (__int64)v51;
        *v51 = v46;
        *(_QWORD *)(v10 + 8) = v46;
        _m_prefetchw(v48);
        v74 = *v48;
        v75 = *v48 - 16;
        if ( (*v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v75 = 0LL;
        if ( (v74 & 2) != 0 || (v76 = *v48, v76 != _InterlockedCompareExchange64(v48, v75, v74)) )
          ExfReleasePushLock((_QWORD *)(v10 + 184));
        KeAbPostRelease(v10 + 184);
        v77 = KeGetCurrentThread();
        v35 = v77->SpecialApcDisable++ == -1;
        if ( v35 && ($727077A9B6E167EAE1398C74674DC5A5 *)v77->ApcState.ApcListHead[0].Flink != &v77->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v40 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    if ( v40 > *(_DWORD *)(v10 + 56) )
      *(_DWORD *)(v10 + 56) = v40;
  }
  return (unsigned int)v33;
}
