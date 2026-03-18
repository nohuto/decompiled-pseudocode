/*
 * XREFs of IopDeviceInterfaceFilterCallback @ 0x1408CEAE0
 * Callers:
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE630 (PiPnpRtlInterfaceFilterCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF0FC (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiAuIsLocalSystem @ 0x1408D042C (PiAuIsLocalSystem.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 */

char __fastcall IopDeviceInterfaceFilterCallback(int a1, const WCHAR *a2, int a3, __int64 a4)
{
  char v4; // di
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // r14d
  _QWORD *SessionById; // rax
  __int64 v12; // rbx
  _BYTE v14[8]; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING String2; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0;
  v14[0] = 0;
  String2 = 0LL;
  DestinationString = 0LL;
  if ( a3 == 3
    && a4
    && (!*(_QWORD *)a4
     || RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)a4) >= 0
     && RtlInitUnicodeStringEx(&String2, a2) >= 0
     && RtlEqualUnicodeString(&DestinationString, &String2, 1u) != 1) )
  {
    v8 = *(_QWORD *)(a4 + 8);
    if ( !v8 )
      v8 = *(_QWORD *)(a4 + 24);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 48), 1u);
    v10 = *(_DWORD *)(v8 + 120);
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v10
      && ((SessionById = (_QWORD *)PsGetSessionById(v10)) == 0LL
       || (v12 = *(_QWORD *)(SessionById[93] + 160LL),
           ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
           v10 != (unsigned int)PsGetServerSiloServiceSessionId(v12)))
      || (int)PiAuIsLocalSystem((PSECURITY_SUBJECT_CONTEXT)(a4 + 8)) >= 0 )
    {
      if ( (int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, (_DWORD)a2, 0, (int)a4 + 8, (__int64)v14) >= 0 )
        return v14[0];
    }
  }
  return v4;
}
