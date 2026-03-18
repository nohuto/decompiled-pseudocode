/*
 * XREFs of ?UnInitialize@ForegroundLaunch@@YAXXZ @ 0x14028D81C
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall ForegroundLaunch::UnInitialize(ForegroundLaunch *this, __int64 a2)
{
  __int64 UserSessionState; // rbx
  void *v3; // rcx

  UserSessionState = W32GetUserSessionState(this, a2);
  v3 = *(void **)(UserSessionState + 18928);
  if ( v3 )
    Win32FreePool(v3);
  *(_QWORD *)(UserSessionState + 18928) = 0LL;
}
