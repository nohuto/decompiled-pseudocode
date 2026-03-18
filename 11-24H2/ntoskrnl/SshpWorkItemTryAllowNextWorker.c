/*
 * XREFs of SshpWorkItemTryAllowNextWorker @ 0x1404B1C48
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140A41310 (SshpPurgeBlockersWorker.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5F4A0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall SshpWorkItemTryAllowNextWorker(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), 0, 1) == 1 )
    return 1;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFD);
  return v1;
}
