/*
 * XREFs of ??0?$set@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1801880E8
 * Callers:
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x180188128 (--0PenInterface@@QEAA@PEAX0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
