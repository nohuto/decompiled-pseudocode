/*
 * XREFs of DestroyBaseWindow @ 0x1401BE600
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D3570 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     CleanupInputDelegation @ 0x140136650 (CleanupInputDelegation.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401BE4D8 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     HandleBaseWindowDestruction @ 0x140212900 (HandleBaseWindowDestruction.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DestroyBaseWindow(struct _HEAD *a1, __int64 a2)
{
  void (__fastcall *v3)(struct _HEAD *); // rax
  __int64 v4; // rcx
  char **v5; // rsi
  char *v6; // rdi
  __int64 v7; // rax
  __int64 UserSessionState; // rax
  char *v9; // rcx
  char *v10; // rcx

  *((_DWORD *)a1 + 7) |= 0x80u;
  if ( *((_DWORD *)a1 + 18) )
    CleanupInputDelegation((int *)a1);
  v3 = *(void (__fastcall **)(struct _HEAD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7256LL);
  if ( v3 )
    v3(a1);
  if ( *((_QWORD *)a1 + 10) )
  {
    DeleteBaseWindowProperties(a1);
    GreDeleteFastMutex(*((char **)a1 + 10));
    *((_QWORD *)a1 + 10) = 0LL;
  }
  v5 = (char **)((char *)a1 + 96);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (char *)v5 )
      break;
    if ( *((char ***)v6 + 1) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    UserSessionState = W32GetUserSessionState(v4);
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3264), *((_QWORD *)v6 + 2), 7u);
    GreDeleteFastMutex(v6);
  }
  v9 = (char *)*((_QWORD *)a1 + 15);
  if ( v9 )
  {
    GreDeleteFastMutex(v9);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  v10 = (char *)*((_QWORD *)a1 + 17);
  if ( v10 )
  {
    GreDeleteFastMutex(v10);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  return HMDestroyObject(a1);
}
