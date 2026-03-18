/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x140179D90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x140159DB8 (McTemplateK0pz_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(a1, &LockAcquireSharedStarveExclusive, a3, a2, a1);
  }
  return result;
}
