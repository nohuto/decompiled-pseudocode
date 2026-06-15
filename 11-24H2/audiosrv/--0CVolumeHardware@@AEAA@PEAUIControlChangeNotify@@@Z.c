/*
 * XREFs of ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800748CC
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114928 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIV.c)
 * Callees:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x18007492C (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0VolumeHardwareLogger@@QEAA@XZ @ 0x1800A0964 (--0VolumeHardwareLogger@@QEAA@XZ.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::CVolumeHardware(CVolumeHardware *this, struct IControlChangeNotify *a2)
{
  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeHardware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *(GUID *)((char *)this + 264) = GUID_00000000_0000_0000_0000_000000000000;
  VolumeHardwareLogger::VolumeHardwareLogger((CVolumeHardware *)((char *)this + 296));
  return this;
}
