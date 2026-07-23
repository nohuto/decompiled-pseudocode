/*
 * XREFs of ExAllocateAutoExpandPushLock @ 0x140654610
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall ExAllocateAutoExpandPushLock(char a1)
{
  int v1; // ebx
  _QWORD *result; // rax

  v1 = a1 & 1;
  result = (_QWORD *)ExAllocatePool2((-(__int64)(v1 != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 0x10uLL, 0x6C706541u);
  if ( result )
  {
    result[1] = 0LL;
    if ( !v1 )
      *((_DWORD *)result + 2) |= 4u;
    *result = 0LL;
  }
  return result;
}
