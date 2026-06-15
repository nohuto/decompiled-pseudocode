/*
 * XREFs of ??0CRtwqAsyncCallback@@QEAA@XZ @ 0x140058804
 * Callers:
 *     ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x1400445D8 (-CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z.c)
 * Callees:
 *     <none>
 */

CRtwqAsyncCallback *__fastcall CRtwqAsyncCallback::CRtwqAsyncCallback(CRtwqAsyncCallback *this)
{
  CRtwqAsyncCallback *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CRtwqAsyncCallback::`vftable';
  result = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 1;
  return result;
}
