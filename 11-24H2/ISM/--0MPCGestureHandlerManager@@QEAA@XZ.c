/*
 * XREFs of ??0MPCGestureHandlerManager@@QEAA@XZ @ 0x1800B1BC0
 * Callers:
 *     std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x180069164 (std--call_once__lambda_810dcc79efb0a72353c94b2711027391___.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCGestureHandlerManager *__fastcall MPCGestureHandlerManager::MPCGestureHandlerManager(MPCGestureHandlerManager *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  *(_QWORD *)this = &MPCGestureHandlerManager::`vftable';
  v2 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v2 = v3;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4 = operator new(0x30uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 3) = v4;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
