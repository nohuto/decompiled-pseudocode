/*
 * XREFs of IopIsFileOpenOrSection @ 0x1408612F0
 * Callers:
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     MmSectionToSectionObjectPointers @ 0x140861574 (MmSectionToSectionObjectPointers.c)
 */

_BOOL8 __fastcall IopIsFileOpenOrSection(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 HandlePointer; // rax
  __int64 v8; // rbp
  bool v9; // di
  struct _OBJECT_TYPE *v10; // rcx
  unsigned __int64 v12; // rax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  v8 = *a4;
  v9 = 0;
  v10 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( v10 == (struct _OBJECT_TYPE *)IoFileObjectType )
  {
    v12 = HandlePointer + 48;
    if ( v8 == v12 )
      v9 = *((_BYTE *)a4 + 8) == 0;
    else
      v9 = *(_QWORD *)(v8 + 24) == *(_QWORD *)(v12 + 24);
  }
  else if ( v10 == MmSectionObjectType && *(_QWORD *)(v8 + 40) )
  {
    v9 = MmSectionToSectionObjectPointers(HandlePointer + 48) == *(_QWORD *)(v8 + 40);
  }
  _InterlockedIncrement64(a2);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock(a1 + 48, 0LL);
  return v9;
}
