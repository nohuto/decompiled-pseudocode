/*
 * XREFs of ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180257D90
 * Callers:
 *     ?Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z @ 0x1800FD114 (-Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z.c)
 * Callees:
 *     <none>
 */

CInputManager *__fastcall CInputManager::CInputManager(CInputManager *this, struct CComposition *a2)
{
  CInputManager *result; // rax

  CInputManager::s_pInputManager = this;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CInputManager::`vftable';
  result = this;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = a2;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  return result;
}
