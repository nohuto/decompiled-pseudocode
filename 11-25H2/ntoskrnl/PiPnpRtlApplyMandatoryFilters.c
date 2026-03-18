/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x1408CF3B0
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 *     PiDqQueryEnumObject @ 0x1408D0544 (PiDqQueryEnumObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF0FC (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        void *a4,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        _BYTE *a6)
{
  PSECURITY_SUBJECT_CONTEXT v6; // rdi
  PACCESS_TOKEN ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // esi
  struct _SECURITY_SUBJECT_CONTEXT *v14; // rdx
  BOOLEAN v15; // al
  __int64 v16; // r8
  __int64 result; // rax
  _QWORD *SessionById; // rax
  __int64 v19; // rbx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+58h] [rbp-40h] BYREF

  v6 = SubjectSecurityContext;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
  v13 = *((_DWORD *)ClientToken + 30);
  ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v13
    || (SessionById = (_QWORD *)PsGetSessionById(v13)) != 0LL
    && (v19 = *(_QWORD *)(SessionById[93] + 160LL),
        ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
        v13 == (unsigned int)PsGetServerSiloServiceSessionId(v19)) )
  {
    GrantedAccess = 0;
    LODWORD(SubjectSecurityContext) = 0;
    memset(v21, 0, sizeof(v21));
    if ( !PiAuLocalSystemSecurityObject )
      return 3221225485LL;
    v14 = (struct _SECURITY_SUBJECT_CONTEXT *)v21;
    if ( v6 )
      v14 = v6;
    v15 = SeAccessCheck(
            PiAuLocalSystemSecurityObject,
            v14,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            1,
            &GrantedAccess,
            (PNTSTATUS)&SubjectSecurityContext);
    if ( (int)SubjectSecurityContext < 0 )
      v15 = 0;
    if ( v15 )
      goto LABEL_17;
  }
  if ( a3 == 1 )
    return PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, v6, a6);
  if ( a3 == 3 )
    return PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (__int64)v6, (__int64)a6);
  if ( a3 != 5 )
  {
LABEL_17:
    result = 0LL;
    *a6 = 1;
    return result;
  }
  return PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v16, v6, a6);
}
