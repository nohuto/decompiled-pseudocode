/*
 * XREFs of ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x14004C9A4
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS_NONPAGED *__fastcall DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(DXGPROCESS_NONPAGED *this)
{
  _QWORD *v1; // rbx
  DXGPROCESS_NONPAGED *result; // rax

  *((_QWORD *)this + 4) = 0LL;
  v1 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 15);
  v1[1] = v1;
  *v1 = v1;
  *((_QWORD *)this + 16) = 0LL;
  result = this;
  *((_WORD *)this + 68) = 0;
  *((_BYTE *)this + 138) = 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  return result;
}
