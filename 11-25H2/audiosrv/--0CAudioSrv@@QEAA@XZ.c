/*
 * XREFs of ??0CAudioSrv@@QEAA@XZ @ 0x1800CBDE4
 * Callers:
 *     ServiceStart @ 0x180145CC8 (ServiceStart.c)
 * Callees:
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800CBFE4 (--0CSerialWorkQueue@@QEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::CAudioSrv(CAudioSrv *this)
{
  CAudioSrv *result; // rax

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  *((_DWORD *)this + 27) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 10;
  *((_QWORD *)this + 25) = 0LL;
  CSerialWorkQueue::CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  CSerialWorkQueue::CSerialWorkQueue((CAudioSrv *)((char *)this + 336));
  result = this;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return result;
}
