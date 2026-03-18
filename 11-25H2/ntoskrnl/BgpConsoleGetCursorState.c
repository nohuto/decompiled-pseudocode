/*
 * XREFs of BgpConsoleGetCursorState @ 0x140BA0FD0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx

  BgpFwAcquireLock();
  v8 = qword_140EEF810;
  v9 = 0;
  if ( qword_140EEF810 )
  {
    *a1 = *(_DWORD *)(qword_140EEF810 + 68);
    *a2 = *(_DWORD *)(v8 + 72);
    v7 = *(unsigned int *)(v8 + 76);
    *a3 = v7;
  }
  else
  {
    v9 = -1073741823;
  }
  BgpFwReleaseLock(v7, v6);
  return v9;
}
