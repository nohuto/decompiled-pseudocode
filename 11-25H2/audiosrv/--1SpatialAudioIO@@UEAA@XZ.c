/*
 * XREFs of ??1SpatialAudioIO@@UEAA@XZ @ 0x180061A14
 * Callers:
 *     ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x1800A62E0 (--1SpatialAudioDeviceStateWriter@@UEAA@XZ.c)
 *     ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180121B60 (--_GSpatialAudioIO@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180121BA0 (--_GSpatialAudioStateIO@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialAudioIO::~SpatialAudioIO(SpatialAudioIO *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  v2 = *((_QWORD *)this + 67);
  if ( v2 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 66);
  if ( v3 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
