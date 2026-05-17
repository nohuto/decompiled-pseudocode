/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1800166E0
 * Callers:
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800092B0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180009490 (RtlGuardCheckExceptionHandler.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     RtlLookupFunctionTable @ 0x180015080 (RtlLookupFunctionTable.c)
 *     RtlLookupFunctionEntry @ 0x180015110 (RtlLookupFunctionEntry.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180016540 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlPcToFileHeader @ 0x18006EF40 (RtlPcToFileHeader.c)
 *     RtlGuardCheckImageBase @ 0x1800D8A50 (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800DBF00 (RtlpImageDirectoryEntryToData32.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // rdi
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // r8d
  char *v8; // rcx
  signed __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  char *v13; // r10
  unsigned __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  char *v17; // rdx
  unsigned int k; // ecx
  char *v19; // rsi
  signed __int64 v21; // r8
  signed __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 j; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // rax
  __int64 *v29; // r14
  _QWORD *v30; // r9
  __int64 v31; // r8
  __int64 v32; // rax
  signed __int64 v33; // rax
  unsigned __int64 v34; // rdx
  bool v35; // si
  unsigned __int64 v36; // rbp
  int v37; // eax
  __int64 v38; // rcx
  int v39; // edx
  __int16 v40; // ax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rcx
  signed __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  _QWORD *v47; // rax
  __int128 v48; // [rsp+30h] [rbp-48h] BYREF
  __int64 v49; // [rsp+40h] [rbp-38h]
  __int64 v50; // [rsp+88h] [rbp+10h] BYREF
  __int64 v51; // [rsp+90h] [rbp+18h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( !v3 )
  {
LABEL_55:
    v49 = 0LL;
    v48 = 0LL;
    if ( (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int128 *, __int64, _QWORD))ZwQueryVirtualMemory)(
                -1LL,
                a1,
                6LL,
                &v48,
                24LL,
                0LL) < 0
      || (v34 = v48) == 0
      || (v49 & 2) != 0
      || (v49 & 1) != 0
      || a1 < (unsigned __int64)v48 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      *(_DWORD *)(a2 + 16) = DWORD2(v48);
      *(_QWORD *)(a2 + 8) = v34;
      if ( v34 )
      {
        v50 = 0LL;
        v35 = 1;
        v51 = 0LL;
        v36 = v34;
        v5 = 0LL;
        if ( (v34 & 3) != 0 )
        {
          v36 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
          v35 = (v34 & 1) == 0;
        }
        v37 = RtlImageNtHeaderEx(1LL, v36, 0LL, &v50);
        v38 = v50;
        v39 = v37;
        if ( v50 )
        {
          v40 = *(_WORD *)(v50 + 24);
          if ( v40 == 267 )
          {
            v45 = RtlpImageDirectoryEntryToData32(v36, v35, 3, (int)a2 + 20, v50, (__int64)&v51);
            v5 = v51;
            v39 = v45;
          }
          else if ( v40 == 523 && *(_DWORD *)(v50 + 132) > 3u )
          {
            v41 = *(unsigned int *)(v50 + 160);
            if ( (_DWORD)v41 )
            {
              *(_DWORD *)(a2 + 20) = *(_DWORD *)(v50 + 164);
              if ( v35 || (unsigned int)v41 < *(_DWORD *)(v38 + 84) )
              {
                v5 = v41 + v36;
                v39 = 0;
              }
              else
              {
                v5 = RtlAddressInSectionTable(v38, v36, (unsigned int)v41);
                v46 = 0;
                if ( !v5 )
                  v46 = -1073741811;
                v39 = v46;
              }
            }
            else
            {
              v39 = -1073741822;
            }
          }
          else
          {
            v39 = -1073741811;
          }
        }
        if ( v39 < 0 )
          v5 = 0LL;
        if ( !v5 )
          *(_DWORD *)(a2 + 20) = 0;
        *(_QWORD *)a2 = v5;
      }
    }
    return v5;
  }
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v8 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v8 )
      {
        if ( v8 )
          *(_QWORD *)v8 = &LdrpInvertedFunctionTableSRWLock;
        break;
      }
    }
  }
  v9 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
  if ( v9 )
    RtlpAcquireSRWLockSharedContended(&LdrpInvertedFunctionTableSRWLock, SchedulerSharedDataSlot, v9);
  if ( LdrpInvertedFunctionTables[0] != 1 )
  {
    v10 = 1;
    v11 = LdrpInvertedFunctionTables[0] - 1;
    while ( v11 >= v10 )
    {
      v12 = (v10 + v11) >> 1;
      v13 = (char *)&xmmword_1801E7440 + 24 * v12;
      v14 = *((_QWORD *)v13 + 1);
      if ( a1 < v14 )
      {
        if ( !v12 )
          break;
        v11 = v12 - 1;
      }
      else
      {
        if ( a1 < v14 + *((unsigned int *)v13 + 4) )
        {
          *(_OWORD *)a2 = *(_OWORD *)v13;
          *(_QWORD *)(a2 + 16) = *((_QWORD *)v13 + 2);
          v5 = *(_QWORD *)a2;
          break;
        }
        v10 = v12 + 1;
      }
    }
  }
  v15 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
  v16 = v15;
  if ( v15 != 17 )
  {
    if ( (v15 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v16 & 2) == 0 )
    {
      v21 = 0LL;
      if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v21 = v16 - 16;
      v22 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v21, v16);
      v3 = v16 == v22;
      v16 = v22;
      if ( v3 )
        goto LABEL_20;
    }
    if ( (v16 & 8) != 0 )
    {
      v23 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( j = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v23[1] )
        v23 = (_QWORD *)*v23;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
        goto LABEL_20;
      v25 = -9LL;
    }
    else
    {
      v25 = -1LL;
    }
    while ( 1 )
    {
      if ( (v16 & 4) != 0 || (v26 = v25 + 4, (v16 & 2) == 0) )
        v26 = v25;
      v27 = v26 + v16;
      v28 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v26 + v16, v16);
      if ( v16 == v28 )
        break;
      v16 = v28;
    }
    if ( (v16 & 6) == 2 )
    {
      v29 = &LdrpInvertedFunctionTableSRWLock;
      while ( 1 )
      {
        while ( (v27 & 1) != 0 )
        {
          v44 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v27 - 4, v27);
          v3 = v27 == v44;
          v27 = v44;
          if ( v3 )
            goto LABEL_20;
        }
        v30 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0uLL);
        v31 = *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v31 )
        {
          do
          {
            v47 = v30;
            v30 = (_QWORD *)*v30;
            v30[2] = v47;
            v31 = v30[1];
          }
          while ( !v31 );
          if ( v30 != (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
        }
        if ( (*(_DWORD *)(v31 + 36) & 1) != 0 )
        {
          v32 = *(_QWORD *)(v31 + 16);
          if ( v32 )
            break;
        }
        v29 = 0LL;
        v33 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, v27);
        v3 = v27 == v33;
        v27 = v33;
        if ( v3 )
          goto LABEL_76;
      }
      *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v32;
      *(_QWORD *)(v31 + 16) = 0LL;
      _InterlockedAnd64(&LdrpInvertedFunctionTableSRWLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_76:
        v42 = *(_QWORD *)(v31 + 16);
        v43 = *(_QWORD *)(v31 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v31 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v31 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v43, v29, v31, v30);
        v31 = v42;
      }
      while ( v42 );
    }
  }
LABEL_20:
  v17 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v17 )
  {
    for ( k = 0; k < 8; ++k )
    {
      v19 = &v17[8 * k];
      if ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpInvertedFunctionTableSRWLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v19 )
        {
          *v19 |= 2u;
          if ( v19[7] < 0 )
          {
            v48 = (unsigned __int64)((v19 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3);
            NtSetInformationThread(-2LL, 56LL, &v48);
          }
          *(_QWORD *)v19 = 0LL;
        }
        break;
      }
    }
  }
  if ( !v5 && byte_1801E743C )
    goto LABEL_55;
  return v5;
}
