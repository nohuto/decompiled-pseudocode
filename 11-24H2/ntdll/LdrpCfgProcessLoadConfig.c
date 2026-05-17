/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x180007A80
 * Callers:
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x180006888 (LdrpMakePermanentImageCommit.c)
 *     LdrpCfgCheckRoutineCallback @ 0x1800081A0 (LdrpCfgCheckRoutineCallback.c)
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180009610 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     LdrpIsModuleUnderSystem32 @ 0x1800F54C4 (LdrpIsModuleUnderSystem32.c)
 *     qsort @ 0x180125BE0 (qsort.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v3; // rbx
  __int64 (__fastcall **v7)(); // r13
  size_t v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // r15d
  int v14; // r12d
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rdx
  unsigned int *v17; // r8
  __int64 v18; // rax
  unsigned __int64 *v19; // r9
  unsigned int *v20; // r15
  unsigned __int64 *v21; // r11
  unsigned int *v22; // r10
  unsigned __int64 *v23; // rcx
  unsigned int *v24; // rsi
  __int64 (__fastcall **v25)(); // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 (__fastcall **v28)(); // r10
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 (__fastcall **v32)(); // r15
  __int64 v33; // rax
  unsigned __int64 v34; // r11
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 (__fastcall *v38)(); // rax
  __int64 (__fastcall *v39)(); // rcx
  __int64 (__fastcall *v40)(); // rax
  __int64 (__fastcall *v41)(); // rax
  __int64 result; // rax
  __int64 *v43; // rsi
  __int64 v44; // r8
  void (__fastcall *v45)(__int64, __int64); // rax
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  unsigned int v49; // [rsp+30h] [rbp-A9h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+38h] [rbp-A1h]
  unsigned __int64 v51; // [rsp+40h] [rbp-99h]
  __int64 (__fastcall **v52)(); // [rsp+48h] [rbp-91h]
  __int64 v53; // [rsp+50h] [rbp-89h] BYREF
  __int64 v54; // [rsp+58h] [rbp-81h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+60h] [rbp-79h]
  __int64 (__fastcall **v56)(); // [rsp+68h] [rbp-71h]
  __int64 (__fastcall **v57)(); // [rsp+70h] [rbp-69h]
  __int64 v58; // [rsp+78h] [rbp-61h]
  char v59[16]; // [rsp+80h] [rbp-59h] BYREF
  unsigned __int64 Base; // [rsp+90h] [rbp-49h] BYREF
  _QWORD v61[11]; // [rsp+98h] [rbp-41h]

  v3 = 0LL;
  v58 = a2;
  v50 = 0LL;
  v57 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v7 = 0LL;
  memset_thunk_772440563353939046(&Base, 0, 0x60uLL);
  v49 = 0;
  v8 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  if ( a3 && *(_DWORD *)a3 >= 0x94u )
  {
    v9 = (LdrpPolicyBits & 4 | 0x7Bu) << 8;
    v10 = (((LdrpPolicyBits & 4 | 0x7B) << 8) | 0x8000u) & *(_WORD *)(a3 + 78);
    *(_DWORD *)(a1 + 280) = v10;
    if ( ((unsigned int)v10 & (unsigned int)v9) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
    {
      v47 = *(_DWORD *)(a1 + 280);
      if ( a1 == LdrpImageEntry )
        v48 = v47 | 0x200;
      else
        v48 = v47 | 0x100;
      *(_DWORD *)(a1 + 280) = v48;
    }
    if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
    {
      *(_DWORD *)(a1 + 104) |= 0x8000u;
      if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
      {
        LOBYTE(v9) = 1;
        v11 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), v9, 13LL, v59);
        if ( v11 )
        {
          v9 = 0LL;
          v10 = a2 + *(unsigned __int16 *)(a2 + 20) + 24LL;
          while ( (unsigned int)v9 < *(unsigned __int16 *)(a2 + 6) )
          {
            v12 = *(unsigned int *)(v10 + 12);
            if ( (unsigned int)(*(_DWORD *)(v11 + 12) - v12) < *(_DWORD *)(v10 + 8) )
            {
              v54 = *(_QWORD *)(a1 + 48) + v12;
              v53 = *(unsigned int *)(v10 + 8);
              LdrpMakePermanentImageCommit(v54, v53);
              ZwProtectVirtualMemory(-1LL, &v54, &v53, 2LL, &v49);
              break;
            }
            v9 = (unsigned int)(v9 + 1);
            v10 += 40LL;
          }
        }
      }
    }
    v13 = *(_DWORD *)(a3 + 144);
    v14 = 1;
    if ( (v13 & 0x1000000) != 0 )
    {
      v9 = *(_QWORD *)(a3 + 304);
      v57 = (__int64 (__fastcall **)())v9;
      if ( v9 && (v10 = *(_QWORD *)(a1 + 48), v9 >= v10) && (v10 = *(unsigned int *)(a1 + 64) + v10 - 8, v9 <= v10) )
      {
        Base = v9;
        v61[0] = LdrpCgRoutineCallback;
        v8 = 1LL;
      }
      else
      {
        v57 = 0LL;
      }
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced(v10, v9)
      && (*(_WORD *)(v58 + 94) & 0x4000) != 0
      && (v13 & 0x100) != 0 )
    {
      v7 = *(__int64 (__fastcall ***)())(a3 + 112);
      v50 = v7;
      if ( v7
        && (v15 = *(_QWORD *)(a1 + 48), v16 = (unsigned __int64 *)(a1 + 48), (unsigned __int64)v7 >= v15)
        && (v17 = (unsigned int *)(a1 + 64), (unsigned __int64)v7 <= *(unsigned int *)(a1 + 64) + v15 - 8) )
      {
        v18 = 2 * v8;
        v19 = (unsigned __int64 *)(a1 + 48);
        v20 = (unsigned int *)(a1 + 64);
        v21 = (unsigned __int64 *)(a1 + 48);
        v22 = (unsigned int *)(a1 + 64);
        v23 = (unsigned __int64 *)(a1 + 48);
        ++v8;
        v61[v18] = LdrpCfgCheckRoutineCallback;
        v24 = (unsigned int *)(a1 + 64);
        v61[v18 - 1] = v7;
      }
      else
      {
        v19 = (unsigned __int64 *)(a1 + 48);
        v50 = 0LL;
        v24 = (unsigned int *)(a1 + 64);
        v16 = v19;
        v17 = v24;
        v20 = v24;
        v22 = v24;
        v21 = v19;
        v23 = v19;
        v7 = 0LL;
      }
      v25 = *(__int64 (__fastcall ***)())(a3 + 120);
      v52 = v25;
      if ( v25
        && (v26 = *v23, (unsigned __int64)v25 >= v26)
        && (v27 = *v22, v28 = v52, (unsigned __int64)v52 <= v27 + v26 - 8) )
      {
        v29 = 2 * v8++;
        v61[v29 - 1] = v52;
        v61[v29] = LdrpCfgDispatchRoutineCallback;
      }
      else
      {
        v28 = 0LL;
        v52 = 0LL;
        v50 = v7;
      }
      if ( *(_DWORD *)a3 >= 0x130u )
      {
        v30 = *(_QWORD *)(a3 + 280);
        v51 = v30;
        if ( v30 && v30 >= *v21 && (v31 = *v20, v32 = (__int64 (__fastcall **)())v51, v51 <= v31 + *v21 - 8) )
        {
          if ( v8 >= 6 )
            return 3221225534LL;
          v33 = 2 * v8++;
          v61[v33 - 1] = v51;
          v61[v33] = LdrpCfgCheckRoutineCallback;
        }
        else
        {
          v32 = 0LL;
          v51 = 0LL;
        }
        v34 = *(_QWORD *)(a3 + 288);
        v50 = v7;
        v52 = v28;
        v55 = (__int64 (__fastcall **)())v34;
        if ( v34 && v34 >= *v19 && v34 <= *v24 + *v19 - 8 )
        {
          if ( v8 >= 6 )
            return 3221225534LL;
          v35 = 2 * v8++;
          v61[v35 - 1] = v34;
          v61[v35] = LdrpCfgDispatchRoutineCallback;
        }
        else
        {
          v34 = 0LL;
          v55 = 0LL;
          v51 = (unsigned __int64)v32;
          v52 = v28;
          v50 = v7;
        }
        v36 = *(_QWORD *)(a3 + 296);
        v56 = (__int64 (__fastcall **)())v36;
        if ( v36 && v36 >= *v16 && v36 <= *v17 + *v16 - 8 )
        {
          if ( v8 >= 6 )
            return 3221225534LL;
          v37 = 2 * v8++;
          v61[v37 - 1] = v36;
          v61[v37] = LdrpCfgDispatchRoutineCallback;
        }
        else
        {
          v56 = 0LL;
          v55 = (__int64 (__fastcall **)())v34;
          v51 = (unsigned __int64)v32;
          v52 = v28;
          v50 = v7;
        }
LABEL_39:
        qsort(&Base, v8, 0x10uLL, LdrpSortLoadConfigFptrs);
        while ( v3 < v8 )
        {
          v53 = 8LL;
          v43 = &v61[2 * v3 - 1];
          v54 = *v43;
          result = ZwProtectVirtualMemory(-1LL, &v54, &v53, 4LL, &v49);
          if ( (int)result >= 0 )
          {
            v44 = *v43;
            do
            {
              v45 = (void (__fastcall *)(__int64, __int64))v43[1];
              v46 = *(unsigned int *)(a3 + 144);
              if ( (char *)v45 == (char *)LdrpCfgCheckRoutineCallback )
              {
                LdrpCfgCheckRoutineCallback(v44, v46);
              }
              else if ( (char *)v45 == (char *)LdrpCfgDispatchRoutineCallback )
              {
                LdrpCfgDispatchRoutineCallback(v44, v46);
              }
              else
              {
                v45(v44, v46);
              }
              ++v3;
              v43 += 2;
              if ( v3 >= v8 )
                break;
              v44 = *v43;
            }
            while ( *v43 + 8 <= (unsigned __int64)(v54 + v53) );
            result = ZwProtectVirtualMemory(-1LL, &v54, &v53, v49, &v49);
            v7 = v50;
            v32 = (__int64 (__fastcall **)())v51;
            if ( (int)result >= 0 )
              continue;
          }
          return result;
        }
        if ( !v14 )
          return 0LL;
        if ( v7 )
        {
          v38 = *v7;
          if ( *v7 == LdrpValidateUserCallTarget
            || v38 == (__int64 (__fastcall *)())qword_1801EA540
            || v38 == LdrpValidateUserCallTargetES
            || v38 == (__int64 (__fastcall *)())qword_1801EA548 )
          {
            if ( !v52
              || (v39 = *v52, *v52 == (__int64 (__fastcall *)())qword_1801EA550)
              || v39 == LdrpDispatchUserCallTargetES
              || v39 == LdrpDispatchUserCallTarget
              || v39 == (__int64 (__fastcall *)())qword_1801EA558 )
            {
              if ( !v32 || *v32 == v38 )
              {
                if ( !v55
                  || (v40 = *v55, *v55 == (__int64 (__fastcall *)())qword_1801EA550)
                  || v40 == LdrpDispatchUserCallTargetES
                  || v40 == (__int64 (__fastcall *)())qword_1801EA558
                  || v40 == LdrpDispatchUserCallTarget )
                {
                  if ( !v56
                    || (v41 = *v56, *v56 == (__int64 (__fastcall *)())qword_1801EA550)
                    || v41 == LdrpDispatchUserCallTargetES
                    || v41 == LdrpDispatchUserCallTarget
                    || v41 == (__int64 (__fastcall *)())qword_1801EA558 )
                  {
                    if ( !v57 || *v57 == LdrpCgLogFailure )
                      return 0LL;
                  }
                }
              }
            }
          }
        }
        return 3221225534LL;
      }
    }
    else
    {
      v14 = 0;
    }
    v32 = 0LL;
    goto LABEL_39;
  }
  return 0LL;
}
