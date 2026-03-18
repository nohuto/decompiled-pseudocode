/*
 * XREFs of PiCMMandatoryFilterCallback @ 0x1408CFBC0
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1408CE9C0 (PiPnpRtlEnumeratorFilterCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D042C (PiAuIsLocalSystem.c)
 */

char __fastcall PiCMMandatoryFilterCallback(_QWORD *a1, const WCHAR *a2, int a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
