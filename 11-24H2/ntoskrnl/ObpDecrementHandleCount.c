/*
 * XREFs of ObpDecrementHandleCount @ 0x14083D360
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     ObReleaseDuplicateInfo @ 0x140A0E008 (ObReleaseDuplicateInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14083DF8C (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     ObpUnlockDirectory @ 0x14083E760 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x14083EADC (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryName @ 0x1409DF600 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDecrementHandleCount(PRKPROCESS PROCESS, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *v4; // r15
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  signed __int64 v10; // rsi
  char v11; // r14
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 *v16; // rsi
  struct _KTHREAD *v17; // rax
  char *v18; // rax
  char *v19; // rbp
  __int64 v20; // rbp
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  struct _KTHREAD *CurrentThread; // rax
  char *v25; // rax
  char *v26; // r15
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // eax
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  __int64 v33; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rdx
  __int64 v36; // rtt
  int v37; // ecx
  struct _KTHREAD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rsi
  signed __int64 v42; // rax
  signed __int64 v43; // rdx
  __int64 v44; // rtt
  char *v45; // rbp
  PVOID v46; // rdi
  signed __int64 v47; // rax
  signed __int64 v48; // rdx
  __int64 v49; // rtt
  struct _KTHREAD *v50; // rax
  char *v51; // rax
  char *v52; // r15
  struct _KTHREAD *v53; // rax
  char *v54; // rax
  char *v55; // r15
  signed __int64 v56; // rax
  signed __int64 v57; // rdx
  __int64 v58; // rtt
  PVOID Object[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v60; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0LL;
  v7 = 0;
  v8 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = ObTypeIndexTable[v8];
  if ( (*(_BYTE *)(v9 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = (char *)KeAbPreAcquire(a2 + 16, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v25, a2 + 16);
    if ( v26 )
      v26[10] = 1;
    v10 = *(_QWORD *)(a2 + 8);
    if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) || (*(_BYTE *)(a2 + 27) & 8) == 0 )
    {
      v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v9 + 66) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
        v27 = a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 7];
      else
        v27 = 0LL;
      if ( (*(_BYTE *)(a2 + 27) & 0x40) != 0 )
      {
        v28 = *(_DWORD *)(v27 + 8);
        v7 = v28 & 0xFFFFFF;
        v29 = v28 ^ (v28 ^ (v28 - 1)) & 0xFFFFFF;
LABEL_45:
        *(_DWORD *)(v27 + 8) = v29;
      }
      else
      {
        v37 = **(_DWORD **)v27;
        v27 = *(_QWORD *)v27 + 8LL;
        while ( v37 )
        {
          if ( (*(_DWORD *)(v27 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v27 == PROCESS )
          {
            v7 = *(_DWORD *)(v27 + 8) & 0xFFFFFF;
            v29 = *(_DWORD *)(v27 + 8) ^ (*(_DWORD *)(v27 + 8) ^ (*(_DWORD *)(v27 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_45;
          }
          v27 += 16LL;
          --v37;
        }
      }
      if ( !*(_BYTE *)(v27 + 11) && (*(_DWORD *)(v27 + 8) & 0xFFFFFF) == 0 )
        *(_QWORD *)v27 = 0LL;
    }
    _m_prefetchw((const void *)(a2 + 16));
    v30 = *(_QWORD *)(a2 + 16);
    v31 = v30 - 16;
    if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (v30 & 2) != 0
      || (v32 = *(_QWORD *)(a2 + 16),
          v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v31, v30)) )
    {
      ExfReleasePushLock((_QWORD *)(a2 + 16));
    }
    KeAbPostRelease(a2 + 16);
    KeLeaveCriticalRegionThread();
  }
  else
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v9 + 128) )
  {
    v11 = 0;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v11 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v4 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
    }
    v13 = *(__int64 (__fastcall **)())(v9 + 128);
    v14 = v7;
    if ( (char *)v13 == (char *)CmpCloseKeyObject )
    {
      CmpCloseKeyObject(PROCESS, a2 + 48, v7, v10);
    }
    else if ( v13 == EtwpCloseRegistrationObject )
    {
      if ( v10 == 1 )
      {
        if ( (*(_BYTE *)(a2 + 146) & 2) != 0
          && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
        {
          EtwpEventWriteTemplateSessAndProv(
            EtwpEventTracingProvRegHandle,
            &ETW_EVENT_PROVIDER_UNREGISTERS,
            0LL,
            1LL,
            0LL,
            *(_QWORD *)(a2 + 80) + 40LL);
        }
        _InterlockedOr16((volatile signed __int16 *)(a2 + 146), 0x20u);
      }
    }
    else
    {
      v33 = a2 + 48;
      if ( (char *)v13 == (char *)IopCloseFile )
        IopCloseFile(PROCESS, v33, v7, v10);
      else
        guard_dispatch_icall_no_overrides(PROCESS, v33);
    }
    if ( v11 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0, v14, a4);
      PsDetachSiloFromCurrentThread(v4);
    }
  }
  if ( v10 == 1 && (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    v15 = ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 3];
    v16 = (__int64 *)(a2 - v15);
    if ( a2 != v15 )
    {
      while ( 1 )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = (char *)KeAbPreAcquire(a2 + 16, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v18, a2 + 16);
        if ( v19 )
          v19[10] = 1;
        v20 = *v16;
        if ( !*v16 )
        {
          _m_prefetchw((const void *)(a2 + 16));
          v34 = *(_QWORD *)(a2 + 16);
          v35 = v34 - 16;
          if ( (v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v35 = 0LL;
          if ( (v34 & 2) == 0 )
          {
            v36 = *(_QWORD *)(a2 + 16);
            if ( v36 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v35, v34) )
              goto LABEL_32;
          }
LABEL_62:
          ExfReleasePushLock((_QWORD *)(a2 + 16));
LABEL_32:
          KeAbPostRelease(a2 + 16);
          KeLeaveCriticalRegionThread();
          goto LABEL_14;
        }
        if ( (*(_BYTE *)(a2 + 27) & 0x10) != 0 || *(_QWORD *)(a2 + 8) )
        {
          _m_prefetchw((const void *)(a2 + 16));
          v21 = *(_QWORD *)(a2 + 16);
          v22 = v21 - 16;
          if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v22 = 0LL;
          if ( (v21 & 2) == 0 )
          {
            v23 = *(_QWORD *)(a2 + 16);
            if ( v23 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v22, v21) )
              goto LABEL_32;
          }
          goto LABEL_62;
        }
        v60 = 0x10000000000LL;
        v38 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v20;
        --v38->KernelApcDisable;
        v39 = KeAbPreAcquire(v20 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 296), 0LL) )
          break;
        if ( v39 )
          KeAbPostReleaseEx(v20 + 296, (ULONG_PTR)v39);
        KeLeaveCriticalRegionThread();
        PsReferenceSiloContext((void *)v20);
        _m_prefetchw((const void *)(a2 + 16));
        v47 = *(_QWORD *)(a2 + 16);
        v48 = v47 - 16;
        if ( (v47 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v48 = 0LL;
        if ( (v47 & 2) != 0
          || (v49 = *(_QWORD *)(a2 + 16),
              v49 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v48, v47)) )
        {
          ExfReleasePushLock((_QWORD *)(a2 + 16));
        }
        KeAbPostRelease(a2 + 16);
        KeLeaveCriticalRegionThread();
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        v51 = (char *)KeAbPreAcquire(v20 + 296, 0LL);
        v52 = v51;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 296), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 296), v51, v20 + 296);
        if ( v52 )
          v52[10] = 1;
        v53 = KeGetCurrentThread();
        --v53->KernelApcDisable;
        v54 = (char *)KeAbPreAcquire(a2 + 16, 0LL);
        v55 = v54;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v54, a2 + 16);
        if ( v55 )
          v55[10] = 1;
        if ( *v16 == v20 && (*(_BYTE *)(a2 + 27) & 0x10) == 0 && !*(_QWORD *)(a2 + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v20);
          goto LABEL_74;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(a2 + 16));
        v56 = *(_QWORD *)(a2 + 16);
        v57 = v56 - 16;
        if ( (v56 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v57 = 0LL;
        if ( (v56 & 2) != 0
          || (v58 = *(_QWORD *)(a2 + 16),
              v58 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v57, v56)) )
        {
          ExfReleasePushLock((_QWORD *)(a2 + 16));
        }
        KeAbPostRelease(a2 + 16);
        KeLeaveCriticalRegionThread();
        HalPutDmaAdapter((PADAPTER_OBJECT)v20);
      }
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
LABEL_74:
      if ( *((_DWORD *)v16 + 6) )
      {
        v41 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a2 + 48);
        ObpLookupDirectoryEntry(v16 + 1, 0LL, Object);
        v40 = Object[1];
        v41 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v40 = *v41;
        *v41 = 0LL;
      }
      _m_prefetchw((const void *)(a2 + 16));
      v42 = *(_QWORD *)(a2 + 16);
      v43 = v42 - 16;
      if ( (v42 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v43 = 0LL;
      if ( (v42 & 2) != 0
        || (v44 = *(_QWORD *)(a2 + 16),
            v44 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v43, v42)) )
      {
        ExfReleasePushLock((_QWORD *)(a2 + 16));
      }
      KeAbPostRelease(a2 + 16);
      KeLeaveCriticalRegionThread();
      if ( v41 )
      {
        v45 = (char *)v41[1];
        v46 = Object[0];
        ObpUnlockDirectory(Object);
        ExFreePoolWithTag(v41, 0);
        ObfDereferenceObjectWithTag(v46, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v45 - 24) ^ ((unsigned __int16)((_WORD)v45 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v45);
          ObpReleaseLookupContext((__int64)Object);
          goto LABEL_14;
        }
        ObfDereferenceObjectWithTag(v45, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
LABEL_14:
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 48));
}
