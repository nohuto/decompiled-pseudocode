/*
 * XREFs of EtwpRealtimeConnect @ 0x140A56DA8
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x140A57324 (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  PVOID v2; // r15
  PVOID v3; // r12
  volatile void *v4; // rdi
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _KPROCESS *Process; // rax
  __int16 v10; // ax
  char v11; // al
  SIZE_T v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // rdi
  int v15; // ebx
  void *v16; // rcx
  void *v17; // rcx
  _WORD *v18; // rbx
  _QWORD *v19; // rdx
  _KPROCESS *v20; // rax
  char v21; // dl
  struct _FILE_OBJECT *v22; // rcx
  int inserted; // r14d
  __int16 v25; // ax
  char v26; // al
  signed __int64 *v27; // rbx
  char *v28; // rax
  char *v29; // rsi
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  signed __int64 v32; // rtt
  bool v33; // zf
  PVOID *Object; // [rsp+20h] [rbp-108h]
  PVOID v35; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v36; // [rsp+58h] [rbp-D0h] BYREF
  PVOID v37; // [rsp+60h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v41; // [rsp+80h] [rbp-A8h]
  volatile void *v42; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+90h] [rbp-98h]
  struct _LIST_ENTRY *Flink; // [rsp+98h] [rbp-90h]
  volatile void *v45; // [rsp+A0h] [rbp-88h]
  __int64 v46; // [rsp+A8h] [rbp-80h] BYREF
  _DWORD v47[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-70h]
  __int64 v49; // [rsp+C0h] [rbp-68h]
  int v50; // [rsp+C8h] [rbp-60h]
  int v51; // [rsp+CCh] [rbp-5Ch]
  __int128 v52; // [rsp+D0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-48h]
  unsigned int v54; // [rsp+138h] [rbp+10h]
  unsigned int v55; // [rsp+140h] [rbp+18h]

  v46 = 0LL;
  v47[1] = 0;
  v51 = 0;
  v35 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v54 = *(_DWORD *)a1;
  Handle = 0LL;
  v45 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v55 = *(_DWORD *)(a1 + 4);
  v41 = *(_QWORD *)(a1 + 48);
  v4 = *(volatile void **)(a1 + 40);
  v42 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  v43 = v5;
  v40 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v45, (((v55 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v55, 4u);
  v6 = v41;
  if ( v41 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v5;
  if ( v5 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = v40;
  if ( v40 >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v8 = *(_DWORD *)v8;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( !Process[1].ReadyTime
    || ((v10 = WORD2(Process[3].PerProcessorCycleTimes), v10 == 332) || v10 == 452 ? (v11 = 1) : (v11 = 0),
        v12 = 4LL,
        !v11) )
  {
    v12 = 8LL;
  }
  ProbeForWrite(v4, v12, 4u);
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v13 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v54, 1u);
  v14 = (unsigned int *)v13;
  if ( !v13 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v13 + 12) & 0x100) != 0 )
  {
    v15 = EtwpCheckLoggerControlAccess(0x400u, v13);
    if ( v15 >= 0 )
    {
      v15 = EtwpOpenConsumer(&Handle);
      if ( v15 >= 0 )
      {
        v16 = *(void **)(a1 + 24);
        v36 = 0LL;
        v15 = ObReferenceObjectByHandle(v16, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v36, 0LL);
        v3 = v36;
        if ( v15 >= 0 )
        {
          v17 = *(void **)(a1 + 32);
          v37 = 0LL;
          v15 = ObReferenceObjectByHandle(v17, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v37, 0LL);
          v2 = v37;
          if ( v15 >= 0 )
          {
            v47[0] = 48;
            v48 = 0LL;
            v50 = 64;
            v49 = 0LL;
            v52 = 0LL;
            v15 = ObCreateObjectEx(
                    0,
                    EtwpRealTimeConnectionObjectType,
                    (int)v47,
                    1u,
                    (__int64)Object,
                    160,
                    0,
                    0,
                    &v35,
                    0LL);
            if ( v15 >= 0 )
            {
              v18 = v35;
              memset_0(v35, 0, 0xA0uLL);
              v18[44] = v54;
              *((_QWORD *)v18 + 2) = Handle;
              v19 = v35;
              *((_QWORD *)v35 + 3) = KeGetCurrentThread()->ApcState.Process;
              v19[6] = v36;
              v19[7] = v37;
              v19[8] = v41;
              v19[9] = v42;
              v19[14] = Address;
              *((_DWORD *)v19 + 30) = v55;
              v19[17] = v43;
              v19[18] = v40;
              v19[19] = Flink;
              *((_DWORD *)v19 + 24) = v55 >> 12;
              v19[13] = v45;
              v20 = KeGetCurrentThread()->ApcState.Process;
              if ( !v20[1].ReadyTime )
                goto LABEL_22;
              v25 = WORD2(v20[3].PerProcessorCycleTimes);
              if ( v25 == 332 || (v33 = v25 == 452, v26 = 0, v33) )
                v26 = 1;
              v21 = 16;
              if ( !v26 )
LABEL_22:
                v21 = 0;
              v22 = (struct _FILE_OBJECT *)v35;
              *((_BYTE *)v35 + 90) = v21 | *((_BYTE *)v35 + 90) & 0xEF;
              v22->SectionObjectPointer = (PSECTION_OBJECT_POINTERS)a1;
              inserted = ObInsertObjectEx(v22, 0LL, 1024, 1, 0, &v46, a1 + 72);
              if ( inserted >= 0 )
              {
                v27 = (signed __int64 *)(v14 + 172);
                v28 = (char *)KeAbPreAcquire((__int64)(v14 + 172), 0LL);
                v29 = v28;
                if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 172, 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14 + 86, v28, (__int64)(v14 + 172));
                if ( v29 )
                  v29[10] = 1;
                *((_QWORD *)v14 + 44) = v35;
                _m_prefetchw(v27);
                v30 = *v27;
                v31 = *v27 - 16;
                if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v31 = 0LL;
                if ( (v30 & 2) != 0 || (v32 = *v27, v32 != _InterlockedCompareExchange64(v27, v31, v30)) )
                  ExfReleasePushLock((_QWORD *)v14 + 86);
                KeAbPostRelease((ULONG_PTR)(v14 + 172));
                EtwpSynchronizeWithLogger((__int64)v14, 0x20u);
              }
              KeReleaseMutex((PRKMUTEX)(v14 + 158), 0);
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v14 + 170) + 704LL) + 8LL * *v14),
                1u);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = -1073741811;
  }
  KeReleaseMutex((PRKMUTEX)(v14 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v14 + 170) + 704LL) + 8LL * *v14),
    1u);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v15;
}
