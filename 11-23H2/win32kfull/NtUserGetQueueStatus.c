/*
 * XREFs of NtUserGetQueueStatus @ 0x1C0063CB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C0063EF0 (xxxDrainQueueCompletions.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PERESOURCE *v8; // rax
  int v9; // edi
  __int64 v10; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rbx
  unsigned int DLT; // eax
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rbx
  tagDomLock *v20; // rcx
  tagObjLock **v21; // rbx
  tagDomLock *v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  tagDomLock *DomainLockRef; // [rsp+40h] [rbp-48h]
  char v27; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28; // [rsp+50h] [rbp-38h]
  char v29; // [rsp+58h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-28h] BYREF
  char v31; // [rsp+70h] [rbp-18h]

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  v8 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v5, v4, v6, v7);
  v9 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v10 + 1504) && (v3 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v13 = v3 & 0x5DFF;
  v14 = v10 + 392;
  DLT = DLT_THREADINFO::getDLT(v12);
  v16 = 0;
  v30 = 0LL;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v10 + 392 == gObjDummyLock )
    v14 = 0LL;
  *(_QWORD *)&v30 = v14;
  v19 = &v27;
  v27 = 0;
  v28 = gDomainDummyLock;
  v29 = 0;
  v31 = 0;
  do
  {
    v20 = (tagDomLock *)*((_QWORD *)v19 - 1);
    if ( v20 )
    {
      if ( *v19 )
        tagDomLock::LockExclusive(v20);
      else
        tagDomLock::LockShared(v20);
    }
    ++v16;
    v19 += 16;
  }
  while ( !v16 );
  v21 = (tagObjLock **)&v30;
  do
  {
    if ( *v21 )
      tagObjLock::LockExclusive(*v21);
    ++v9;
    ++v21;
  }
  while ( !v9 );
  v22 = *(tagDomLock **)(v10 + 448);
  v31 = 1;
  v23 = *((unsigned int *)v22 + 1);
  _InterlockedAnd((volatile signed __int32 *)v22 + 1, ~v13);
  v24 = (unsigned __int16)(v13 & v23) | ((unsigned __int16)(v13 & (*(_WORD *)(*(_QWORD *)(v10 + 448) + 8LL) | *(_WORD *)(*(_QWORD *)(v10 + 448) + 12LL))) << 16);
  if ( v31 )
  {
    if ( (_QWORD)v30 )
      tagObjLock::UnLockExclusive((tagObjLock *)v30);
    v22 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v27 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  UserSessionSwitchLeaveCrit(v22, v23, v17, v18);
  return v24;
}
