/*
 * XREFs of PoVolumeDevice @ 0x140AABF98
 * Callers:
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
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
      v3 = (_QWORD *)qword_140F0B898;
      if ( *(__int64 **)qword_140F0B898 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 88) = v3;
      *v3 = v2;
      qword_140F0B898 = Dope + 80;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
