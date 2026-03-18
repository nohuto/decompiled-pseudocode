/*
 * XREFs of PpmMediaBufferingWorker @ 0x1403B5760
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmEventMediaBufferingNotify @ 0x1403B6618 (PpmEventMediaBufferingNotify.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x140A581F0 (PpmPdcNotifyMediaBufferingUpdate.c)
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
    v1 = byte_140F0D429;
    if ( byte_140F0D429 == byte_140F0BA8C )
      break;
    byte_140F0BA8C = byte_140F0D429;
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
  byte_140F0D428 = 0;
  KeReleaseSpinLock(&PpmMediaBufferingWork, v0);
}
