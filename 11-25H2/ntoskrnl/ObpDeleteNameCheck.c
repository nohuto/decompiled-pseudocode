/*
 * XREFs of ObpDeleteNameCheck @ 0x14085AF80
 * Callers:
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1408462DC (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryName @ 0x140A087E8 (ObpDeleteDirectoryName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int16 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rbp
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  __int64 v10; // rtt
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rtt
  char *v21; // rsi
  PVOID v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rtt
  struct _KTHREAD *v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // r15
  struct _KTHREAD *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // r14
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  __int64 v34; // rtt
  PVOID Object[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v36; // [rsp+30h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v3 = (unsigned __int16 *)(a1 - v2);
    if ( a1 != v2 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v5 = KeAbPreAcquire(a1 + 16, 0LL);
        v6 = v5;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v5, a1 + 16);
        if ( v6 )
          *((_BYTE *)v6 + 10) = 1;
        v7 = *(_QWORD *)v3;
        if ( !*(_QWORD *)v3 )
        {
          _m_prefetchw((const void *)(a1 + 16));
          v11 = *(_QWORD *)(a1 + 16);
          v12 = v11 - 16;
          if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v12 = 0LL;
          if ( (v11 & 2) == 0 )
          {
            v13 = *(_QWORD *)(a1 + 16);
            if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v12, v11) )
              goto LABEL_15;
          }
LABEL_21:
          ExfReleasePushLock((_QWORD *)(a1 + 16));
LABEL_15:
          KeAbPostRelease(a1 + 16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return;
        }
        if ( (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
        {
          _m_prefetchw((const void *)(a1 + 16));
          v8 = *(_QWORD *)(a1 + 16);
          v9 = v8 - 16;
          if ( (v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v9 = 0LL;
          if ( (v8 & 2) == 0 )
          {
            v10 = *(_QWORD *)(a1 + 16);
            if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v8) )
              goto LABEL_15;
          }
          goto LABEL_21;
        }
        v36 = 0x10000000000LL;
        v14 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = (PVOID)v7;
        --v14->KernelApcDisable;
        v15 = KeAbPreAcquire(v7 + 296, 0LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 296), 0LL) )
          break;
        if ( v15 )
          KeAbPostReleaseEx(v7 + 296, (ULONG_PTR)v15);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PsReferenceSiloContext((void *)v7);
        _m_prefetchw((const void *)(a1 + 16));
        v23 = *(_QWORD *)(a1 + 16);
        v24 = v23 - 16;
        if ( (v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v24 = 0LL;
        if ( (v23 & 2) != 0
          || (v25 = *(_QWORD *)(a1 + 16),
              v25 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v24, v23)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        v27 = KeAbPreAcquire(v7 + 296, 0LL);
        v28 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 296), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 296), v27, v7 + 296);
        if ( v28 )
          *((_BYTE *)v28 + 10) = 1;
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = KeAbPreAcquire(a1 + 16, 0LL);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v30, a1 + 16);
        if ( v31 )
          *((_BYTE *)v31 + 10) = 1;
        if ( *(_QWORD *)v3 == v7 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v7);
          goto LABEL_25;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(a1 + 16));
        v32 = *(_QWORD *)(a1 + 16);
        v33 = v32 - 16;
        if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v33 = 0LL;
        if ( (v32 & 2) != 0
          || (v34 = *(_QWORD *)(a1 + 16),
              v34 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v33, v32)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        HalPutDmaAdapter((PADAPTER_OBJECT)v7);
      }
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
LABEL_25:
      if ( *((_DWORD *)v3 + 6) )
      {
        v17 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        ObpLookupDirectoryEntry(v3 + 4, 0, (__int64)Object);
        v16 = Object[1];
        v17 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v16 = *v17;
        *v17 = 0LL;
      }
      _m_prefetchw((const void *)(a1 + 16));
      v18 = *(_QWORD *)(a1 + 16);
      v19 = v18 - 16;
      if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0
        || (v20 = *(_QWORD *)(a1 + 16),
            v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v19, v18)) )
      {
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      }
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v17 )
      {
        v21 = (char *)v17[1];
        v22 = Object[0];
        ObpUnlockDirectory((__int64)Object);
        ExFreePoolWithTag(v17, 0);
        ObfDereferenceObjectWithTag(v22, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v21 - 24) ^ ((unsigned __int16)((_WORD)v21 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v21);
          ObpReleaseLookupContext((__int64)Object);
          return;
        }
        ObfDereferenceObjectWithTag(v21, 0x6944624Fu);
      }
      ObpReleaseLookupContext((__int64)Object);
    }
  }
}
