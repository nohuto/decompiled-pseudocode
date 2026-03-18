/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x14004F970
 * Callers:
 *     <none>
 * Callees:
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 */

__int64 DrvSessionHasAnyGraphicsDevice()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = 1;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8700;
  }
  if ( !UserIsDisconnectConnection(v0) )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v2) + 88);
    if ( UserIsConsoleConnection() )
      v4 = *(_QWORD *)(v3 + 1192);
    else
      v4 = *(_QWORD *)(v3 + 1184);
    if ( !v4 || (*(_DWORD *)(v4 + 160) & 0x2000000) != 0 && !*(_QWORD *)(v4 + 128) )
      return 0;
  }
  return v1;
}
