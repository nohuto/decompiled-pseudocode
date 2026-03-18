/*
 * XREFs of PnpRequestDeviceEjectExWorker @ 0x140715150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B044 (PnpQueueQueryAndRemoveEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRequestDeviceEjectExWorker(WCHAR *P)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  void *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, P + 32);
  v6 = 1024;
  v2 = PnpQueueQueryAndRemoveEvent(
         (unsigned int)&DestinationString,
         (int)P + 464,
         (int)P + 468,
         (unsigned int)&v6,
         8,
         1);
  v3 = *(_QWORD *)P;
  *((_DWORD *)P + 6) = v2;
  if ( v3 )
    guard_dispatch_icall_no_overrides(v2);
  v4 = (void *)*((_QWORD *)P + 2);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x45706E50u);
  ExFreePoolWithTag(P, 0x46706E50u);
}
