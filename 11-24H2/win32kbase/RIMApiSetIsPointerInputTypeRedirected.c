/*
 * XREFs of RIMApiSetIsPointerInputTypeRedirected @ 0x1400D9BE0
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1400D94BC (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140180B5C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsPointerInputTypeRedirected(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx

  v1 = 1;
  if ( (_DWORD)a1 == 2 )
  {
    v1 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(a1) + 336) )
    {
      v4 = *(_DWORD *)(W32GetUserSessionState(v3) + 340);
LABEL_8:
      LOBYTE(v1) = v4 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
    }
  }
  else if ( (_DWORD)a1 == 3 )
  {
    v1 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(a1) + 344) )
    {
      v4 = *(_DWORD *)(W32GetUserSessionState(v5) + 348);
      goto LABEL_8;
    }
  }
  return v1;
}
