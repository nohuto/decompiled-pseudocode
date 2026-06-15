/*
 * XREFs of ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800282C8
 * Callers:
 *     ??0CDuckingManager@@QEAA@XZ @ 0x180028158 (--0CDuckingManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CSerialWorkQueue *__fastcall CSerialWorkQueue::CSerialWorkQueue(CSerialWorkQueue *this)
{
  char *v2; // rcx
  CSerialWorkQueue *result; // rax

  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 80) = 0;
  v2 = (char *)this + 88;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)v2, 2);
  *((_QWORD *)this + 15) = 0LL;
  result = this;
  *((_DWORD *)this + 2) = 3;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 1;
  *((_DWORD *)this + 18) = 72;
  return result;
}
