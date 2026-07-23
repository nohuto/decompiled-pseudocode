/*
 * XREFs of LdrpProcessMappedModule @ 0x18008FFE0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     LdrpGenRandom @ 0x18002C3B0 (LdrpGenRandom.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800332D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x180033C34 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x1800355A0 (LdrInitSecurityCookie.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpQueueWork @ 0x1800D20D4 (LdrpQueueWork.c)
 *     NpQueryVirtualMemory @ 0x18015FBF0 (NpQueryVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpProcessMappedModule(__int64 a1, int a2, int a3)
{
  char *v3; // rbp
  unsigned int v4; // edi
  NTSTATUS result; // eax
  NTSTATUS v9; // r14d
  PIMAGE_NT_HEADERS v10; // rsi
  __int64 v11; // rax
  char *v12; // rax
  void *v13; // rdx
  char *v14; // rdx
  char *v15; // r8
  char *v16; // r9
  unsigned int AddressOfEntryPoint; // ecx
  __int64 v18; // rax
  int inited; // eax
  unsigned __int16 v20; // cx
  struct _TEB *v21; // rax
  char *SchedulerSharedDataSlot; // rcx
  _QWORD *v23; // rax
  __int64 v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rdi
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  PIMAGE_NT_HEADERS v31; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h] BYREF
  __int128 MemoryInformation; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+50h] [rbp-68h]
  _OWORD v35[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v36; // [rsp+78h] [rbp-40h]
  __int64 v37; // [rsp+C0h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *(char **)(a1 + 48);
  v4 = 0;
  v37 = 0LL;
  result = RtlImageNtHeaderEx(3u, v3, 0LL, (PIMAGE_NT_HEADERS *)&v37);
  v9 = result;
  if ( result < 0 )
    return result;
  v10 = (PIMAGE_NT_HEADERS)v37;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 && *(_DWORD *)(a1 + 268) != 9 )
  {
    v11 = *(unsigned int *)(v37 + 40);
    if ( (_DWORD)v11 )
      v12 = &v3[v11];
    else
      v12 = 0LL;
    *(_QWORD *)(a1 + 56) = v12;
  }
  v13 = *(void **)(a1 + 48);
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(3u, v13, 0LL, &OutHeaders);
  AddressOfEntryPoint = OutHeaders->OptionalHeader.AddressOfEntryPoint;
  if ( AddressOfEntryPoint && *(_QWORD *)(a1 + 56) && AddressOfEntryPoint < OutHeaders->OptionalHeader.SizeOfHeaders )
    return -1073741701;
  *(_QWORD *)(a1 + 248) = v10->OptionalHeader.ImageBase;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 104) & 4) == 0 )
    {
      if ( !a3 )
        goto LABEL_28;
      v31 = 0LL;
      v34 = 0LL;
      MemoryInformation = 0LL;
      if ( RtlImageNtHeaderEx(3u, v3, 0LL, &v31) < 0
        || (char *)v31->OptionalHeader.ImageBase != v3
        || ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v3,
             MemoryImageInformation,
             &MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (char *)MemoryInformation != v3
        || (v34 & 2) != 0
        || (v34 & 1) != 0 )
      {
        goto LABEL_28;
      }
    }
    if ( (*(_DWORD *)(a1 + 104) & 0x2000) != 0 || !a3 )
      goto LABEL_28;
    v32 = 0LL;
    v18 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(
               (unsigned __int64 *)v3,
               *(_DWORD *)(a1 + 64),
               0LL,
               v18 ^ LdrSystemDllInitBlock.RngData,
               &v32);
    if ( v3 == (char *)0x180000000LL || !*(_QWORD *)(a1 + 56) )
    {
LABEL_26:
      result = LdrpCfgProcessLoadConfig(a1, v37, v32);
      v9 = result;
      if ( result < 0 )
        return result;
      *(_DWORD *)(a1 + 104) |= 0x2000u;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
      {
        RtlInsertInvertedFunctionTable(v3, *(_DWORD *)(a1 + 64));
        *(_DWORD *)(a1 + 104) |= 0x200u;
      }
      if ( (*(_DWORD *)(a1 + 104) & 0x200000) == 0 )
      {
        result = RtlpInsertOrRemoveScpCfgFunctionTable(v3, (__int64)v14, 1);
        if ( result )
        {
          if ( result == -1073741503 )
          {
            memset(v35, 0, sizeof(v35));
            v36 = 0LL;
            if ( (int)NpQueryVirtualMemory(-1LL, v3, 0LL, v35, 48LL, 0LL) < 0 || DWORD2(v36) == 0x1000000 )
              return -1073741503;
          }
          else if ( result < 0 )
          {
            return result;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x200000u;
        }
        v9 = 0;
      }
      goto LABEL_42;
    }
    v20 = *(_WORD *)(v37 + 72);
    if ( v20 == 6 )
    {
      if ( *(_WORD *)(v37 + 74) < 3u )
        goto LABEL_26;
    }
    else if ( v20 < 7u )
    {
      goto LABEL_26;
    }
    if ( inited )
      goto LABEL_26;
    return -1073741701;
  }
LABEL_42:
  v21 = NtCurrentTeb();
  SchedulerSharedDataSlot = (char *)v21->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v23 = v21->SchedulerSharedDataSlot;
    while ( *v23 )
    {
      ++v4;
      ++v23;
      if ( v4 >= 8 )
        goto LABEL_49;
    }
    v14 = &SchedulerSharedDataSlot[8 * v4];
    if ( v14 )
      *(_QWORD *)v14 = &LdrpModuleDatatableLock;
  }
LABEL_49:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)v14, v15, v16);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 )
  {
    if ( *(_QWORD *)(a1 + 176) )
    {
      v25 = *(_QWORD *)(a1 + 152);
      v26 = *(_QWORD **)(v25 + 48);
      if ( v26 )
      {
        v27 = *(_QWORD **)(v25 + 48);
        do
        {
          v27 = (_QWORD *)*v27;
          v28 = (_DWORD *)(v27[1] & 0xFFFFFFFFFFFFFFF8uLL);
          v29 = *(_QWORD *)(*(_QWORD *)v28 + 16LL);
          if ( v29 )
          {
            v30 = *(_DWORD *)(v29 + 108) - 1;
            *(_DWORD *)(v29 + 108) = v30;
            if ( v28[14] != 5 && !v30 )
            {
              v28[14] = 4;
              LdrpQueueWork(v29);
            }
          }
        }
        while ( v27 != v26 );
      }
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), (unsigned __int16 *)(a1 + 72), 5281);
  return v9;
}
