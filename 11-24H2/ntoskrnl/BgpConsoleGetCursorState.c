/*
 * XREFs of BgpConsoleGetCursorState @ 0x140BB2FD0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetCursorState(_DWORD *a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx

  BgpFwAcquireLock((__int64)a1, (__int64)a2, (__int64)a3, a4);
  v9 = qword_140EEFD00;
  v10 = 0;
  if ( qword_140EEFD00 )
  {
    *a1 = *(_DWORD *)(qword_140EEFD00 + 68);
    *a2 = *(_DWORD *)(v9 + 72);
    v8 = *(unsigned int *)(v9 + 76);
    *a3 = v8;
  }
  else
  {
    v10 = -1073741823;
  }
  BgpFwReleaseLock(v8, v7);
  return v10;
}
