/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x1800212A0
 * Callers:
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x180020A08 (LdrpMakePermanentImageCommit.c)
 *     LdrpCfgCheckRoutineCallback @ 0x1800219C0 (LdrpCfgCheckRoutineCallback.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180022E30 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     LdrpIsModuleUnderSystem32 @ 0x1800F7044 (LdrpIsModuleUnderSystem32.c)
 *     qsort @ 0x1801276C0 (qsort.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v3; // rbx
  __int64 (__fastcall **v7)(); // r13
  size_t v8; // r14
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r15d
  int v16; // r12d
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  unsigned int *v20; // r8
  __int64 v21; // rax
  unsigned __int64 *v22; // r9
  unsigned int *v23; // r15
  unsigned __int64 *v24; // r11
  unsigned int *v25; // r10
  unsigned __int64 *v26; // rcx
  unsigned int *v27; // rsi
  __int64 (__fastcall **v28)(); // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 (__fastcall **v31)(); // r10
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 (__fastcall **v35)(); // r15
  __int64 v36; // rax
  unsigned __int64 v37; // r11
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 (__fastcall *v41)(); // rax
  __int64 (__fastcall *v42)(); // rcx
  __int64 (__fastcall *v43)(); // rax
  __int64 (__fastcall *v44)(); // rax
  NTSTATUS result; // eax
  PVOID *v46; // rsi
  PVOID v47; // r8
  void (__fastcall *v48)(PVOID, __int64); // rax
  __int64 v49; // rdx
  int v50; // eax
  int v51; // eax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  ULONG NewProtect; // [rsp+30h] [rbp-A9h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+38h] [rbp-A1h]
  unsigned __int64 v56; // [rsp+40h] [rbp-99h]
  __int64 (__fastcall **v57)(); // [rsp+48h] [rbp-91h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-89h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-81h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+60h] [rbp-79h]
  __int64 (__fastcall **v61)(); // [rsp+68h] [rbp-71h]
  __int64 (__fastcall **v62)(); // [rsp+70h] [rbp-69h]
  __int64 v63; // [rsp+78h] [rbp-61h]
  ULONG Size[4]; // [rsp+80h] [rbp-59h] BYREF
  unsigned __int64 Base; // [rsp+90h] [rbp-49h] BYREF
  _QWORD v66[11]; // [rsp+98h] [rbp-41h]

  v3 = 0LL;
  v63 = a2;
  v55 = 0LL;
  v62 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v7 = 0LL;
  memset_thunk_772440563353939046(&Base, 0, 0x60uLL);
  NewProtect = 0;
  v8 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  if ( a3 && *(_DWORD *)a3 >= 0x94u )
  {
    v9 = (LdrpPolicyBits & 4 | 0x7B) << 8;
    v10 = (v9 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
    *(_DWORD *)(a1 + 280) = v10;
    if ( (v10 & v9) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
    {
      v50 = *(_DWORD *)(a1 + 280);
      if ( a1 == LdrpImageEntry )
        v51 = v50 | 0x200;
      else
        v51 = v50 | 0x100;
      *(_DWORD *)(a1 + 280) = v51;
    }
    if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
    {
      *(_DWORD *)(a1 + 104) |= 0x8000u;
      if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
      {
        v11 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xDu, Size);
        if ( v11 )
        {
          v12 = 0;
          v13 = a2 + *(unsigned __int16 *)(a2 + 20) + 24LL;
          while ( v12 < *(unsigned __int16 *)(a2 + 6) )
          {
            v14 = *(unsigned int *)(v13 + 12);
            if ( (unsigned int)(v11[3] - v14) < *(_DWORD *)(v13 + 8) )
            {
              BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + v14);
              RegionSize = *(unsigned int *)(v13 + 8);
              LdrpMakePermanentImageCommit((__int64)BaseAddress, RegionSize);
              ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
              break;
            }
            ++v12;
            v13 += 40LL;
          }
        }
      }
    }
    v15 = *(_DWORD *)(a3 + 144);
    v16 = 1;
    if ( (v15 & 0x1000000) != 0 )
    {
      v52 = *(_QWORD *)(a3 + 304);
      v62 = (__int64 (__fastcall **)())v52;
      if ( v52 && (v53 = *(_QWORD *)(a1 + 48), v52 >= v53) && v52 <= *(unsigned int *)(a1 + 64) + v53 - 8 )
      {
        Base = v52;
        v66[0] = LdrpCgRoutineCallback;
        v8 = 1LL;
      }
      else
      {
        v62 = 0LL;
      }
    }
    LOBYTE(v17) = LdrControlFlowGuardEnforced();
    if ( v17 && (*(_WORD *)(v63 + 94) & 0x4000) != 0 && (v15 & 0x100) != 0 )
    {
      v7 = *(__int64 (__fastcall ***)())(a3 + 112);
      v55 = v7;
      if ( v7
        && (v18 = *(_QWORD *)(a1 + 48), v19 = (unsigned __int64 *)(a1 + 48), (unsigned __int64)v7 >= v18)
        && (v20 = (unsigned int *)(a1 + 64), (unsigned __int64)v7 <= *(unsigned int *)(a1 + 64) + v18 - 8) )
      {
        v21 = 2 * v8;
        v22 = (unsigned __int64 *)(a1 + 48);
        v23 = (unsigned int *)(a1 + 64);
        v24 = (unsigned __int64 *)(a1 + 48);
        v25 = (unsigned int *)(a1 + 64);
        v26 = (unsigned __int64 *)(a1 + 48);
        ++v8;
        v66[v21] = LdrpCfgCheckRoutineCallback;
        v27 = (unsigned int *)(a1 + 64);
        v66[v21 - 1] = v7;
      }
      else
      {
        v22 = (unsigned __int64 *)(a1 + 48);
        v55 = 0LL;
        v27 = (unsigned int *)(a1 + 64);
        v19 = v22;
        v20 = v27;
        v23 = v27;
        v25 = v27;
        v24 = v22;
        v26 = v22;
        v7 = 0LL;
      }
      v28 = *(__int64 (__fastcall ***)())(a3 + 120);
      v57 = v28;
      if ( v28
        && (v29 = *v26, (unsigned __int64)v28 >= v29)
        && (v30 = *v25, v31 = v57, (unsigned __int64)v57 <= v30 + v29 - 8) )
      {
        v32 = 2 * v8++;
        v66[v32 - 1] = v57;
        v66[v32] = LdrpCfgDispatchRoutineCallback;
      }
      else
      {
        v31 = 0LL;
        v57 = 0LL;
        v55 = v7;
      }
      if ( *(_DWORD *)a3 >= 0x130u )
      {
        v33 = *(_QWORD *)(a3 + 280);
        v56 = v33;
        if ( v33 && v33 >= *v24 && (v34 = *v23, v35 = (__int64 (__fastcall **)())v56, v56 <= v34 + *v24 - 8) )
        {
          if ( v8 >= 6 )
            return -1073741762;
          v36 = 2 * v8++;
          v66[v36 - 1] = v56;
          v66[v36] = LdrpCfgCheckRoutineCallback;
        }
        else
        {
          v35 = 0LL;
          v56 = 0LL;
        }
        v37 = *(_QWORD *)(a3 + 288);
        v55 = v7;
        v57 = v31;
        v60 = (__int64 (__fastcall **)())v37;
        if ( v37 && v37 >= *v22 && v37 <= *v27 + *v22 - 8 )
        {
          if ( v8 >= 6 )
            return -1073741762;
          v38 = 2 * v8++;
          v66[v38 - 1] = v37;
          v66[v38] = LdrpCfgDispatchRoutineCallback;
        }
        else
        {
          v37 = 0LL;
          v60 = 0LL;
          v56 = (unsigned __int64)v35;
          v57 = v31;
          v55 = v7;
        }
        v39 = *(_QWORD *)(a3 + 296);
        v61 = (__int64 (__fastcall **)())v39;
        if ( v39 && v39 >= *v19 && v39 <= *v20 + *v19 - 8 )
        {
          if ( v8 >= 6 )
            return -1073741762;
          v40 = 2 * v8++;
          v66[v40 - 1] = v39;
          v66[v40] = LdrpCfgDispatchRoutineCallback;
        }
        else
        {
          v61 = 0LL;
          v60 = (__int64 (__fastcall **)())v37;
          v56 = (unsigned __int64)v35;
          v57 = v31;
          v55 = v7;
        }
LABEL_39:
        qsort(&Base, v8, 0x10uLL, LdrpSortLoadConfigFptrs);
        while ( v3 < v8 )
        {
          RegionSize = 8LL;
          v46 = (PVOID *)&v66[2 * v3 - 1];
          BaseAddress = *v46;
          result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
          if ( result >= 0 )
          {
            v47 = *v46;
            do
            {
              v48 = (void (__fastcall *)(PVOID, __int64))v46[1];
              v49 = *(unsigned int *)(a3 + 144);
              if ( (char *)v48 == (char *)LdrpCfgCheckRoutineCallback )
              {
                LdrpCfgCheckRoutineCallback(v47, v49);
              }
              else if ( (char *)v48 == (char *)LdrpCfgDispatchRoutineCallback )
              {
                LdrpCfgDispatchRoutineCallback(v47, v49);
              }
              else
              {
                v48(v47, v49);
              }
              ++v3;
              v46 += 2;
              if ( v3 >= v8 )
                break;
              v47 = *v46;
            }
            while ( (char *)*v46 + 8 <= (char *)BaseAddress + RegionSize );
            result = ZwProtectVirtualMemory(
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       &BaseAddress,
                       &RegionSize,
                       NewProtect,
                       &NewProtect);
            v7 = v55;
            v35 = (__int64 (__fastcall **)())v56;
            if ( result >= 0 )
              continue;
          }
          return result;
        }
        if ( !v16 )
          return 0;
        if ( v7 )
        {
          v41 = *v7;
          if ( *v7 == LdrpValidateUserCallTarget
            || v41 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgCheckFunction
            || v41 == LdrpValidateUserCallTargetES
            || v41 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgCheckESFunction )
          {
            if ( !v57
              || (v42 = *v57, *v57 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction)
              || v42 == LdrpDispatchUserCallTargetES
              || v42 == LdrpDispatchUserCallTarget
              || v42 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction )
            {
              if ( !v35 || *v35 == v41 )
              {
                if ( !v60
                  || (v43 = *v60, *v60 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction)
                  || v43 == LdrpDispatchUserCallTargetES
                  || v43 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction
                  || v43 == LdrpDispatchUserCallTarget )
                {
                  if ( !v61
                    || (v44 = *v61, *v61 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction)
                    || v44 == LdrpDispatchUserCallTargetES
                    || v44 == LdrpDispatchUserCallTarget
                    || v44 == (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction )
                  {
                    if ( !v62 || *v62 == LdrpCgLogFailure )
                      return 0;
                  }
                }
              }
            }
          }
        }
        return -1073741762;
      }
    }
    else
    {
      v16 = 0;
    }
    v35 = 0LL;
    goto LABEL_39;
  }
  return 0;
}
