/*
 * XREFs of DwmCheckForDeferredUpdateSpriteCommands @ 0x1401DB184
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmCheckForDeferredUpdateSpriteCommands(__int64 a1, __int64 a2)
{
  __int64 SessionState; // rax
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned int v6; // edx

  SessionState = W32GetSessionState(a1, a2);
  v4 = 0;
  v5 = *(_QWORD *)(SessionState + 96);
  v6 = 1;
  while ( v4 < *(_DWORD *)(v5 + 716) )
  {
    if ( *(_QWORD *)(196LL * v4 + v5 + 888) == a1 )
      return v6;
    ++v4;
  }
  *(_BYTE *)(v5 + 4644) = 1;
  return 0;
}
