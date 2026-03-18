/*
 * XREFs of CmpAllocateUnitOfWork @ 0x140A2E660
 * Callers:
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 CmpAllocateUnitOfWork()
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL);
  if ( result )
  {
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
    *(_QWORD *)(result + 40) = result + 32;
    *(_QWORD *)(result + 32) = result + 32;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 48) = 0LL;
    *(_QWORD *)(result + 56) = 0LL;
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 68) = 16;
  }
  return result;
}
