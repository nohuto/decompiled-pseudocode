/*
 * XREFs of ??0MonitorInformation@KeyboardHosting@@QEAA@XZ @ 0x180479ECC
 * Callers:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x180126B4C (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1804853D8 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x180485480 (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

KeyboardHosting::MonitorInformation *__fastcall KeyboardHosting::MonitorInformation::MonitorInformation(
        KeyboardHosting::MonitorInformation *this)
{
  KeyboardHosting::MonitorInformation *result; // rax

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_DWORD *)this + 10) = 100;
  *(_OWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_DWORD *)this + 24) = 100;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *(_OWORD *)((char *)this + 116) = 0LL;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_OWORD *)((char *)this + 148) = 0LL;
  return result;
}
