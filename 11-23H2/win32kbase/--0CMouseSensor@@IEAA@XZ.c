/*
 * XREFs of ??0CMouseSensor@@IEAA@XZ @ 0x1C00C2538
 * Callers:
 *     ?CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z @ 0x1C00C249C (-CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C0083400 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

CMouseSensor *__fastcall CMouseSensor::CMouseSensor(CMouseSensor *this)
{
  CMouseSensor *result; // rax

  CBaseInput::CBaseInput((__int64)this, 1u, 0, 0);
  *(_QWORD *)this = &CMouseSensor::`vftable';
  *((_QWORD *)this + 168) = 0LL;
  *((_BYTE *)this + 1352) = 0;
  *((_QWORD *)this + 170) = L"RawMouseThrottleEnabled";
  *((_QWORD *)this + 173) = L"RawMouseThrottleForced";
  *((_QWORD *)this + 176) = L"RawMouseThrottleDuration";
  *((_QWORD *)this + 179) = L"RawMouseThrottleLeeway";
  result = this;
  *((_QWORD *)this + 171) = 1LL;
  *((_QWORD *)this + 172) = 1LL;
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 175) = 1LL;
  *((_DWORD *)this + 354) = 8;
  *((_DWORD *)this + 355) = 1;
  *((_QWORD *)this + 178) = 20LL;
  *((_QWORD *)this + 180) = 2LL;
  *((_QWORD *)this + 181) = 5LL;
  *((_DWORD *)this + 364) = 50;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 184) = 0LL;
  return result;
}
