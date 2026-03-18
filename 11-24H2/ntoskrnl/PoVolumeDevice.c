/*
 * XREFs of PoVolumeDevice @ 0x140AB1498
 * Callers:
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x1403F2908 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 80);
    if ( !*(_QWORD *)(Dope + 80) )
    {
      v3 = (_QWORD *)qword_140F0BB08;
      if ( *(__int64 **)qword_140F0BB08 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 88) = v3;
      *v3 = v2;
      qword_140F0BB08 = Dope + 80;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
