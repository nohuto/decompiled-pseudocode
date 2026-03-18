/*
 * XREFs of ?CleanupFreedTLCInfo@@YAXXZ @ 0x14012FEF0
 * Callers:
 *     _RegisterRawInputDevices @ 0x14012FA44 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x140110BAC (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     FreeHidTLCInfo @ 0x140130000 (FreeHidTLCInfo.c)
 */

void __fastcall CleanupFreedTLCInfo(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  struct tagHID_PAGEONLY_REQUEST **v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 j; // rax
  __int64 v18; // rdx
  struct tagHID_PAGEONLY_REQUEST ***v19; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 0LL;
  v5 = UserSessionState + 104;
  if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
  {
    v4 = UserSessionState + 104;
    RIMLockExclusive();
  }
  v6 = *(_QWORD **)(W32GetUserSessionState(v5, v3) + 192);
  for ( i = W32GetUserSessionState(v8, v7); v6 != (_QWORD *)(i + 192); i = W32GetUserSessionState(v13, v12) )
  {
    v12 = v6;
    v6 = (_QWORD *)*v6;
    v13 = v12[5] | v12[6] | (unsigned int)(v12[8] | v12[9]);
    if ( !(v12[5] | v12[6] | v12[8] | v12[9]) )
      FreeHidTLCInfo(v12);
  }
  v14 = *(struct tagHID_PAGEONLY_REQUEST ***)(W32GetUserSessionState(v11, v10) + 208);
  for ( j = W32GetUserSessionState(v16, v15);
        v14 != (struct tagHID_PAGEONLY_REQUEST **)(j + 208);
        j = W32GetUserSessionState(v19, v18) )
  {
    v19 = (struct tagHID_PAGEONLY_REQUEST ***)v14;
    v14 = (struct tagHID_PAGEONLY_REQUEST **)*v14;
    if ( !*((_DWORD *)v19 + 5) )
      FreeHidPageOnlyRequest(v19);
  }
  if ( v4 )
    RIMUnlockExclusive(v4);
}
