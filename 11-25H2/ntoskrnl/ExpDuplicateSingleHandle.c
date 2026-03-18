/*
 * XREFs of ExpDuplicateSingleHandle @ 0x1409721A4
 * Callers:
 *     ExDupHandleTable @ 0x140971B80 (ExDupHandleTable.c)
 * Callees:
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x140971274 (ExpSetHandleExtraInfo.c)
 *     ObInheritObjectHandle @ 0x140972284 (ObInheritObjectHandle.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall ExpDuplicateSingleHandle(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4,
        __int64 a5,
        _OWORD *a6,
        char a7)
{
  __int64 HandleExtraInfo; // rax
  __int64 result; // rax
  int v13; // ebx
  __int128 v14; // [rsp+20h] [rbp-28h]

  *a6 = *a4;
  v14 = 0LL;
  *(_QWORD *)&v14 = *(_QWORD *)a6 & 0xFFFFFFFFFFFE0001uLL;
  *(_QWORD *)a6 = v14;
  *(_QWORD *)a6 |= 1uLL;
  if ( a3[1]
    && (HandleExtraInfo = ExpGetHandleExtraInfo(a3, a2)) != 0
    && (*(_DWORD *)HandleExtraInfo || *(_DWORD *)(HandleExtraInfo + 4))
    && (v13 = ExpSetHandleExtraInfo(a5, a2, (_QWORD *)HandleExtraInfo), v13 < 0) )
  {
    ExUnlockHandleTableEntry(a3, a4);
  }
  else
  {
    result = ObInheritObjectHandle(a1, a2, a3, a4, v14, *((_QWORD *)&v14 + 1));
    v13 = result;
    if ( (int)result >= 0 )
      return result;
    if ( !a7 )
      v13 = 263;
  }
  result = (unsigned int)v13;
  *a6 = 0LL;
  return result;
}
