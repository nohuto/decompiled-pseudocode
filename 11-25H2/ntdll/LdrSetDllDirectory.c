/*
 * XREFs of LdrSetDllDirectory @ 0x1800804E0
 * Callers:
 *     LdrpInitializePolicy @ 0x1800FA190 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAbFreeKernelEntry @ 0x180047D90 (RtlpAbFreeKernelEntry.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     wcschr @ 0x180129180 (wcschr.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  wchar_t *Buffer; // rcx
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // r8d
  char *v6; // rcx
  signed __int8 v7; // cf
  signed __int64 v8; // rax
  char *v9; // rdx
  unsigned int j; // ecx
  char *v11; // rdi
  char *v12; // rdx
  unsigned int k; // r8d
  char *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  signed __int64 v17; // rax
  char *v18; // rdx
  unsigned int m; // ecx
  char *v20; // r14
  bool v21; // zf
  __int64 v22; // rdx
  signed __int64 v23; // rcx
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  _RTL_SRWLOCK *v26; // rsi
  _QWORD *v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  signed __int64 v30; // rax
  __int64 v31; // rdx
  signed __int64 v32; // rcx
  signed __int64 v33; // rdx
  signed __int64 v34; // rtt
  _RTL_SRWLOCK *v35; // r14
  _QWORD *v36; // r9
  __int64 v37; // r8
  __int64 v38; // rax
  signed __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rbp
  __int64 v43; // rcx
  signed __int64 v44; // rax
  signed __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING v49; // [rsp+30h] [rbp-28h]

  DestinationString = 0LL;
  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( Buffer )
  {
    if ( !wcschr(Buffer, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, DllDirectory->Buffer) )
        return -1073741801;
      goto LABEL_6;
    }
    return -1073741811;
  }
LABEL_6:
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v6 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v6 )
      {
        if ( v6 )
          *(_QWORD *)v6 = &LdrpDllDirectoryLock;
        break;
      }
    }
  }
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&LdrpDllDirectoryLock, 0LL);
  if ( v7 )
    RtlpAcquireSRWLockExclusiveContended(&LdrpDllDirectoryLock);
  v49 = LdrpDllDirectory;
  LdrpDllDirectory = DestinationString;
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, 0LL, 1LL);
  if ( v8 != 1 )
  {
    do
    {
      v22 = 3LL;
      v23 = v8 & 6;
      if ( v23 != 2 )
        v22 = -1LL;
      v24 = v8 + v22;
      v25 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, v24, v8);
    }
    while ( v25 != v8 );
    if ( v23 == 2 )
    {
      v26 = &LdrpDllDirectoryLock;
      while ( 1 )
      {
        while ( (v24 & 1) != 0 )
        {
          v44 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, v24 - 4, v24);
          v21 = v24 == v44;
          v24 = v44;
          if ( v21 )
            goto LABEL_15;
        }
        v27 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0uLL);
        v28 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v28 )
        {
          do
          {
            v46 = v27;
            v27 = (_QWORD *)*v27;
            v27[2] = v46;
            v28 = v27[1];
          }
          while ( !v28 );
          if ( v27 != (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v28;
        }
        if ( (*(_DWORD *)(v28 + 36) & 1) != 0 )
        {
          v29 = *(_QWORD *)(v28 + 16);
          if ( v29 )
            break;
        }
        v26 = 0LL;
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, 0LL, v24);
        v21 = v24 == v30;
        v24 = v30;
        if ( v21 )
          goto LABEL_79;
      }
      *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v29;
      *(_QWORD *)(v28 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpDllDirectoryLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_79:
        v40 = *(_QWORD *)(v28 + 16);
        v41 = *(_QWORD *)(v28 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v28 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v28 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v41, v26, v28, v27);
        v28 = v40;
      }
      while ( v40 );
    }
  }
LABEL_15:
  v9 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v9 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v11 = &v9[8 * j];
      if ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpDllDirectoryLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v11 )
        {
          *v11 |= 2u;
          if ( v11[7] < 0 )
            RtlpAbFreeKernelEntry((__int64)&v9[8 * j]);
          *(_QWORD *)v11 = 0LL;
        }
        break;
      }
    }
  }
  v12 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v12 )
  {
    for ( k = 0; k < 8; ++k )
    {
      v14 = &v12[8 * k];
      if ( !*(_QWORD *)v14 )
      {
        if ( v14 )
          *(_QWORD *)v14 = &RtlpCachedPathLock;
        break;
      }
    }
  }
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&RtlpCachedPathLock, 0LL);
  if ( v7 )
    RtlpAcquireSRWLockExclusiveContended(&RtlpCachedPathLock);
  v15 = (_QWORD *)RtlpDllSearchPath;
  RtlpDllSearchPath = 0LL;
  if ( v15 )
  {
    v21 = v15[10]-- == 1LL;
    if ( !v21 )
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = (_QWORD *)RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v16 )
  {
    v21 = v16[10]-- == 1LL;
    if ( !v21 )
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, 0LL, 1LL);
  if ( v17 != 1 )
  {
    do
    {
      v31 = 3LL;
      v32 = v17 & 6;
      if ( v32 != 2 )
        v31 = -1LL;
      v33 = v17 + v31;
      v34 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, v33, v17);
    }
    while ( v34 != v17 );
    if ( v32 == 2 )
    {
      v35 = &RtlpCachedPathLock;
      while ( 1 )
      {
        while ( (v33 & 1) != 0 )
        {
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, v33 - 4, v33);
          v21 = v33 == v45;
          v33 = v45;
          if ( v21 )
            goto LABEL_43;
        }
        v36 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0uLL);
        v37 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v37 )
        {
          do
          {
            v47 = v36;
            v36 = (_QWORD *)*v36;
            v36[2] = v47;
            v37 = v36[1];
          }
          while ( !v37 );
          if ( v36 != (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v37;
        }
        if ( (*(_DWORD *)(v37 + 36) & 1) != 0 )
        {
          v38 = *(_QWORD *)(v37 + 16);
          if ( v38 )
            break;
        }
        v35 = 0LL;
        v39 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, 0LL, v33);
        v21 = v33 == v39;
        v33 = v39;
        if ( v21 )
          goto LABEL_84;
      }
      *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v38;
      *(_QWORD *)(v37 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&RtlpCachedPathLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_84:
        v42 = *(_QWORD *)(v37 + 16);
        v43 = *(_QWORD *)(v37 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v37 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v37 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v43, v35, v37, v36);
        v37 = v42;
      }
      while ( v42 );
    }
  }
LABEL_43:
  v18 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v18 )
  {
    for ( m = 0; m < 8; ++m )
    {
      v20 = &v18[8 * m];
      if ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&RtlpCachedPathLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v20 )
        {
          *v20 |= 2u;
          if ( v20[7] < 0 )
            RtlpAbFreeKernelEntry((__int64)&v18[8 * m]);
          *(_QWORD *)v20 = 0LL;
        }
        break;
      }
    }
  }
  if ( v49.Buffer )
    RtlpSysVolFree(v49.Buffer);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( v16 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  return 1;
}
