/*
 * XREFs of SshNotifySystemSessionChange @ 0x140A4B418
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     SshpQueryAndResetBlockerAccounting @ 0x1404793B0 (SshpQueryAndResetBlockerAccounting.c)
 *     SshpDereferenceBlocker @ 0x14047C6F0 (SshpDereferenceBlocker.c)
 *     SshpReferenceBlocker @ 0x140485B6C (SshpReferenceBlocker.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     SshpWriteBlocker @ 0x14048ABA0 (SshpWriteBlocker.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SshpFlushBlockerDataCache @ 0x140A4B850 (SshpFlushBlockerDataCache.c)
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
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  char *v19; // rsi
  char v20; // r12
  KSPIN_LOCK *v21; // r14
  _QWORD *v22; // rax
  signed __int8 v23; // cf
  _QWORD *v24; // rbx
  __int64 i; // rdi
  volatile signed __int64 *v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rbx
  __int64 *v31; // rbx
  __int64 v32; // rsi
  unsigned int j; // r14d
  __int64 v34; // r12
  __int64 *v35; // rcx
  void *v36; // rcx
  char v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  unsigned int v40; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+5Ch] [rbp-ACh]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  PVOID v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h]
  _BOOL8 v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  ULONG v48; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v49; // [rsp+9Ch] [rbp-6Ch]
  _QWORD v50[33]; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v51[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v52[8]; // [rsp+228h] [rbp+120h] BYREF

  v47 = a2;
  v2 = a1;
  v38 = a1;
  memset_0(v52, 0, sizeof(v52));
  memset_0(&v48, 0, 0x108uLL);
  v37 = 0;
  memset_0(v51, 0, sizeof(v51));
  v3 = SshpSessionId;
  v46 = SshpSessionId;
  v4 = SshpSessionId;
  v39 = SshpSessionId;
  if ( SshpSessionType == 2 )
  {
    v4 = SshpSessionId - 1;
    v39 = SshpSessionId - 1;
  }
  v43 = 0LL;
  v5 = v2;
  v40 = 0;
  v6 = (char *)&unk_140E0835C;
  v7 = 9LL;
  v8 = 1 << v5;
  v41 = 1 << v5;
  v42 = 9LL;
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
      v44 = v16;
      v45 = v14 != 0;
      v17 = KeAbPreAcquire((__int64)(v6 - 28), 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64(v15, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 - 28), (__int64)v17, (__int64)(v6 - 28));
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      v19 = *(char **)(v6 + 4);
      *(_DWORD *)v6 = *(_DWORD *)v6 & 0xFFFFFFFD | (v11 != 0 ? 2 : 0);
      if ( v19 != v6 + 4 )
      {
        v20 = v44;
        do
        {
          v21 = (KSPIN_LOCK *)*((_QWORD *)v19 + 12);
          SshpQueryAndResetBlockerAccounting(v21, v52, v51, &v37);
          if ( v10 )
            SshpWriteBlocker((__int64)v21, (ULONGLONG)v52, (ULONGLONG)v51, v37, v20, v45, &v43, &v40);
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
        v8 = v41;
        v15 = (volatile signed __int32 *)(v6 - 28);
        v7 = v42;
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v15);
      v3 = v46;
    }
    v4 = v39;
    v6 += 48;
    v42 = --v7;
  }
  while ( v7 );
  if ( SshpSessionType == 2 || (v12 = v38, SshpSessionType == 1) && v38 != 2 )
  {
    memset_0(&v48, 0, 0x108uLL);
    v22 = KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL);
    v24 = v22;
    if ( v23 )
      ExfAcquirePushLockExclusiveEx(&SshpLibraryListLock, (__int64)v22, (__int64)&SshpLibraryListLock);
    if ( v24 )
      *((_BYTE *)v24 + 10) = 1;
    for ( i = SshpLibraryList; (__int64 *)i != &SshpLibraryList; i = *(_QWORD *)i )
    {
      v26 = (volatile signed __int64 *)(i + 16);
      v27 = KeAbPreAcquire(i + 16, 0LL);
      v30 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 16), (__int64)v27, i + 16);
      if ( v30 )
        *((_BYTE *)v30 + 10) = 1;
      v48 = *(_DWORD *)(i + 24);
      v31 = *(__int64 **)(i + 168);
      if ( v31 != (__int64 *)(i + 168) )
      {
        v32 = v39;
        do
        {
          for ( j = 0; j < *((_DWORD *)v31 + 10); ++j )
          {
            if ( v49 >= 8 )
              SshpFlushBlockerDataCache(&v48, v32);
            v34 = 4LL * v49;
            v35 = &v31[4 * j + 6];
            v50[v34 + 1] = v31 + 3;
            v50[v34] = v35;
            *(_OWORD *)&v50[v34 + 2] = 0LL;
            if ( (int)guard_dispatch_icall_no_overrides(v35[2], &v50[v34 + 2], v28, v29) < 0 )
            {
              v36 = (void *)v50[v34 + 3];
              if ( v36 )
                CmpFreeTransientPoolWithTag(v36, v48);
            }
            else
            {
              ++v49;
            }
          }
          v31 = (__int64 *)*v31;
        }
        while ( v31 != (__int64 *)(i + 168) );
        v26 = (volatile signed __int64 *)(i + 16);
      }
      SshpFlushBlockerDataCache(&v48, v39);
      SSHSupportReleasePushLockExclusive(v26);
    }
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
    v12 = v38;
  }
  if ( v43 )
    CmpFreeTransientPoolWithTag(v43, 0x70687373u);
  result = v47;
  SshpSessionId = v47;
  SshpSessionType = v12;
  return result;
}
