/*
 * XREFs of ExpTimeZoneWork @ 0x1407B6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     ZwSetSystemTime @ 0x1406A9BD0 (ZwSetSystemTime.c)
 */

char __fastcall ExpTimeZoneWork(struct _LIST_ENTRY *Object)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // rdi
  char result; // al

  v2 = PsAttachSiloToCurrentThread(Object);
  v3 = *((_QWORD *)PsGetServerSiloGlobals((__int64)Object) + 153);
  do
    ZwSetSystemTime(0LL, 0LL);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 928), 0xFFFFFFFF) != 1 );
  PsDetachSiloFromCurrentThread(v2);
  result = PsIsHostSilo((__int64)Object);
  if ( !result )
    return ObfDereferenceObjectWithTag(Object, 0x53707845u);
  return result;
}
