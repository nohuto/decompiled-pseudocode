/*
 * XREFs of ?UnInitialize@ShellForegroundBoost@@YAXXZ @ 0x14026C748
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellForegroundBoost::UnInitialize(ShellForegroundBoost *this, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // rcx

  v3 = *(void **)(W32GetUserSessionState(this, a2) + 18936);
  if ( v3 )
    Win32FreePool(v3);
  *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18936) = 0LL;
}
