/*
 * XREFs of PiCMMandatoryFilterCallback @ 0x1408CFBE0
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1408CEA40 (PiPnpRtlEnumeratorFilterCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D033C (PiAuIsLocalSystem.c)
 */

char __fastcall PiCMMandatoryFilterCallback(
        _QWORD *a1,
        unsigned __int16 *a2,
        int a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  char v4; // di
  PACCESS_TOKEN ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebp
  _QWORD *SessionById; // rax
  __int64 v12; // rbx
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v14[0] = 0;
  if ( a4 && a3 == 1 )
  {
    ClientToken = a4->ClientToken;
    if ( !a4->ClientToken )
      ClientToken = a4->PrimaryToken;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
    v10 = *((_DWORD *)ClientToken + 30);
    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
    KeLeaveCriticalRegionThread();
    if ( v10
      && ((SessionById = (_QWORD *)PsGetSessionById(v10)) == 0LL
       || (v12 = *(_QWORD *)(SessionById[93] + 160LL),
           ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
           v10 != (unsigned int)PsGetServerSiloServiceSessionId(v12)))
      || (int)PiAuIsLocalSystem(a4) >= 0 )
    {
      if ( (int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, 0LL, a4, v14) >= 0 )
        return v14[0];
    }
  }
  return v4;
}
