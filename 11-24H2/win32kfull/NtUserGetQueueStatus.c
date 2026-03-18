/*
 * XREFs of NtUserGetQueueStatus @ 0x140065820
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x140066188 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140287C28 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetQueueStatus(__int16 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r14
  __int64 i; // rcx
  const struct tagTHREADINFO **v9; // rax
  const struct tagTHREADINFO *v10; // rdi
  int v11; // esi
  int v12; // r15d
  unsigned int DLT; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // esi
  char *v22; // rdi
  tagDomLock *v23; // rcx
  tagObjLock **v24; // rdi
  __int16 v25; // ax
  __int16 v26; // r8
  unsigned int v27; // ebx
  struct tagWND *v29; // rcx
  int v30; // [rsp+30h] [rbp-51h]
  int v31; // [rsp+48h] [rbp-39h] BYREF
  __int64 v32; // [rsp+50h] [rbp-31h] BYREF
  struct _FILE_IO_COMPLETION_INFORMATION v33; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v34[8]; // [rsp+78h] [rbp-9h] BYREF
  tagDomLock *DomainLockRef; // [rsp+80h] [rbp-1h]
  char v36; // [rsp+88h] [rbp+7h] BYREF
  __int64 v37; // [rsp+90h] [rbp+Fh]
  char v38; // [rsp+98h] [rbp+17h]
  __int128 v39; // [rsp+A0h] [rbp+1Fh] BYREF
  char v40; // [rsp+B0h] [rbp+2Fh]

  EnterLeaveCritShared::EnterLeaveCritShared(v34, 1LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v3, v2);
  v6 = 0;
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v7 + 8LL * (unsigned int)i + 1656) )
    {
      if ( (a1 & 8) != 0 )
      {
        v9 = (const struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(i, v5);
        if ( v9 )
          v10 = *v9;
        else
          v10 = 0LL;
        v31 = 0;
        memset(&v33, 0, sizeof(v33));
        v32 = 0LL;
        v11 = 0;
        ZwSetIoCompletionEx(*((_QWORD *)v10 + 202), *((_QWORD *)v10 + 206), 0LL, -2147483647LL, 0, 0LL);
        while ( 1 )
        {
          LOBYTE(v30) = 0;
          if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v10 + 202), &v33, 1LL, &v31, &v32, v30) )
            break;
          if ( ((__int64)v33.ApcContext & 0x80000000) != 0 )
          {
            if ( LODWORD(v33.ApcContext) != 0x80000000 )
              break;
            v11 = 1;
          }
          else
          {
            if ( v33.ApcContext >= (PVOID)2
              || (v29 = (struct tagWND *)*((_QWORD *)v10 + (__int64)v33.ApcContext + 207)) == 0LL )
            {
              BroadcastCoreMessagingApcContextError(v10, (unsigned __int64)v33.ApcContext);
              break;
            }
            xxxHandleCoreMessagingQueueCompletion(v29, &v33, 0x80000000uLL);
          }
        }
        if ( v11 )
          ZwAssociateWaitCompletionPacket(
            *((_QWORD *)v10 + 205),
            *((_QWORD *)v10 + 202),
            *((_QWORD *)v10 + 204),
            0LL,
            0xFFFFFFFF80000000uLL,
            0,
            0LL,
            0LL);
      }
      break;
    }
  }
  v12 = a1 & 0x5DFF;
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v36 = 0;
  UserSessionState = W32GetUserSessionState(v15, v14);
  v38 = 0;
  v40 = 0;
  v37 = UserSessionState + 42424;
  v39 = 0LL;
  v19 = W32GetUserSessionState(v18, v17);
  v20 = 0LL;
  if ( v7 != v19 + 42088 )
    v20 = v7 + 432;
  *(_QWORD *)&v39 = v20;
  if ( !v40 )
  {
    v21 = 0;
    v22 = &v36;
    do
    {
      v23 = (tagDomLock *)*((_QWORD *)v22 - 1);
      if ( v23 )
      {
        if ( *v22 )
          tagDomLock::LockExclusive(v23);
        else
          tagDomLock::LockShared(v23);
      }
      ++v21;
      v22 += 16;
    }
    while ( !v21 );
    v24 = (tagObjLock **)&v39;
    do
    {
      if ( *v24 )
        tagObjLock::LockExclusive(*v24);
      ++v6;
      ++v24;
    }
    while ( !v6 );
    v40 = 1;
  }
  INTERLOCKEDINT::operator int(*(_QWORD *)(v7 + 488) + 4LL);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v7 + 488) + 4LL), ~v12);
  v25 = INTERLOCKEDINT::operator int(*(_QWORD *)(v7 + 488) + 8LL);
  v27 = (unsigned __int16)(v12 & v26) | ((unsigned __int16)(v12 & v25) << 16);
  if ( v40 )
  {
    if ( (_QWORD)v39 )
      tagObjLock::UnLockExclusive((tagObjLock *)v39);
    if ( DomainLockRef )
    {
      if ( v36 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v27;
}
