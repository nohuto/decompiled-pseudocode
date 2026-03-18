/*
 * XREFs of _SetWaitForQueueAttach @ 0x14021703C
 * Callers:
 *     NtUserSetWaitForQueueAttach @ 0x14029EEB0 (NtUserSetWaitForQueueAttach.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SetWaitForQueueAttach(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *v3; // rax

  v2 = (int)a1;
  if ( ((_DWORD)a1 != 0) != (_DWORD)a1 )
    return 0LL;
  v3 = PtiCurrent(a1, a2);
  *((_QWORD *)v3 + 170) = (v2 << 10) ^ (*((_QWORD *)v3 + 170) ^ (v2 << 10)) & 0xFFFFFFFFFFFFFBFFuLL;
  return 1LL;
}
