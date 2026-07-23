/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF120 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x1408CFBE0 (PiCMMandatoryFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x140A56A20 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiAuVerifyAccessToObject @ 0x1409DCD30 (PiAuVerifyAccessToObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(
        _QWORD *a1,
        unsigned __int16 *a2,
        void *a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
{
  PACCESS_TOKEN ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r14d
  int v11; // ebx
  unsigned int v12; // eax
  ULONG_PTR v13; // r14
  void *Pool2; // rdi
  unsigned __int16 *v15; // r13
  _QWORD *v16; // rbx
  __int64 (__fastcall *v17)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // r12
  int v18; // eax
  int v19; // r14d
  _QWORD *SessionById; // rax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // rdi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int ObjectPropertyWorker; // eax
  int v28; // eax
  int v29; // [rsp+60h] [rbp-81h] BYREF
  int v30; // [rsp+64h] [rbp-7Dh] BYREF
  PVOID v31; // [rsp+68h] [rbp-79h] BYREF
  __int64 v32; // [rsp+70h] [rbp-71h] BYREF
  __int64 v33; // [rsp+78h] [rbp-69h]
  HANDLE v34; // [rsp+80h] [rbp-61h]
  const WCHAR *v35; // [rsp+88h] [rbp-59h]
  const DEVPROPKEY *v36; // [rsp+90h] [rbp-51h]
  int *v37; // [rsp+98h] [rbp-49h]
  int *v38; // [rsp+A0h] [rbp-41h]
  __int64 v39; // [rsp+A8h] [rbp-39h]
  ULONG *v40; // [rsp+B0h] [rbp-31h]
  __int64 v41; // [rsp+B8h] [rbp-29h]
  void *v42; // [rsp+C0h] [rbp-21h]
  GENERIC_MAPPING GenericMapping; // [rsp+D0h] [rbp-11h] BYREF

  v42 = a3;
  v30 = 0;
  LODWORD(v31) = 0;
  *a5 = 0;
  ClientToken = a4->ClientToken;
  v29 = 0;
  if ( !ClientToken )
    ClientToken = a4->PrimaryToken;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
  v10 = *((_DWORD *)ClientToken + 30);
  ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
  KeLeaveCriticalRegionThread();
  if ( !v10 )
  {
    v11 = 0;
LABEL_5:
    *a5 = 1;
    goto LABEL_6;
  }
  SessionById = (_QWORD *)PsGetSessionById(v10);
  if ( SessionById )
  {
    v22 = *(_QWORD *)(SessionById[93] + 160LL);
    ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
    v11 = 0;
    if ( v10 == (unsigned int)PsGetServerSiloServiceSessionId(v22) )
      goto LABEL_5;
  }
  v34 = v42;
  v36 = &DEVPKEY_Device_SessionId;
  v37 = &v29;
  v32 = 0LL;
  v33 = 0LL;
  v23 = (__int64 (__fastcall *)(PVOID, unsigned __int16 *, __int64, int, int, __int64))a1[61];
  v38 = &v30;
  v40 = (ULONG *)&v31;
  v39 = 4LL;
  v41 = 0LL;
  v35 = 0LL;
  if ( v23 )
  {
    if ( v23 == PiPnpRtlObjectActionCallback )
      v24 = PiPnpRtlObjectActionCallback(a1, a2, 1LL, 8, 1, (__int64)&v32);
    else
      v24 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v24 == -1073741822 )
    {
      v23 = 0LL;
    }
    else
    {
      if ( v24 == -1073741536 )
      {
LABEL_37:
        v11 = v32;
        goto LABEL_38;
      }
      if ( v24 )
      {
LABEL_59:
        v11 = -1073741595;
        goto LABEL_28;
      }
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(a1, a2, 1, v34, v35, (__int64)v36, v37, v38, v39, v40, v41);
  v11 = ObjectPropertyWorker;
  if ( v23 )
  {
    LODWORD(v32) = ObjectPropertyWorker;
    v28 = v23 == PiPnpRtlObjectActionCallback
        ? PiPnpRtlObjectActionCallback(a1, a2, 1LL, 8, 2, (__int64)&v32)
        : guard_dispatch_icall_no_overrides(a1, a2);
    if ( v28 != -1073741822 )
    {
      if ( v28 == -1073741536 )
        goto LABEL_37;
      if ( v28 )
        goto LABEL_59;
    }
  }
LABEL_38:
  if ( v11 == -1073741275 )
  {
    *a5 = 1;
    v11 = 0;
  }
  else
  {
    if ( v11 < 0 )
      goto LABEL_63;
    if ( v29 != 7 )
    {
      *a5 = 1;
      goto LABEL_6;
    }
    if ( v30 != v10 )
    {
LABEL_63:
      if ( v11 < 0 )
        goto LABEL_28;
      goto LABEL_6;
    }
    *a5 = 1;
  }
LABEL_6:
  if ( !*a5 )
    return (unsigned int)v11;
  v12 = 512;
  v30 = 0;
  v29 = 512;
  LODWORD(v13) = 0;
  GenericMapping.GenericRead = 131073;
  Pool2 = 0LL;
  GenericMapping.GenericWrite = 0x20000;
  v15 = a2;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 983041;
  *a5 = 0;
  while ( 1 )
  {
    if ( v12 > (unsigned int)v13 )
    {
      v13 = v12;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x47706E50u);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v13, 0x47706E50u);
      if ( !Pool2 )
      {
        v11 = -1073741670;
        goto LABEL_27;
      }
    }
    v16 = *(_QWORD **)&PiPnpRtlCtx;
    v34 = v42;
    v29 = 0;
    v17 = *(__int64 (__fastcall **)(PVOID, unsigned __int16 *, __int64, int, int, __int64))(*(_QWORD *)&PiPnpRtlCtx
                                                                                          + 488LL);
    v37 = &v30;
    v40 = (ULONG *)&v29;
    v31 = *(PVOID *)&PiPnpRtlCtx;
    v32 = 0LL;
    v33 = 0LL;
    v41 = 0LL;
    v35 = 0LL;
    v36 = (const DEVPROPKEY *)&DEVPKEY_Device_EffectiveRestrictedSD;
    v38 = (int *)Pool2;
    v39 = (unsigned int)v13;
    if ( v17 )
    {
      if ( v17 == PiPnpRtlObjectActionCallback )
        v18 = PiPnpRtlObjectActionCallback(*(PVOID *)&PiPnpRtlCtx, v15, 1LL, 8, 1, (__int64)&v32);
      else
        v18 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, v15);
      if ( v18 == -1073741822 )
      {
        v17 = 0LL;
      }
      else
      {
        if ( v18 == -1073741536 )
        {
          v11 = v32;
          goto LABEL_18;
        }
        if ( v18 )
          goto LABEL_51;
      }
    }
    v25 = PnpGetObjectPropertyWorker(v16, v15, 1, v34, v35, (__int64)v36, v37, v38, v39, v40, v41);
    v11 = v25;
    if ( v17 )
    {
      LODWORD(v32) = v25;
      v26 = v17 == PiPnpRtlObjectActionCallback
          ? PiPnpRtlObjectActionCallback(v31, v15, 1LL, 8, 2, (__int64)&v32)
          : guard_dispatch_icall_no_overrides(v31, v15);
      if ( v26 != -1073741822 )
        break;
    }
LABEL_18:
    if ( v11 != -1073741789 )
    {
      v19 = v11;
      if ( v11 < 0 )
        goto LABEL_20;
      if ( !v29 && Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0x47706E50u);
        Pool2 = 0LL;
      }
LABEL_41:
      if ( v30 != 19 )
        goto LABEL_24;
      v11 = PiAuVerifyAccessToObject(1u, Pool2, &GenericMapping, a4, (__int64)a5);
      if ( v11 < 0 )
        goto LABEL_23;
      goto LABEL_25;
    }
    v12 = v29;
  }
  if ( v26 == -1073741536 )
  {
    v11 = v32;
    goto LABEL_18;
  }
  if ( !v26 )
    goto LABEL_18;
LABEL_51:
  v19 = -1073741595;
LABEL_20:
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x47706E50u);
    Pool2 = 0LL;
  }
  v11 = v19;
  if ( v19 == -1073741275 )
  {
LABEL_23:
    v11 = 0;
LABEL_24:
    *a5 = 1;
    goto LABEL_25;
  }
  if ( v19 >= 0 )
    goto LABEL_41;
LABEL_25:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x47706E50u);
LABEL_27:
  if ( v11 < 0 )
LABEL_28:
    *a5 = 0;
  return (unsigned int)v11;
}
