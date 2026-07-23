/*
 * XREFs of ObpEnumFindHandleProcedure @ 0x1408613E0
 * Callers:
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 */

_BOOL8 __fastcall ObpEnumFindHandleProcedure(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 HandlePointer; // rax
  bool v8; // di
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  if ( !*a4 || *a4 == HandlePointer )
  {
    v10 = a4[1];
    if ( !v10
      || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(HandlePointer + 24) ^ BYTE1(HandlePointer))) == *(_BYTE *)(v10 + 40) )
    {
      v11 = (_DWORD *)a4[2];
      v8 = !v11 || *v11 == (((__int64)*(unsigned int *)a2 >> 17) & 7) && v11[1] == (a2[1] & 0x1FFFFFF);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 0;
  }
  _InterlockedIncrement64(a2);
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock(a1 + 48, 0LL);
  return v8;
}
