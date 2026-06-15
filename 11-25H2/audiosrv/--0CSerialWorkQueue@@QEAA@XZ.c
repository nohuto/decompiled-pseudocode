/*
 * XREFs of ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800CBFE4
 * Callers:
 *     ??0CAudioSrv@@QEAA@XZ @ 0x1800CBDE4 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CC04C (--0_Mutex_base@std@@QEAA@H@Z.c)
 */

CSerialWorkQueue *__fastcall CSerialWorkQueue::CSerialWorkQueue(CSerialWorkQueue *this)
{
  CSerialWorkQueue *result; // rax

  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 80) = 0;
  std::_Mutex_base::_Mutex_base((CSerialWorkQueue *)((char *)this + 88), 0);
  *((_QWORD *)this + 15) = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 2) = 3;
  *((_DWORD *)this + 17) = 1;
  *((_DWORD *)this + 18) = 72;
  return result;
}
