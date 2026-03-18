/*
 * XREFs of ?vCleanupPrintKViewList@@YAXXZ @ 0x14030E600
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x140145B00 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall vCleanupPrintKViewList(int a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = *(_QWORD **)(v2 + 24032);
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)v3[4];
    Win32FreePool(v4);
  }
  *(_QWORD *)(v2 + 24032) = 0LL;
}
