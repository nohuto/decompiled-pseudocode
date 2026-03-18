/*
 * XREFs of ObpDecrementHandleCount @ 0x140844E00
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x1408AD954 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 *     ObReleaseDuplicateInfo @ 0x140A0BBB8 (ObReleaseDuplicateInfo.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140845A08 (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1408462DC (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryName @ 0x140A087E8 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDecrementHandleCount(PRKPROCESS PROCESS, __int64 a2)
{
  struct _LIST_ENTRY *v2; // r15
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  signed __int64 v8; // rsi
  char v9; // r14
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 (__fastcall *v11)(); // rax
  __int64 v12; // rax
  __int64 *v13; // rsi
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // rbp
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v22; // rax
  __int64 *v23; // r15
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  int v33; // ecx
  struct _KTHREAD *v34; // rax
  __int64 *v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // rsi
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  __int64 v40; // rtt
  char *v41; // rbp
  PVOID v42; // rdi
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  __int64 v45; // rtt
  struct _KTHREAD *v46; // rax
  __int64 *v47; // rax
  __int64 *v48; // r13
  struct _KTHREAD *v49; // rax
  __int64 *v50; // rax
  __int64 *v51; // r15
  signed __int64 v52; // rax
  signed __int64 v53; // rdx
  __int64 v54; // rtt
  PVOID Object[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v56; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v2 = 0LL;
  v5 = 0;
  v6 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = ObTypeIndexTable[v6];
  if ( (*(_BYTE *)(v7 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v22 = KeAbPreAcquire(a2 + 16, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v22, a2 + 16);
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    v8 = *(_QWORD *)(a2 + 8);
    if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) || (*(_BYTE *)(a2 + 27) & 8) == 0 )
    {
      v2 = 0LL;
    }
    else
    {
      v2 = 0LL;
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v7 + 66) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
        v24 = a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 7];
      else
        v24 = 0LL;
      if ( (*(_BYTE *)(a2 + 27) & 0x40) != 0 )
      {
        v25 = *(_DWORD *)(v24 + 8);
        v5 = v25 & 0xFFFFFF;
        v26 = v25 ^ (v25 ^ (v25 - 1)) & 0xFFFFFF;
LABEL_45:
        *(_DWORD *)(v24 + 8) = v26;
      }
      else
      {
        v33 = **(_DWORD **)v24;
        v24 = *(_QWORD *)v24 + 8LL;
        while ( v33 )
        {
          if ( (*(_DWORD *)(v24 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v24 == PROCESS )
          {
            v5 = *(_DWORD *)(v24 + 8) & 0xFFFFFF;
            v26 = *(_DWORD *)(v24 + 8) ^ (*(_DWORD *)(v24 + 8) ^ (*(_DWORD *)(v24 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_45;
          }
          v24 += 16LL;
          --v33;
        }
      }
      if ( !*(_BYTE *)(v24 + 11) && (*(_DWORD *)(v24 + 8) & 0xFFFFFF) == 0 )
        *(_QWORD *)v24 = 0LL;
    }
    _m_prefetchw((const void *)(a2 + 16));
    v27 = *(_QWORD *)(a2 + 16);
    v28 = v27 - 16;
    if ( (v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v28 = 0LL;
    if ( (v27 & 2) != 0
      || (v29 = *(_QWORD *)(a2 + 16),
          v29 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v28, v27)) )
    {
      ExfReleasePushLock((_QWORD *)(a2 + 16));
    }
    KeAbPostRelease(a2 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v7 + 128) )
  {
    v9 = 0;
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      v9 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
      v2 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(PROCESS, &ApcState);
    }
    v11 = *(__int64 (__fastcall **)())(v7 + 128);
    if ( (char *)v11 == (char *)CmpCloseKeyObject )
    {
      CmpCloseKeyObject(PROCESS, a2 + 48, v5, v8);
    }
    else if ( v11 == EtwpCloseRegistrationObject )
    {
      if ( v8 == 1 )
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
    else if ( (char *)v11 == (char *)IopCloseFile )
    {
      IopCloseFile(PROCESS, a2 + 48, v5);
    }
    else
    {
      guard_dispatch_icall_no_overrides(PROCESS);
    }
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
      PsDetachSiloFromCurrentThread(v2);
    }
  }
  if ( v8 == 1 && (*(_BYTE *)(a2 + 26) & 2) != 0 )
  {
    v12 = ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 3];
    v13 = (__int64 *)(a2 - v12);
    if ( a2 != v12 )
    {
      while ( 1 )
      {
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = KeAbPreAcquire(a2 + 16, 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v15, a2 + 16);
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        v17 = *v13;
        if ( !*v13 )
        {
          _m_prefetchw((const void *)(a2 + 16));
          v30 = *(_QWORD *)(a2 + 16);
          v31 = v30 - 16;
          if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v31 = 0LL;
          if ( (v30 & 2) == 0 )
          {
            v32 = *(_QWORD *)(a2 + 16);
            if ( v32 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v31, v30) )
              goto LABEL_32;
          }
LABEL_62:
          ExfReleasePushLock((_QWORD *)(a2 + 16));
LABEL_32:
          KeAbPostRelease(a2 + 16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( (*(_BYTE *)(a2 + 27) & 0x10) != 0 || *(_QWORD *)(a2 + 8) )
        {
          _m_prefetchw((const void *)(a2 + 16));
          v18 = *(_QWORD *)(a2 + 16);
          v19 = v18 - 16;
          if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v19 = 0LL;
          if ( (v18 & 2) == 0 )
          {
            v20 = *(_QWORD *)(a2 + 16);
            if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v19, v18) )
              goto LABEL_32;
          }
          goto LABEL_62;
        }
        v56 = 0x10000000000LL;
        v34 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v17;
        --v34->KernelApcDisable;
        v35 = KeAbPreAcquire(v17 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 296), 0LL) )
          break;
        if ( v35 )
          KeAbPostReleaseEx(v17 + 296, (ULONG_PTR)v35);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PsReferenceSiloContext((void *)v17);
        _m_prefetchw((const void *)(a2 + 16));
        v43 = *(_QWORD *)(a2 + 16);
        v44 = v43 - 16;
        if ( (v43 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v44 = 0LL;
        if ( (v43 & 2) != 0
          || (v45 = *(_QWORD *)(a2 + 16),
              v45 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v44, v43)) )
        {
          ExfReleasePushLock((_QWORD *)(a2 + 16));
        }
        KeAbPostRelease(a2 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v46 = KeGetCurrentThread();
        --v46->KernelApcDisable;
        v47 = KeAbPreAcquire(v17 + 296, 0LL);
        v48 = v47;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 296), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 296), v47, v17 + 296);
        if ( v48 )
          *((_BYTE *)v48 + 10) = 1;
        v49 = KeGetCurrentThread();
        --v49->KernelApcDisable;
        v50 = KeAbPreAcquire(a2 + 16, 0LL);
        v51 = v50;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v50, a2 + 16);
        if ( v51 )
          *((_BYTE *)v51 + 10) = 1;
        if ( *v13 == v17 && (*(_BYTE *)(a2 + 27) & 0x10) == 0 && !*(_QWORD *)(a2 + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v17);
          goto LABEL_74;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(a2 + 16));
        v52 = *(_QWORD *)(a2 + 16);
        v53 = v52 - 16;
        if ( (v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v53 = 0LL;
        if ( (v52 & 2) != 0
          || (v54 = *(_QWORD *)(a2 + 16),
              v54 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v53, v52)) )
        {
          ExfReleasePushLock((_QWORD *)(a2 + 16));
        }
        KeAbPostRelease(a2 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      }
      if ( v35 )
        *((_BYTE *)v35 + 10) = 1;
LABEL_74:
      if ( *((_DWORD *)v13 + 6) )
      {
        v37 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a2 + 48);
        ObpLookupDirectoryEntry(v13 + 1, 0LL, Object);
        v36 = Object[1];
        v37 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v36 = *v37;
        *v37 = 0LL;
      }
      _m_prefetchw((const void *)(a2 + 16));
      v38 = *(_QWORD *)(a2 + 16);
      v39 = v38 - 16;
      if ( (v38 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v39 = 0LL;
      if ( (v38 & 2) != 0
        || (v40 = *(_QWORD *)(a2 + 16),
            v40 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v39, v38)) )
      {
        ExfReleasePushLock((_QWORD *)(a2 + 16));
      }
      KeAbPostRelease(a2 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v37 )
      {
        v41 = (char *)v37[1];
        v42 = Object[0];
        ObpUnlockDirectory(Object);
        ExFreePoolWithTag(v37, 0);
        ObfDereferenceObjectWithTag(v42, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v41 - 24) ^ ((unsigned __int16)((_WORD)v41 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v41);
          ObpReleaseLookupContext((__int64)Object);
          goto LABEL_20;
        }
        ObfDereferenceObjectWithTag(v41, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
LABEL_20:
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 48));
}
