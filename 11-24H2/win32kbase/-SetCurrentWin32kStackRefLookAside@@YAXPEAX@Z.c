/*
 * XREFs of ?SetCurrentWin32kStackRefLookAside@@YAXPEAX@Z @ 0x140156FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetCurrentWin32kStackRefLookAside(void *a1)
{
  *(_QWORD *)(W32GetUserSessionState(a1) + 42624) = a1;
}
