/*
 * XREFs of LdrpProcessMappedModule @ 0x180073700
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800068D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x180007234 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x180007A80 (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x180008BA0 (LdrInitSecurityCookie.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpGenRandom @ 0x180097560 (LdrpGenRandom.c)
 *     LdrpQueueWork @ 0x1800D6D64 (LdrpQueueWork.c)
 *     NpQueryVirtualMemory @ 0x180161830 (NpQueryVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rdx
  _QWORD *v15; // r8
  unsigned __int64 v16; // r9
  unsigned int v17; // ecx
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
  __int64 v31; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h] BYREF
  __int128 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+50h] [rbp-68h]
  _OWORD v35[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v36; // [rsp+78h] [rbp-40h]
  __int64 v37; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0;
  v37 = 0LL;
  result = RtlImageNtHeaderEx(3, v3, 0LL, &v37);
  v9 = result;
  if ( (int)result < 0 )
    return result;
  v10 = v37;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 && *(_DWORD *)(a1 + 268) != 9 )
  {
    v11 = *(unsigned int *)(v37 + 40);
    if ( (_DWORD)v11 )
      v12 = v3 + v11;
    else
      v12 = 0LL;
    *(_QWORD *)(a1 + 56) = v12;
  }
  v13 = *(_QWORD *)(a1 + 48);
  v38 = 0LL;
  RtlImageNtHeaderEx(3, v13, 0LL, &v38);
  v17 = *(_DWORD *)(v38 + 40);
  if ( v17 && *(_QWORD *)(a1 + 56) && v17 < *(_DWORD *)(v38 + 84) )
    return 3221225595LL;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(v10 + 48);
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 104) & 4) == 0 )
    {
      if ( !a3 )
        goto LABEL_28;
      v31 = 0LL;
      v34 = 0LL;
      v33 = 0LL;
      if ( (int)RtlImageNtHeaderEx(3, v3, 0LL, &v31) < 0
        || *(_QWORD *)(v31 + 48) != v3
        || (int)ZwQueryVirtualMemory(-1LL, v3, 6LL, &v33, 24LL, 0LL) < 0
        || (_QWORD)v33 != v3
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
    inited = LdrInitSecurityCookie(v3, *(_DWORD *)(a1 + 64), 0LL, v18 ^ (unsigned int)dword_1801EA4E8, &v32);
    if ( v3 == 0x180000000LL || !*(_QWORD *)(a1 + 56) )
    {
LABEL_26:
      result = LdrpCfgProcessLoadConfig(a1, v37, v32);
      v9 = result;
      if ( (int)result < 0 )
        return result;
      *(_DWORD *)(a1 + 104) |= 0x2000u;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
      {
        RtlInsertInvertedFunctionTable(v3, *(unsigned int *)(a1 + 64));
        *(_DWORD *)(a1 + 104) |= 0x200u;
      }
      if ( (*(_DWORD *)(a1 + 104) & 0x200000) == 0 )
      {
        result = RtlpInsertOrRemoveScpCfgFunctionTable(v3, (__int64)v14, 1);
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == -1073741503 )
          {
            memset(v35, 0, sizeof(v35));
            v36 = 0LL;
            if ( (int)NpQueryVirtualMemory(-1LL, v3, 0LL, v35, 48LL, 0LL) < 0 || DWORD2(v36) == 0x1000000 )
              return 3221225793LL;
          }
          else if ( (int)result < 0 )
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
    return 3221225595LL;
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
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  return v9;
}
