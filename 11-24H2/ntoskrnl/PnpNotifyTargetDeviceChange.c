/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x1409EC4E0
 * Callers:
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x140738044 (PiSendTargetDeviceRemoveCanceledNotification.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1409BC804 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpProcessCustomDeviceEvent @ 0x1409EC484 (PnpProcessCustomDeviceEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140AA2660 (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     IopGetSessionIdFromPDO @ 0x1409BFB14 (IopGetSessionIdFromPDO.c)
 *     PnpDereferenceNotify @ 0x1409EC754 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x1409EC7F0 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  char v10; // r13
  _QWORD *v11; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v15; // rdx
  int v16; // ebx
  int v17; // eax
  GUID v19; // xmm0
  void *v20; // r15
  _QWORD *v21; // r13
  int v22; // ebx
  void *v23; // r12
  unsigned __int64 v24; // rax
  struct _KTHREAD *v25; // rax
  int v26; // [rsp+20h] [rbp-49h] BYREF
  int v27; // [rsp+24h] [rbp-45h]
  PVOID Objecta; // [rsp+28h] [rbp-41h]
  _QWORD *v29; // [rsp+30h] [rbp-39h]
  PVOID P; // [rsp+38h] [rbp-31h]
  _QWORD *v31; // [rsp+40h] [rbp-29h]
  __int64 v32; // [rsp+48h] [rbp-21h]
  _OWORD v33[2]; // [rsp+50h] [rbp-19h] BYREF

  v27 = -1;
  Objecta = Object;
  v31 = a4;
  v6 = 0;
  v26 = 0;
  memset(v33, 0, sizeof(v33));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  v32 = v8;
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v19 = *Source1;
    LODWORD(v33[0]) = 2097153;
    *(GUID *)((char *)v33 + 4) = v19;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v11 = *(_QWORD **)(v8 + 480);
    v9 = (_QWORD *)(v8 + 472);
    v10 = 1;
  }
  else
  {
    v9 = (_QWORD *)(v8 + 472);
    v10 = 0;
    v11 = *(_QWORD **)(v8 + 472);
  }
  v29 = v9;
  while ( v11 != v9 )
  {
    P = v11;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v11 + 5) == (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
    {
      SessionIdFromPDO = v27;
    }
    else
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO((struct _DEVICE_OBJECT *)Objecta);
      v27 = SessionIdFromPDO;
    }
    ++*((_WORD *)v11 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v11[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v11 + 5) == SessionIdFromPDO) && !*((_BYTE *)v11 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v11[10];
        v15 = (_OWORD *)a3;
      }
      else
      {
        *((_QWORD *)&v33[1] + 1) = v11[10];
        v15 = v33;
      }
      v16 = PnpNotifyDriverCallback(v11, v15, &v26);
      ExReleaseResourceLite((PERESOURCE)v11[9]);
      KeLeaveCriticalRegion();
      v17 = v26;
      if ( v16 < 0 )
        v17 = 0;
      v26 = v17;
      if ( v17 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v31 )
          *v31 = v11[6];
        v20 = v11;
        *(GUID *)((char *)v33 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        v21 = (_QWORD *)(v32 + 472);
        do
        {
          v22 = -1;
          v23 = v11;
          v24 = PsGetCurrentServerSilo();
          if ( *((_DWORD *)v11 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v24) )
            v22 = IopGetSessionIdFromPDO((struct _DEVICE_OBJECT *)Objecta);
          ++*((_WORD *)v11 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v25 = KeGetCurrentThread();
          --v25->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v11[9], 1u);
          if ( (v22 == -1 || *((_DWORD *)v11 + 5) == v22) && !*((_BYTE *)v11 + 58) )
          {
            *((_QWORD *)&v33[1] + 1) = v11[10];
            PnpNotifyDriverCallback(v11, v33, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v11[9]);
          KeLeaveCriticalRegion();
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v11 = (_QWORD *)v11[1];
          PnpDereferenceNotify(v23);
          if ( v23 == v20 )
            PnpDereferenceNotify(v20);
        }
        while ( v11 != v21 );
        v6 = v26;
        break;
      }
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v11[9]);
      KeLeaveCriticalRegion();
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v10 )
      v11 = (_QWORD *)v11[1];
    else
      v11 = (_QWORD *)*v11;
    PnpDereferenceNotify(P);
    v9 = v29;
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Objecta, 0x4E706E50u);
  return v6;
}
