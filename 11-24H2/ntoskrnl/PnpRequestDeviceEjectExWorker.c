/*
 * XREFs of PnpRequestDeviceEjectExWorker @ 0x140721250
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRequestDeviceEjectExWorker(WCHAR *P)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  __int64 v4; // r8
  void *v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, P + 32);
  v7 = 1024;
  v2 = PnpQueueQueryAndRemoveEvent(
         (unsigned int)&DestinationString,
         (int)P + 464,
         (int)P + 468,
         (unsigned int)&v7,
         8,
         1);
  v4 = *(_QWORD *)P;
  *((_DWORD *)P + 6) = v2;
  if ( v4 )
    guard_dispatch_icall_no_overrides(v2, *((_QWORD *)P + 1), v4, v3);
  v5 = (void *)*((_QWORD *)P + 2);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x45706E50u);
  ExFreePoolWithTag(P, 0x46706E50u);
}
