/*
 * XREFs of PpmMediaBufferingWorker @ 0x1402ADB70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmEventMediaBufferingNotify @ 0x1402ADAC4 (PpmEventMediaBufferingNotify.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x140A4F9A0 (PpmPdcNotifyMediaBufferingUpdate.c)
 */

void PpmMediaBufferingWorker()
{
  KIRQL v0; // al
  char v1; // bl
  bool v2; // di
  __int64 v3; // rcx

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v1 = byte_140F0D749;
    if ( byte_140F0D749 == byte_140F0B3CC )
      break;
    byte_140F0B3CC = byte_140F0D749;
    KeReleaseSpinLock(&PpmMediaBufferingWork, v0);
    PpmEventMediaBufferingNotify(v1);
    PpmAcquireLock(&PpmPerfPolicyLock);
    v2 = 1;
    if ( !PpmLowPowerProfile )
    {
      if ( v1 )
        v2 = 0;
      else
        v2 = PpmPdcMediaEngaged != 0;
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v2 )
    {
      LOBYTE(v3) = v1;
      PpmPdcMediaEngaged = v1;
      PpmPdcNotifyMediaBufferingUpdate(v3);
    }
  }
  byte_140F0D748 = 0;
  KeReleaseSpinLock(&PpmMediaBufferingWork, v0);
}
