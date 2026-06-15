/*
 * XREFs of ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x18002E4A0
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x18008DC14 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 * Callees:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x18002DF44 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0VolumeHardwareLogger@@QEAA@XZ @ 0x1800A47B8 (--0VolumeHardwareLogger@@QEAA@XZ.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::CVolumeHardware(CVolumeHardware *this, struct IControlChangeNotify *a2)
{
  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeHardware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *(GUID *)((char *)this + 264) = GUID_00000000_0000_0000_0000_000000000000;
  VolumeHardwareLogger::VolumeHardwareLogger((CVolumeHardware *)((char *)this + 288));
  return this;
}
