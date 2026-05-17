/*
 * XREFs of LdrpProcessMappedModule @ 0x18006DF80
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     LdrpGenRandom @ 0x180002BC0 (LdrpGenRandom.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020C04 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800212A0 (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x1800223C0 (LdrInitSecurityCookie.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180024960 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     LdrpQueueWork @ 0x18003E480 (LdrpQueueWork.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     NpQueryVirtualMemory @ 0x180162DC0 (NpQueryVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
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
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rax
  int inited; // eax
  unsigned __int16 v18; // cx
  struct _TEB *v19; // rax
  char *SchedulerSharedDataSlot; // rcx
  _QWORD *v21; // rax
  char *v22; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+38h] [rbp-80h] BYREF
  __int128 v32; // [rsp+40h] [rbp-78h] BYREF
  __int64 v33; // [rsp+50h] [rbp-68h]
  _OWORD v34[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v35; // [rsp+78h] [rbp-40h]
  __int64 v36; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0;
  v36 = 0LL;
  result = RtlImageNtHeaderEx(3, v3, 0LL, &v36);
  v9 = result;
  if ( (int)result < 0 )
    return result;
  v10 = v36;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 && *(_DWORD *)(a1 + 268) != 9 )
  {
    v11 = *(unsigned int *)(v36 + 40);
    if ( (_DWORD)v11 )
      v12 = v3 + v11;
    else
      v12 = 0LL;
    *(_QWORD *)(a1 + 56) = v12;
  }
  v13 = *(_QWORD *)(a1 + 48);
  v37 = 0LL;
  RtlImageNtHeaderEx(3, v13, 0LL, &v37);
  v15 = *(_DWORD *)(v37 + 40);
  if ( v15 && *(_QWORD *)(a1 + 56) && v15 < *(_DWORD *)(v37 + 84) )
    return 3221225595LL;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(v10 + 48);
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 104) & 4) == 0 )
    {
      if ( !a3 )
        goto LABEL_28;
      v30 = 0LL;
      v33 = 0LL;
      v32 = 0LL;
      if ( (int)RtlImageNtHeaderEx(3, v3, 0LL, &v30) < 0
        || *(_QWORD *)(v30 + 48) != v3
        || (int)ZwQueryVirtualMemory(-1LL, v3, 6LL, &v32, 24LL, 0LL) < 0
        || (_QWORD)v32 != v3
        || (v33 & 2) != 0
        || (v33 & 1) != 0 )
      {
        goto LABEL_28;
      }
    }
    if ( (*(_DWORD *)(a1 + 104) & 0x2000) != 0 || !a3 )
      goto LABEL_28;
    v31 = 0LL;
    v16 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v3, *(_DWORD *)(a1 + 64), 0LL, v16 ^ (unsigned int)dword_1801EC4D8, &v31);
    if ( v3 == 0x180000000LL || !*(_QWORD *)(a1 + 56) )
    {
LABEL_26:
      result = LdrpCfgProcessLoadConfig(a1, v36, v31);
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
        result = RtlpInsertOrRemoveScpCfgFunctionTable(v3, v14, 1);
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == -1073741503 )
          {
            memset(v34, 0, sizeof(v34));
            v35 = 0LL;
            if ( (int)NpQueryVirtualMemory(-1LL, v3, 0LL, v34, 48LL, 0LL) < 0 || DWORD2(v35) == 0x1000000 )
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
    v18 = *(_WORD *)(v36 + 72);
    if ( v18 == 6 )
    {
      if ( *(_WORD *)(v36 + 74) < 3u )
        goto LABEL_26;
    }
    else if ( v18 < 7u )
    {
      goto LABEL_26;
    }
    if ( inited )
      goto LABEL_26;
    return 3221225595LL;
  }
LABEL_42:
  v19 = NtCurrentTeb();
  SchedulerSharedDataSlot = (char *)v19->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v21 = v19->SchedulerSharedDataSlot;
    while ( *v21 )
    {
      ++v4;
      ++v21;
      if ( v4 >= 8 )
        goto LABEL_49;
    }
    v22 = &SchedulerSharedDataSlot[8 * v4];
    if ( v22 )
      *(_QWORD *)v22 = &LdrpModuleDatatableLock;
  }
LABEL_49:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 )
  {
    if ( *(_QWORD *)(a1 + 176) )
    {
      v24 = *(_QWORD *)(a1 + 152);
      v25 = *(_QWORD **)(v24 + 48);
      if ( v25 )
      {
        v26 = *(_QWORD **)(v24 + 48);
        do
        {
          v26 = (_QWORD *)*v26;
          v27 = (_DWORD *)(v26[1] & 0xFFFFFFFFFFFFFFF8uLL);
          v28 = *(_QWORD *)(*(_QWORD *)v27 + 16LL);
          if ( v28 )
          {
            v29 = *(_DWORD *)(v28 + 108) - 1;
            *(_DWORD *)(v28 + 108) = v29;
            if ( v27[14] != 5 && !v29 )
            {
              v27[14] = 4;
              LdrpQueueWork(v28);
            }
          }
        }
        while ( v26 != v25 );
      }
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return v9;
}
