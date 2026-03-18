/*
 * XREFs of ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x140188B00
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109410 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F2C4 (-HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z.c)
 */

char __fastcall CPTPProcessor::UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1, struct tagPTPMOUSEEVENT *a2, bool *a3)
{
  struct W32_PUSH_LOCK *v6; // rbx
  char v7; // bp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 UserSessionState; // rsi
  _BYTE *v12; // r12
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  __int64 v24; // rax
  bool v25; // dl
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // [rsp+60h] [rbp+18h]

  v6 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1) + 3344);
  W32AcquirePushLockExclusiveEx(v6, 0);
  v7 = 0;
  *a3 = 0;
  UserSessionState = W32GetUserSessionState(v8);
  if ( !*(_DWORD *)(UserSessionState + 3340) )
  {
    W32ReleasePushLockExclusiveEx(v6, 0LL);
    return 0;
  }
  v12 = (_BYTE *)(W32GetUserSessionState(v9) + 3336);
  v30 = v12;
  v13 = (*v12 - *(_BYTE *)(UserSessionState + 3340) + 1) & 0x3F;
  v15 = W32GetUserSessionState(v14);
  v16 = 128LL;
  v17 = v15 + 136LL * v13 + 3360;
  *(_OWORD *)a1 = *(_OWORD *)v17;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v17 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(v17 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(v17 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(v17 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(v17 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(v17 + 96);
  *((_OWORD *)a1 + 7) = *(_OWORD *)(v17 + 112);
  *((_QWORD *)a1 + 16) = *(_QWORD *)(v17 + 128);
  if ( (*((_WORD *)a1 + 6) & 0xF3FF) == 0 )
    goto LABEL_7;
  v18 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v19 = (v18 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v20 = W32GetUserSessionState(v18);
  W32GetUserSessionState(v21);
  v22 = v19 - *(_QWORD *)(v20 + 3352);
  if ( v22 >= 0x32 )
  {
    *(_QWORD *)(v20 + 3352) = v19;
    v12 = v30;
LABEL_7:
    v26 = *(_DWORD *)(UserSessionState + 3340) - 1;
    *(_DWORD *)(UserSessionState + 3340) = v26;
    if ( v26 )
    {
      v27 = ((unsigned __int8)*(_DWORD *)v12 - (_BYTE)v26 + 1) & 0x3F;
      v28 = W32GetUserSessionState(v16);
      *a3 = 1;
      v29 = v28 + 3360 + 136LL * v27;
      *(_OWORD *)a2 = *(_OWORD *)v29;
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v29 + 16);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v29 + 32);
      *((_OWORD *)a2 + 3) = *(_OWORD *)(v29 + 48);
      *((_OWORD *)a2 + 4) = *(_OWORD *)(v29 + 64);
      *((_OWORD *)a2 + 5) = *(_OWORD *)(v29 + 80);
      *((_OWORD *)a2 + 6) = *(_OWORD *)(v29 + 96);
      *((_OWORD *)a2 + 7) = *(_OWORD *)(v29 + 112);
      *((_QWORD *)a2 + 16) = *(_QWORD *)(v29 + 128);
    }
    v7 = 1;
    goto LABEL_10;
  }
  v23 = 50 - v22;
  v24 = W32GetUserSessionState(v16);
  CHidInput::HandlePTPDeferredMouseInputTimer(*(CHidInput **)(v24 + 16840), v25, v23);
LABEL_10:
  W32ReleasePushLockExclusiveEx(v6, 0LL);
  return v7;
}
