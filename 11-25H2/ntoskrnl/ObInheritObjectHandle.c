/*
 * XREFs of ObInheritObjectHandle @ 0x140972284
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1409721A4 (ExpDuplicateSingleHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObpIncrPointerCount @ 0x140431ED0 (ObpIncrPointerCount.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     ExUnlockHandleTableEntry @ 0x140972390 (ExUnlockHandleTableEntry.c)
 *     EtwTraceDuplicateHandle @ 0x140A422FC (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObInheritObjectHandle(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 HandlePointer; // rbp
  void *v9; // rsi
  int v10; // ebx
  int v12; // [rsp+78h] [rbp+20h] BYREF

  HandlePointer = ExGetHandlePointer((__int64 *)a4);
  v9 = (void *)(HandlePointer + 48);
  ObpIncrPointerCount((volatile signed __int64 *)HandlePointer);
  v12 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  ExUnlockHandleTableEntry(a3, a4);
  v10 = ObpIncrementHandleCountEx(3u, (__int64)&v12, a1, HandlePointer + 48, 0, 0, 0LL);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v9);
  }
  else if ( (xmmword_140FC5B10 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      (_DWORD)v9,
      *(_DWORD *)(a1 + 720),
      *(_DWORD *)(a1 + 464),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]);
  }
  return (unsigned int)v10;
}
