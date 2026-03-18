/*
 * XREFs of ?GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ @ 0x1402EBEA0
 * Callers:
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1402DE7DC (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBED8 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

struct _WAVEFORM_INFO *__fastcall InteractiveControlDevice::GetSupportedWaveforms(InteractiveControlDevice *this)
{
  struct _WAVEFORM_INFO *result; // rax

  result = (struct _WAVEFORM_INFO *)*((_QWORD *)this + 48);
  if ( result )
    return (struct _WAVEFORM_INFO *)*((_QWORD *)result + 10);
  return result;
}
