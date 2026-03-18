/*
 * XREFs of PpmMediaBufferingWorker @ 0x140203C20
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmEventMediaBufferingNotify @ 0x140204F40 (PpmEventMediaBufferingNotify.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x140A548F8 (PpmPdcNotifyMediaBufferingUpdate.c)
 */

void PpmMediaBufferingWorker()
{
  KIRQL v0; // al
  char v1; // bl
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // rcx

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v1 = byte_140F0CCA9;
    if ( byte_140F0CCA9 == byte_140F0B74C )
      break;
    byte_140F0B74C = byte_140F0CCA9;
    KeReleaseSpinLock(&PpmMediaBufferingWork, v0);
    LOBYTE(v2) = v1;
    PpmEventMediaBufferingNotify(v2);
    PpmAcquireLock(&PpmPerfPolicyLock);
    v3 = 1;
    if ( !PpmLowPowerProfile )
    {
      if ( v1 )
        v3 = 0;
      else
        v3 = PpmPdcMediaEngaged != 0;
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v3 )
    {
      LOBYTE(v4) = v1;
      PpmPdcMediaEngaged = v1;
      PpmPdcNotifyMediaBufferingUpdate(v4);
    }
  }
  byte_140F0CCA8 = 0;
  KeReleaseSpinLock(&PpmMediaBufferingWork, v0);
}
