/*
 * XREFs of SshpWorkItemTryAllowNextWorker @ 0x1404AC4D8
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140A36BF0 (SshpPurgeBlockersWorker.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
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
