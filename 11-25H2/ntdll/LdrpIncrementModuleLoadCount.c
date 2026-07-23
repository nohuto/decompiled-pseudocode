/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180047B20
 * Callers:
 *     LdrAddRefDll @ 0x18003D580 (LdrAddRefDll.c)
 *     LdrpFastpthReloadedDll @ 0x180047890 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x180049800 (LdrGetDllHandleEx.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByMapping @ 0x18006CD70 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800711A0 (LdrGetDllHandleByName.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180047D90 (RtlpAbFreeKernelEntry.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1)
{
  unsigned int v2; // esi
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // eax
  char *v5; // rdx
  __int64 v7; // rcx
  int v8; // eax
  signed __int64 v9; // rax
  char *v10; // rdx
  unsigned int j; // ecx
  char *v12; // rbx
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  _RTL_SRWLOCK *v18; // rbp
  unsigned __int64 v19; // r9
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  signed __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  signed __int64 v27; // rax
  _QWORD *v28; // rax

  v2 = 0;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v5 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v5 )
      {
        if ( v5 )
          *(_QWORD *)v5 = &LdrpModuleDatatableLock;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
  v7 = *(_QWORD *)(a1 + 152);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 != -1 )
  {
    if ( v8 )
    {
      *(_DWORD *)(v7 + 24) = v8 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v7 + 28);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v9 != 1 )
  {
    do
    {
      v14 = 3LL;
      v15 = v9 & 6;
      if ( v15 != 2 )
        v14 = -1LL;
      v16 = v9 + v14;
      v17 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v16, v9);
    }
    while ( v17 != v9 );
    if ( v15 == 2 )
    {
      v18 = &LdrpModuleDatatableLock;
      while ( 1 )
      {
        while ( (v16 & 1) != 0 )
        {
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v16 - 4, v16);
          v23 = v16 == v27;
          v16 = v27;
          if ( v23 )
            goto LABEL_11;
        }
        v19 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
        v20 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0uLL);
        v21 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v21 )
        {
          do
          {
            v28 = v20;
            v20 = (_QWORD *)*v20;
            v20[2] = v28;
            v21 = v20[1];
          }
          while ( !v21 );
          if ( v20 != (_QWORD *)v19 )
            *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v21;
        }
        if ( (*(_DWORD *)(v21 + 36) & 1) != 0 )
        {
          v22 = *(_QWORD *)(v21 + 16);
          if ( v22 )
            break;
        }
        v18 = 0LL;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, v16);
        v23 = v16 == v24;
        v16 = v24;
        if ( v23 )
          goto LABEL_33;
      }
      *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v22;
      *(_QWORD *)(v21 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_33:
        v25 = *(_QWORD *)(v21 + 16);
        v26 = *(_QWORD *)(v21 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v21 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v21 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v26, v18, v20, v19);
        v21 = v25;
      }
      while ( v25 );
    }
  }
LABEL_11:
  v10 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v10 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v12 = &v10[8 * j];
      if ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpModuleDatatableLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v12 )
        {
          *v12 |= 2u;
          if ( v12[7] < 0 )
            RtlpAbFreeKernelEntry(&v10[8 * j]);
          *(_QWORD *)v12 = 0LL;
        }
        return v2;
      }
    }
  }
  return v2;
}
