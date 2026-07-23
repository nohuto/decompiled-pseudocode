/*
 * XREFs of PoVolumeDevice @ 0x140AAC408
 * Callers:
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x1403E6628 (PopGetDope.c)
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
      v3 = (_QWORD *)qword_140F0B478;
      if ( *(__int64 **)qword_140F0B478 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 88) = v3;
      *v3 = v2;
      qword_140F0B478 = Dope + 80;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
