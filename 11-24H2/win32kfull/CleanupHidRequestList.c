/*
 * XREFs of CleanupHidRequestList @ 0x140272460
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x140110BAC (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     FreeHidTLCInfo @ 0x140130000 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401F386C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401FBB7C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall CleanupHidRequestList(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v13,
    (struct _KTHREAD **)(UserSessionState + 104));
  v7 = *(_QWORD **)(W32GetUserSessionState(v4, v3) + 192);
  while ( v7 != (_QWORD *)(W32GetUserSessionState(v6, v5) + 192) )
  {
    v6 = v7;
    v7 = (_QWORD *)*v7;
    *((_DWORD *)v6 + 10) = 0;
    *((_DWORD *)v6 + 9) = 0;
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 6) = 0;
    if ( !*((_DWORD *)v6 + 5) )
      FreeHidTLCInfo(v6, v5);
  }
  while ( 1 )
  {
    v9 = W32GetUserSessionState(v8, v5);
    if ( *(_QWORD *)(v9 + 208) == v9 + 208 )
      break;
    v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 208);
    *(_DWORD *)(v12 + 20) = 0;
    FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST ***)v12);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
}
