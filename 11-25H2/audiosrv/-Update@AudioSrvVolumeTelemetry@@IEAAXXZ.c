/*
 * XREFs of ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18001F350
 * Callers:
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E1F0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E880 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180051CB0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18001F950 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSrvVolumeTelemetry::Update(AudioSrvVolumeTelemetry *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  ULONGLONG TickCount64; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  TickCount64 = GetTickCount64();
  if ( AudioSrvVolumeTelemetry::LogTelemetry(this) )
  {
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 2) = TickCount64;
  }
  else
  {
    ++*((_DWORD *)this + 6);
  }
  *((_QWORD *)this + 1) = TickCount64;
  if ( v2 )
    LeaveCriticalSection(v2);
}
