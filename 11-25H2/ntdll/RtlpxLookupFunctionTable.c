/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1800787D0
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180022AD0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180022CB0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     EtwpProviderArrivalCallback @ 0x1800470F0 (EtwpProviderArrivalCallback.c)
 *     RtlGuardCheckImageBase @ 0x180076B80 (RtlGuardCheckImageBase.c)
 *     RtlPcToFileHeader @ 0x180076C20 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionEntry @ 0x180076C90 (RtlLookupFunctionEntry.c)
 *     RtlLookupFunctionTable @ 0x180077000 (RtlLookupFunctionTable.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180078630 (RtlpLookupFunctionEntryForStackWalks.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800DB470 (RtlpImageDirectoryEntryToData32.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 */

char *__fastcall RtlpxLookupFunctionTable(PVOID BaseAddress, char **a2)
{
  bool v3; // zf
  char *v5; // rdi
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // r8d
  char *v8; // rcx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  char *v12; // r10
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  char *v16; // rdx
  unsigned int k; // ecx
  char *v18; // rsi
  signed __int64 v20; // r8
  signed __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 j; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  _RTL_SRWLOCK *v28; // r14
  _QWORD *v29; // r9
  __int64 v30; // r8
  __int64 v31; // rax
  signed __int64 v32; // rax
  unsigned __int64 v33; // rdx
  bool v34; // si
  char *v35; // rbp
  NTSTATUS v36; // eax
  PIMAGE_NT_HEADERS v37; // rcx
  int v38; // edx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  __int64 v41; // rsi
  __int64 v42; // rcx
  signed __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  _QWORD *v46; // rax
  __int128 MemoryInformation; // [rsp+30h] [rbp-48h] BYREF
  __int64 v48; // [rsp+40h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp+10h] BYREF
  char *v50; // [rsp+90h] [rbp+18h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( !v3 )
  {
LABEL_55:
    v48 = 0LL;
    MemoryInformation = 0LL;
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryImageInformation,
           &MemoryInformation,
           0x18uLL,
           0LL) < 0
      || (v33 = MemoryInformation) == 0
      || (v48 & 2) != 0
      || (v48 & 1) != 0
      || (unsigned __int64)BaseAddress < (unsigned __int64)MemoryInformation )
    {
      a2[1] = 0LL;
    }
    else
    {
      *((_DWORD *)a2 + 4) = DWORD2(MemoryInformation);
      a2[1] = (char *)v33;
      if ( v33 )
      {
        OutHeaders = 0LL;
        v34 = 1;
        v50 = 0LL;
        v35 = (char *)v33;
        v5 = 0LL;
        if ( (v33 & 3) != 0 )
        {
          v35 = (char *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
          v34 = (v33 & 1) == 0;
        }
        v36 = RtlImageNtHeaderEx(1u, v35, 0LL, &OutHeaders);
        v37 = OutHeaders;
        v38 = v36;
        if ( OutHeaders )
        {
          Magic = OutHeaders->OptionalHeader.Magic;
          if ( Magic == 267 )
          {
            v44 = RtlpImageDirectoryEntryToData32((_DWORD)v35, v34, 3, (int)a2 + 20, (__int64)OutHeaders, (__int64)&v50);
            v5 = v50;
            v38 = v44;
          }
          else if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 3 )
          {
            VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[3].VirtualAddress;
            if ( (_DWORD)VirtualAddress )
            {
              *((_DWORD *)a2 + 5) = OutHeaders->OptionalHeader.DataDirectory[3].Size;
              if ( v34 || (unsigned int)VirtualAddress < v37->OptionalHeader.SizeOfHeaders )
              {
                v5 = &v35[VirtualAddress];
                v38 = 0;
              }
              else
              {
                v5 = (char *)RtlAddressInSectionTable(v37, v35, VirtualAddress);
                v45 = 0;
                if ( !v5 )
                  v45 = -1073741811;
                v38 = v45;
              }
            }
            else
            {
              v38 = -1073741822;
            }
          }
          else
          {
            v38 = -1073741811;
          }
        }
        if ( v38 < 0 )
          v5 = 0LL;
        if ( !v5 )
          *((_DWORD *)a2 + 5) = 0;
        *a2 = v5;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(&LdrpInvertedFunctionTableSRWLock);
  if ( LdrpInvertedFunctionTables[0] != 1 )
  {
    v9 = 1;
    v10 = LdrpInvertedFunctionTables[0] - 1;
    while ( v10 >= v9 )
    {
      v11 = (v9 + v10) >> 1;
      v12 = (char *)&xmmword_1801E9430 + 24 * v11;
      v13 = *((_QWORD *)v12 + 1);
      if ( (unsigned __int64)BaseAddress < v13 )
      {
        if ( !v11 )
          break;
        v10 = v11 - 1;
      }
      else
      {
        if ( (unsigned __int64)BaseAddress < v13 + *((unsigned int *)v12 + 4) )
        {
          *(_OWORD *)a2 = *(_OWORD *)v12;
          a2[2] = (char *)*((_QWORD *)v12 + 2);
          v5 = *a2;
          break;
        }
        v9 = v11 + 1;
      }
    }
  }
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
  v15 = v14;
  if ( v14 != 17 )
  {
    if ( (v14 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v15 & 2) == 0 )
    {
      v20 = 0LL;
      if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v20 = v15 - 16;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v20, v15);
      v3 = v15 == v21;
      v15 = v21;
      if ( v3 )
        goto LABEL_20;
    }
    if ( (v15 & 8) != 0 )
    {
      v22 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( j = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v22[1] )
        v22 = (_QWORD *)*v22;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
        goto LABEL_20;
      v24 = -9LL;
    }
    else
    {
      v24 = -1LL;
    }
    while ( 1 )
    {
      if ( (v15 & 4) != 0 || (v25 = v24 + 4, (v15 & 2) == 0) )
        v25 = v24;
      v26 = v25 + v15;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v25 + v15, v15);
      if ( v15 == v27 )
        break;
      v15 = v27;
    }
    if ( (v15 & 6) == 2 )
    {
      v28 = &LdrpInvertedFunctionTableSRWLock;
      while ( 1 )
      {
        while ( (v26 & 1) != 0 )
        {
          v43 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                  v26 - 4,
                  v26);
          v3 = v26 == v43;
          v26 = v43;
          if ( v3 )
            goto LABEL_20;
        }
        v29 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL);
        v30 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v30 )
        {
          do
          {
            v46 = v29;
            v29 = (_QWORD *)*v29;
            v29[2] = v46;
            v30 = v29[1];
          }
          while ( !v30 );
          if ( v29 != (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v30;
        }
        if ( (*(_DWORD *)(v30 + 36) & 1) != 0 )
        {
          v31 = *(_QWORD *)(v30 + 16);
          if ( v31 )
            break;
        }
        v28 = 0LL;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, v26);
        v3 = v26 == v32;
        v26 = v32;
        if ( v3 )
          goto LABEL_76;
      }
      *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
      *(_QWORD *)(v30 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_76:
        v41 = *(_QWORD *)(v30 + 16);
        v42 = *(_QWORD *)(v30 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v30 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v30 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v42, v28, v30, v29);
        v30 = v41;
      }
      while ( v41 );
    }
  }
LABEL_20:
  v16 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v16 )
  {
    for ( k = 0; k < 8; ++k )
    {
      v18 = &v16[8 * k];
      if ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpInvertedFunctionTableSRWLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v18 )
        {
          *v18 |= 2u;
          if ( v18[7] < 0 )
          {
            MemoryInformation = (unsigned __int64)((v18 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3);
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, &MemoryInformation, 0x10u);
          }
          *(_QWORD *)v18 = 0LL;
        }
        break;
      }
    }
  }
  if ( !v5 && byte_1801E942C )
    goto LABEL_55;
  return v5;
}
