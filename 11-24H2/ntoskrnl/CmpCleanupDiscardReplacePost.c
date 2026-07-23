/*
 * XREFs of CmpCleanupDiscardReplacePost @ 0x1407E1660
 * Callers:
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A14CEC (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_BOOL8 __fastcall CmpCleanupDiscardReplacePost(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax

  v3 = (_QWORD *)(a3 + 16);
  v4 = *(_QWORD **)(a3 + 16);
  if ( v4[1] != a3 + 16 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
    __fastfail(3u);
  *v3 = v5;
  *(_QWORD *)(v5 + 8) = v3;
  CmpDereferenceKeyControlBlockWithLock(a1);
  CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)(v4 - 15));
  return *v3 == (_QWORD)v3;
}
