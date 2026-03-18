/*
 * XREFs of CleanupMediaChange @ 0x1402792E0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CleanupMediaChange(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  void *v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rbx
  int i; // esi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r8d

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v3 = (void *)UserSessionState[8774];
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    UserSessionState[8774] = 0LL;
  }
  v4 = (void *)UserSessionState[8773];
  if ( v4 )
  {
    Win32FreePool(v4);
    UserSessionState[8773] = 0LL;
  }
  v5 = (_QWORD **)(UserSessionState + 8770);
  if ( UserSessionState[8770] )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v7[1] != v5 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v5 = v8;
      v8[1] = v5;
      Win32FreePool(v7);
    }
    if ( i > 0 )
    {
      v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
         - UserSessionState[8772];
      if ( i > 10 )
      {
        if ( v9 <= 0x2710 )
          return;
        v10 = 165;
      }
      else
      {
        if ( v9 <= 0x2710 )
          return;
        v10 = 163;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, v10);
    }
  }
}
