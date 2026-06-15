/*
 * XREFs of _freea @ 0x18004D97C
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800230D0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18004D710 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800C8714 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     wistd::unique_ptr__CVolumeHardware::Initialize_::_7_::Volume_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&_freea___::_unique_ptr__CVolumeHardware::Initialize_::_7_::Volume_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&_freea___ @ 0x180112A40 (wistd--unique_ptr__CVolumeHardware--Initialize_--_7_--Volume_[0]_wil--function_deleter_void_(__c.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z @ 0x180113B48 (-Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free(v1);
  }
}
