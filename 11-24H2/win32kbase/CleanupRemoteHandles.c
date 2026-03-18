/*
 * XREFs of CleanupRemoteHandles @ 0x1400C8580
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall CleanupRemoteHandles(_QWORD *a1))(void)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 (*result)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx

  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[3] = 0LL;
  v2 = (char *)a1[7];
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    a1[7] = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 69176) )
  {
    UserSessionState = W32GetUserSessionState(v3);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 69176));
    *(_QWORD *)(W32GetUserSessionState(v5) + 69176) = 0LL;
    W32GetUserSessionState(v6);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v3) + 69168) )
  {
    v8 = W32GetUserSessionState(v7);
    ObfDereferenceObject(*(PVOID *)(v8 + 69168));
    *(_QWORD *)(W32GetUserSessionState(v9) + 69168) = 0LL;
    W32GetUserSessionState(v10);
  }
  v11 = (_QWORD *)W32GetUserSessionState(v7);
  v12 = (void *)v11[8617];
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    v11[8617] = 0LL;
  }
  v13 = (void *)v11[8612];
  if ( v13 )
    ZwClose(v13);
  v14 = (void *)v11[8613];
  if ( v14 )
    ZwClose(v14);
  v15 = (void *)v11[8614];
  *((_OWORD *)v11 + 4306) = 0LL;
  if ( v15 )
    ZwClose(v15);
  v16 = (void *)v11[8615];
  if ( v16 )
    ZwClose(v16);
  *((_OWORD *)v11 + 4307) = 0LL;
  result = (__int64 (*)(void))IsRemoteConnection();
  if ( (_DWORD)result )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 504LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48) + 512LL);
        if ( result )
          return (__int64 (*)(void))result();
      }
    }
  }
  return result;
}
