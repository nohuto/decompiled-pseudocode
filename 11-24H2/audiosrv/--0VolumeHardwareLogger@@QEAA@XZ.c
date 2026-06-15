/*
 * XREFs of ??0VolumeHardwareLogger@@QEAA@XZ @ 0x1800A0964
 * Callers:
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800748CC (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 * Callees:
 *     <none>
 */

VolumeHardwareLogger *__fastcall VolumeHardwareLogger::VolumeHardwareLogger(VolumeHardwareLogger *this)
{
  VolumeHardwareLogger *result; // rax

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  result = this;
  *((_BYTE *)this + 144) = 0;
  return result;
}
