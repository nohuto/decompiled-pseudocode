/*
 * XREFs of PiUEventApplyAdditionalFilters @ 0x1408CFF90
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFD00 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140A2C6D8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A40BF0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A470E0 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D033C (PiAuIsLocalSystem.c)
 *     SeQuerySessionIdTokenEx @ 0x1409D9400 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x1409DCD30 (PiAuVerifyAccessToObject.c)
 */

__int64 __fastcall PiUEventApplyAdditionalFilters(__int64 a1, __int64 a2)
{
  int v2; // eax
  BOOLEAN v3; // bl
  __int64 v6; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  _QWORD *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r15d
  _QWORD *SessionById; // rax
  __int64 v12; // rbx
  int IsLocalSystem; // eax
  void *v15; // rdx
  PACCESS_TOKEN ClientToken; // rcx
  BOOLEAN IsServiceSession; // [rsp+30h] [rbp-30h] BYREF
  _BYTE GenericMapping[23]; // [rsp+31h] [rbp-2Fh] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v3 = 1;
  GenericMapping[0] = 1;
  if ( v2 == 4 )
  {
    v6 = *(_QWORD *)(a2 + 56);
    v7 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
    v8 = *(_QWORD **)&PiPnpRtlCtx;
    IsServiceSession = 0;
    if ( !v6 )
      v6 = *(_QWORD *)(a2 + 72);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
    v10 = *(_DWORD *)(v6 + 120);
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
    KeLeaveCriticalRegionThread();
    if ( v10
      && ((SessionById = (_QWORD *)PsGetSessionById(v10)) == 0LL
       || (v12 = *(_QWORD *)(SessionById[93] + 160LL),
           ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
           v10 != (unsigned int)PsGetServerSiloServiceSessionId(v12)))
      || (IsLocalSystem = PiAuIsLocalSystem(v7), IsLocalSystem >= 0) && !IsServiceSession )
    {
      IsLocalSystem = PiPnpRtlApplyMandatoryDeviceFilters(v8, (unsigned __int16 *)(a1 + 128), 0LL, v7, GenericMapping);
    }
LABEL_10:
    if ( IsLocalSystem < 0 )
    {
      if ( IsLocalSystem != -1073741772 )
        return 0;
      v15 = *(void **)(a1 + 48);
      v3 = 1;
      if ( !v15
        || (IsServiceSession = 0,
            *(_QWORD *)&GenericMapping[7] = 0x2000000020001LL,
            *(_DWORD *)&GenericMapping[15] = 0x20000,
            *(_DWORD *)&GenericMapping[19] = 983041,
            (int)PiAuVerifyAccessToObject(1u, v15, (PGENERIC_MAPPING)&GenericMapping[7], v7, (__int64)&IsServiceSession) < 0)
        || (v3 = IsServiceSession) != 0 )
      {
        if ( *(_DWORD *)(a1 + 60) != -1 )
        {
          ClientToken = v7->ClientToken;
          *(_DWORD *)&GenericMapping[3] = 0;
          IsServiceSession = 0;
          if ( !ClientToken )
            ClientToken = *(PACCESS_TOKEN *)(a2 + 72);
          SeQuerySessionIdTokenEx(ClientToken, (PULONG)&GenericMapping[3], &IsServiceSession);
          if ( !IsServiceSession && *(_DWORD *)&GenericMapping[3] != *(_DWORD *)(a1 + 60) )
            return 0;
        }
      }
    }
    else
    {
      return (BOOLEAN)GenericMapping[0];
    }
  }
  else
  {
    switch ( v2 )
    {
      case 1:
      case 3:
      case 9:
      case 10:
      case 11:
        v7 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
        IsLocalSystem = PiPnpRtlApplyMandatoryFilters(
                          *(__int64 *)&PiPnpRtlCtx,
                          (unsigned __int16 *)(a1 + 128),
                          1,
                          0LL,
                          (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
                          GenericMapping);
        goto LABEL_10;
      case 2:
        v7 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
        IsLocalSystem = PiPnpRtlApplyMandatoryFilters(
                          *(__int64 *)&PiPnpRtlCtx,
                          (unsigned __int16 *)(a1 + 144),
                          3,
                          0LL,
                          (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
                          GenericMapping);
        goto LABEL_10;
      default:
        return v3;
    }
  }
  return v3;
}
