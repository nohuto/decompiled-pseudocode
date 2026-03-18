/*
 * XREFs of ??0CMouseAcceleration@@IEAA@I@Z @ 0x140220480
 * Callers:
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401900C8 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x14022055C (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration::CMouseAcceleration(CMouseAcceleration *this, unsigned int a2)
{
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO *v3; // rcx

  *((_BYTE *)this + 8) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &CMouseAcceleration::`vftable';
  *((_DWORD *)this + 24) = a2;
  v3 = (CMouseAcceleration *)((char *)this + 104);
  *(_QWORD *)v3 = 0LL;
  *((_BYTE *)this + 112) = 1;
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(v3, a2);
  return this;
}
