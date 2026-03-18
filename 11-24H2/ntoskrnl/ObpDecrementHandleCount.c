/*
 * XREFs of ObpDecrementHandleCount @ 0x1408410A0
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140940288 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     ObReleaseDuplicateInfo @ 0x140A151E8 (ObReleaseDuplicateInfo.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     HalPutDmaAdapter @ 0x1404833B0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140841CCC (EtwpEventWriteTemplateSessAndProv.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     ObpUnlockDirectory @ 0x1408424A0 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x140842540 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x14084281C (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryName @ 0x1409E4BA0 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rbp
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rtt
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  int v34; // ecx
  struct _KTHREAD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rsi
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  __int64 v41; // rtt
  char *v42; // rbp
  PVOID v43; // rdi
  signed __int64 v44; // rax
  signed __int64 v45; // rdx
  __int64 v46; // rtt
  struct _KTHREAD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // r15
  struct _KTHREAD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // r15
  signed __int64 v53; // rax
  signed __int64 v54; // rdx
  __int64 v55; // rtt
  PVOID Object[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v57; // [rsp+40h] [rbp-78h]
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
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), (__int64)v22, a2 + 16);
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
        v34 = **(_DWORD **)v24;
        v24 = *(_QWORD *)v24 + 8LL;
        while ( v34 )
        {
          if ( (*(_DWORD *)(v24 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v24 == PROCESS )
          {
            v5 = *(_DWORD *)(v24 + 8) & 0xFFFFFF;
            v26 = *(_DWORD *)(v24 + 8) ^ (*(_DWORD *)(v24 + 8) ^ (*(_DWORD *)(v24 + 8) - 1)) & 0xFFFFFF;
            goto LABEL_45;
          }
          v24 += 16LL;
          --v34;
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
    KeLeaveCriticalRegionThread();
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
    else
    {
      v30 = a2 + 48;
      if ( (char *)v11 == (char *)IopCloseFile )
        IopCloseFile(PROCESS, v30, v5, v8);
      else
        guard_dispatch_icall_no_overrides(PROCESS, v30, v5, v8);
    }
    if ( v9 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0);
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
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), (__int64)v15, a2 + 16);
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        v17 = *v13;
        if ( !*v13 )
        {
          _m_prefetchw((const void *)(a2 + 16));
          v31 = *(_QWORD *)(a2 + 16);
          v32 = v31 - 16;
          if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v32 = 0LL;
          if ( (v31 & 2) == 0 )
          {
            v33 = *(_QWORD *)(a2 + 16);
            if ( v33 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v32, v31) )
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
        v57 = 0x10000000000LL;
        v35 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v17;
        --v35->KernelApcDisable;
        v36 = KeAbPreAcquire(v17 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 296), 0LL) )
          break;
        if ( v36 )
          KeAbPostReleaseEx(v17 + 296, (ULONG_PTR)v36);
        KeLeaveCriticalRegionThread();
        PsReferenceSiloContext((void *)v17);
        _m_prefetchw((const void *)(a2 + 16));
        v44 = *(_QWORD *)(a2 + 16);
        v45 = v44 - 16;
        if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v45 = 0LL;
        if ( (v44 & 2) != 0
          || (v46 = *(_QWORD *)(a2 + 16),
              v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v45, v44)) )
        {
          ExfReleasePushLock((_QWORD *)(a2 + 16));
        }
        KeAbPostRelease(a2 + 16);
        KeLeaveCriticalRegionThread();
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        v48 = KeAbPreAcquire(v17 + 296, 0LL);
        v49 = v48;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 296), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 296), (__int64)v48, v17 + 296);
        if ( v49 )
          *((_BYTE *)v49 + 10) = 1;
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        v51 = KeAbPreAcquire(a2 + 16, 0LL);
        v52 = v51;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), (__int64)v51, a2 + 16);
        if ( v52 )
          *((_BYTE *)v52 + 10) = 1;
        if ( *v13 == v17 && (*(_BYTE *)(a2 + 27) & 0x10) == 0 && !*(_QWORD *)(a2 + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v17);
          goto LABEL_74;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(a2 + 16));
        v53 = *(_QWORD *)(a2 + 16);
        v54 = v53 - 16;
        if ( (v53 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v54 = 0LL;
        if ( (v53 & 2) != 0
          || (v55 = *(_QWORD *)(a2 + 16),
              v55 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v54, v53)) )
        {
          ExfReleasePushLock((_QWORD *)(a2 + 16));
        }
        KeAbPostRelease(a2 + 16);
        KeLeaveCriticalRegionThread();
        HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      }
      if ( v36 )
        *((_BYTE *)v36 + 10) = 1;
LABEL_74:
      if ( *((_DWORD *)v13 + 6) )
      {
        v38 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a2 + 48);
        ObpLookupDirectoryEntry(v13 + 1, 0LL, Object);
        v37 = Object[1];
        v38 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v37 = *v38;
        *v38 = 0LL;
      }
      _m_prefetchw((const void *)(a2 + 16));
      v39 = *(_QWORD *)(a2 + 16);
      v40 = v39 - 16;
      if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v40 = 0LL;
      if ( (v39 & 2) != 0
        || (v41 = *(_QWORD *)(a2 + 16),
            v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v40, v39)) )
      {
        ExfReleasePushLock((_QWORD *)(a2 + 16));
      }
      KeAbPostRelease(a2 + 16);
      KeLeaveCriticalRegionThread();
      if ( v38 )
      {
        v42 = (char *)v38[1];
        v43 = Object[0];
        ObpUnlockDirectory(Object);
        ExFreePoolWithTag(v38, 0);
        ObfDereferenceObjectWithTag(v43, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v42 - 24) ^ ((unsigned __int16)((_WORD)v42 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v42);
          ObpReleaseLookupContext((__int64)Object);
          goto LABEL_14;
        }
        ObfDereferenceObjectWithTag(v42, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
LABEL_14:
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 48));
}
