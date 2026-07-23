/*
 * XREFs of ObShutdownSystem @ 0x140741200
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObCleanupSiloState @ 0x140740DC8 (ObCleanupSiloState.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObpDeleteSymbolicLinkName @ 0x14083EADC (ObpDeleteSymbolicLinkName.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140C2E7A4 (ObpShutdownTraceLoggingProvider.c)
 */

LONG_PTR __fastcall ObShutdownSystem(PVOID *a1, char *a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  void *v7; // rcx
  __int64 v8; // rax
  volatile __int64 *ServerSiloGlobals; // rax
  char *v11; // rbx
  __int64 v12; // r8
  unsigned __int64 *v13; // r15
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  char *v17; // r10
  char *v18; // rdi
  unsigned __int64 *v19; // r13
  struct _OBJECT_TYPE *v20; // rax
  char v21; // cl
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v23; // r14
  char *v24; // rax
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  char *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-58h]
  struct _OBJECT_TYPE *v30; // [rsp+50h] [rbp-28h]
  char *v31; // [rsp+58h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  int v33; // [rsp+C0h] [rbp+48h]
  unsigned int v34; // [rsp+C8h] [rbp+50h]
  PVOID Object; // [rsp+D0h] [rbp+58h] BYREF
  char *v36; // [rsp+D8h] [rbp+60h]

  v4 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      LODWORD(Object) = 0;
      return ExEnumHandleTable(PsInitialSystemProcess[1].KernelTime, ObpShutdownCloseHandleProcedure, &Object, 0LL);
    }
    else
    {
      v5 = ObpTypeObjectType;
      Object = 0LL;
      DestinationString = 0LL;
      v6 = *(_QWORD **)ObpTypeObjectType;
      while ( v6 != v5 )
      {
        v7 = v6 + 10;
        v6 = (_QWORD *)*v6;
        Object = v7;
        ObMakeTemporaryObject(v7);
      }
      RtlInitUnicodeString(&DestinationString, L"DosDevices");
      if ( (int)ObReferenceObjectByName(
                  (unsigned int)&DestinationString,
                  64,
                  0,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  (__int64)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"Global");
      if ( (int)ObReferenceObjectByName(
                  (unsigned int)&DestinationString,
                  64,
                  0,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  (__int64)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
      if ( (int)ObReferenceObjectByName(
                  (unsigned int)&DestinationString,
                  64,
                  0,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  (__int64)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      v8 = PdcCreateWatchdogAroundClientCall();
      ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(v8);
      ObCleanupSiloState(ServerSiloGlobals);
      ObfDereferenceObject(ObpRootDirectoryObject);
      ObfDereferenceObject(ObpDirectoryObjectType);
      ObfDereferenceObject(ObpSymbolicLinkObjectType);
      ObfDereferenceObject(ObpTypeDirectoryObject);
      return ObfDereferenceObject(ObpTypeObjectType);
    }
  }
  else
  {
    v11 = (char *)ObpRootDirectoryObject;
    v12 = 1LL;
    v33 = 1;
    v13 = 0LL;
    v14 = 1;
    v15 = 1;
    if ( ObpRootDirectoryObject )
    {
LABEL_15:
      while ( 2 )
      {
        v16 = 0;
LABEL_16:
        v34 = v16;
        if ( v16 < 0x25 )
        {
          v17 = &v11[8 * v16];
          v36 = v17;
          v18 = v17;
          while ( 1 )
          {
            while ( 1 )
            {
              a2 = *(char **)v18;
              a4 = v13;
              if ( !*(_QWORD *)v18 )
              {
                v16 = v34 + 1;
                goto LABEL_16;
              }
              v19 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
              v20 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v19
                                                                                              - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v19 - 48) >> 8)];
              v21 = *((_BYTE *)v19 - 22);
              v30 = v20;
              if ( (v21 & 2) != 0 )
              {
                v4 = (__int64)v19 - ObpInfoMaskToOffset[v21 & 3] - 48;
                v20 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v19
                                                                                                - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v19 - 48) >> 8)];
              }
              if ( !v13 )
                break;
              v4 = 0LL;
              if ( v19 == v13 && (v13 = 0LL, v15 > v14) )
              {
                v18 = v17;
                v33 = v14;
                v15 = v14;
              }
              else
              {
                v13 = 0LL;
                v18 = *(char **)v18;
                if ( v19 != a4 )
                  v13 = a4;
              }
            }
            if ( v20 == ObpTypeObjectType )
            {
              v18 = *(char **)v18;
            }
            else
            {
              if ( v20 == ObpDirectoryObjectType )
              {
                ++v14;
                v11 = (char *)*((_QWORD *)a2 + 1);
                v4 = 0LL;
                goto LABEL_15;
              }
              CurrentThread = KeGetCurrentThread();
              v23 = (signed __int64 *)(v19 - 4);
              --CurrentThread->KernelApcDisable;
              v24 = (char *)KeAbPreAcquire((__int64)(v19 - 4), 0LL);
              v31 = v24;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v19 - 8, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v19 - 4, v24, (__int64)(v19 - 4));
                v24 = v31;
              }
              if ( v24 )
                v24[10] = 1;
              *((_BYTE *)v19 - 21) &= ~0x10u;
              _m_prefetchw(v23);
              v25 = *v23;
              v26 = *v23 - 16;
              if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v26 = 0LL;
              if ( (v25 & 2) != 0 || (v27 = *v23, v27 != _InterlockedCompareExchange64(v23, v26, v25)) )
                ExfReleasePushLock(v19 - 4);
              KeAbPostRelease((ULONG_PTR)(v19 - 4));
              KeLeaveCriticalRegion();
              v28 = *(char **)v18;
              if ( *(v19 - 5) )
              {
                v15 = v33;
                v18 = *(char **)v18;
              }
              else
              {
                *(_QWORD *)v18 = *(_QWORD *)v28;
                ExFreePoolWithTag(v28, 0);
                if ( (v30->TypeInfo.ObjectTypeFlags & 8) == 0 )
                {
                  v29 = 0LL;
                  guard_dispatch_icall_no_overrides(v19, 2LL);
                }
                if ( v30 == ObpSymbolicLinkObjectType )
                {
                  v33 = v14;
                  v15 = v14;
                  ObpDeleteSymbolicLinkName(v19);
                  v18 = v36;
                }
                else
                {
                  v15 = v33;
                }
                ExFreePoolWithTag(*(PVOID *)(v4 + 16), 0);
                *(_QWORD *)(v4 + 16) = 0LL;
                *(_DWORD *)(v4 + 8) = 0;
                *(_QWORD *)v4 = 0LL;
                ObfDereferenceObject(v19);
                ObfDereferenceObject(v11);
              }
              v17 = v36;
            }
            v4 = 0LL;
          }
        }
        --v14;
        if ( (*(v11 - 22) & 2) != 0 )
          a1 = (PVOID *)&v11[-ObpInfoMaskToOffset[*(v11 - 22) & 3] - 48];
        else
          a1 = 0LL;
        v13 = (unsigned __int64 *)v11;
        v11 = (char *)*a1;
        if ( *a1 )
          continue;
        break;
      }
    }
    return ObpShutdownTraceLoggingProvider(a1, a2, v12, a4, v29);
  }
}
