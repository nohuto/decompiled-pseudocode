/*
 * XREFs of SshNotifySystemSessionChange @ 0x140A489D8
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     SshpQueryAndResetBlockerAccounting @ 0x140478884 (SshpQueryAndResetBlockerAccounting.c)
 *     SshpDereferenceBlocker @ 0x14047CBC0 (SshpDereferenceBlocker.c)
 *     SshpReferenceBlocker @ 0x14048530C (SshpReferenceBlocker.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 *     SshpWriteBlocker @ 0x14048B408 (SshpWriteBlocker.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SshpFlushBlockerDataCache @ 0x140A48E10 (SshpFlushBlockerDataCache.c)
 */

__int64 __fastcall SshNotifySystemSessionChange(int a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // cl
  char *v6; // rbx
  __int64 v7; // r14
  int v8; // r12d
  int v9; // eax
  int v10; // edi
  int v11; // r15d
  int v12; // ebx
  __int64 result; // rax
  char v14; // al
  volatile signed __int32 *v15; // r13
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rsi
  char *v19; // rsi
  char v20; // r12
  KSPIN_LOCK *v21; // r14
  __int64 *v22; // rax
  signed __int8 v23; // cf
  __int64 *v24; // rbx
  __int64 i; // rdi
  volatile signed __int64 *v26; // rsi
  __int64 *v27; // rax
  __int64 *v28; // rbx
  __int64 *v29; // rbx
  __int64 v30; // rsi
  unsigned int j; // r14d
  __int64 v32; // r12
  __int64 *v33; // rcx
  void *v34; // rcx
  char v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+4Ch] [rbp-BCh]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  unsigned int v38; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+5Ch] [rbp-ACh]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  PVOID v41; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h]
  _BOOL8 v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  __int64 v45; // [rsp+88h] [rbp-80h]
  ULONG v46; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v47; // [rsp+9Ch] [rbp-6Ch]
  _QWORD v48[33]; // [rsp+A0h] [rbp-68h]
  _OWORD v49[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v50[8]; // [rsp+228h] [rbp+120h] BYREF

  v45 = a2;
  v2 = a1;
  v36 = a1;
  memset_0(v50, 0, sizeof(v50));
  memset_0(&v46, 0, 0x108uLL);
  v35 = 0;
  memset_0(v49, 0, sizeof(v49));
  v3 = SshpSessionId;
  v44 = SshpSessionId;
  v4 = SshpSessionId;
  v37 = SshpSessionId;
  if ( SshpSessionType == 2 )
  {
    v4 = SshpSessionId - 1;
    v37 = SshpSessionId - 1;
  }
  v41 = 0LL;
  v5 = v2;
  v38 = 0;
  v6 = (char *)&unk_140E0827C;
  v7 = 9LL;
  v8 = 1 << v5;
  v39 = 1 << v5;
  v40 = 9LL;
  do
  {
    v9 = (unsigned __int8)*(v6 - 2);
    v10 = v9 & (1 << SshpSessionType);
    v11 = v8 & v9;
    if ( (v8 & v9) != 0 || v10 )
    {
      v14 = *(v6 - 3);
      v15 = (volatile signed __int32 *)(v6 - 28);
      v16 = v3;
      if ( !v14 )
        v16 = v4;
      v42 = v16;
      v43 = v14 != 0;
      v17 = KeAbPreAcquire((__int64)(v6 - 28), 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64(v15, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 - 28), v17, (__int64)(v6 - 28));
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      v19 = *(char **)(v6 + 4);
      *(_DWORD *)v6 = *(_DWORD *)v6 & 0xFFFFFFFD | (v11 != 0 ? 2 : 0);
      if ( v19 != v6 + 4 )
      {
        v20 = v42;
        do
        {
          v21 = (KSPIN_LOCK *)*((_QWORD *)v19 + 12);
          SshpQueryAndResetBlockerAccounting(v21, v50, v49, &v35);
          if ( v10 )
            SshpWriteBlocker((__int64)v21, (ULONGLONG)v50, (ULONGLONG)v49, v35, v20, v43, &v41, &v38);
          if ( v11 )
          {
            if ( !v10 )
              SshpReferenceBlocker(v21, 1);
          }
          else if ( v10 )
          {
            SshpDereferenceBlocker(v21, 1, 0);
          }
          v19 = *(char **)v19;
        }
        while ( v19 != v6 + 4 );
        v8 = v39;
        v15 = (volatile signed __int32 *)(v6 - 28);
        v7 = v40;
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v15);
      v3 = v44;
    }
    v4 = v37;
    v6 += 48;
    v40 = --v7;
  }
  while ( v7 );
  if ( SshpSessionType == 2 || (v12 = v36, SshpSessionType == 1) && v36 != 2 )
  {
    memset_0(&v46, 0, 0x108uLL);
    v22 = KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL);
    v24 = v22;
    if ( v23 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v22, (__int64)&SshpLibraryListLock);
    if ( v24 )
      *((_BYTE *)v24 + 10) = 1;
    for ( i = SshpLibraryList; (__int64 *)i != &SshpLibraryList; i = *(_QWORD *)i )
    {
      v26 = (volatile signed __int64 *)(i + 16);
      v27 = KeAbPreAcquire(i + 16, 0LL);
      v28 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 16), v27, i + 16);
      if ( v28 )
        *((_BYTE *)v28 + 10) = 1;
      v46 = *(_DWORD *)(i + 24);
      v29 = *(__int64 **)(i + 168);
      if ( v29 != (__int64 *)(i + 168) )
      {
        v30 = v37;
        do
        {
          for ( j = 0; j < *((_DWORD *)v29 + 10); ++j )
          {
            if ( v47 >= 8 )
              SshpFlushBlockerDataCache(&v46, v30);
            v32 = 4LL * v47;
            v33 = &v29[4 * j + 6];
            v48[v32 + 1] = v29 + 3;
            v48[v32] = v33;
            *(_OWORD *)&v48[v32 + 2] = 0LL;
            if ( (int)guard_dispatch_icall_no_overrides(v33[2]) < 0 )
            {
              v34 = (void *)v48[v32 + 3];
              if ( v34 )
                CmpFreeTransientPoolWithTag(v34, v46);
            }
            else
            {
              ++v47;
            }
          }
          v29 = (__int64 *)*v29;
        }
        while ( v29 != (__int64 *)(i + 168) );
        v26 = (volatile signed __int64 *)(i + 16);
      }
      SshpFlushBlockerDataCache(&v46, v37);
      SSHSupportReleasePushLockExclusive(v26);
    }
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
    v12 = v36;
  }
  if ( v41 )
    CmpFreeTransientPoolWithTag(v41, 0x70687373u);
  result = v45;
  SshpSessionId = v45;
  SshpSessionType = v12;
  return result;
}
