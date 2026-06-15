/*
 * XREFs of ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1801129D4
 * Callers:
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114A60 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHand.c)
 * Callees:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x18007492C (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::CVolumeSoftware(CVolumeSoftware *this, struct IControlChangeNotify *a2)
{
  CVolumeSoftware *result; // rax

  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 256), 0, 0);
  *((_DWORD *)this + 74) = 1;
  result = this;
  *((_BYTE *)this + 300) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  return result;
}
