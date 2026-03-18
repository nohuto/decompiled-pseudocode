/*
 * XREFs of NtUserDeferredDesktopRotation @ 0x1C01CDCD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDeferredDesktopRotation @ 0x1C01F55B0 (xxxDeferredDesktopRotation.c)
 */

__int64 NtUserDeferredDesktopRotation()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = xxxDeferredDesktopRotation();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
