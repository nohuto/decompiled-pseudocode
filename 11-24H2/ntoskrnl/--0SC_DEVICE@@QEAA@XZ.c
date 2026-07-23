/*
 * XREFs of ??0SC_DEVICE@@QEAA@XZ @ 0x14069F98C
 * Callers:
 *     ??0SC_DISK@@QEAA@XZ @ 0x14069E51C (--0SC_DISK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

SC_DEVICE *__fastcall SC_DEVICE::SC_DEVICE(SC_DEVICE *this)
{
  SC_DEVICE *result; // rax

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *(GUID *)((char *)this + 8) = CPER_EMPTY_GUID;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  result = this;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  return result;
}
