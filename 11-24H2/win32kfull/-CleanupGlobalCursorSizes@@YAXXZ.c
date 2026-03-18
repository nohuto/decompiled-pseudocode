/*
 * XREFs of ?CleanupGlobalCursorSizes@@YAXXZ @ 0x1401F98D4
 * Callers:
 *     EditionUnloadCursorsAndIcons @ 0x1401F9710 (EditionUnloadCursorsAndIcons.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupGlobalCursorSizes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // rcx

  v3 = *(void **)(W32GetUserSessionState(a1, a2) + 36400);
  if ( v3 )
    Win32FreePool(v3);
  *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36400) = 0LL;
}
