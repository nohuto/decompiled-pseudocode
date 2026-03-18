/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C00B8CE0
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00A3070 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C01B61A0 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(int a1)
{
  __int64 i; // rdx
  __int64 *j; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 k; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( grpdeskRitInput )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 16LL); i; i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 176); j != (__int64 *)(i + 176); j = (__int64 *)*j )
      {
        v6 = *(j - 39);
        *((_DWORD *)j + 4) = a1;
        *(_DWORD *)(v6 + 392) = a1;
      }
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  for ( k = *(_QWORD *)(ProcessWin32Process + 328); k; k = *(_QWORD *)(k + 664) )
  {
    v7 = *(_QWORD *)(k + 432);
    *(_DWORD *)(k + 760) = a1;
    *(_DWORD *)(v7 + 392) = a1;
  }
}
