/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x18006D3E0
 * Callers:
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     LdrpMapDllPatchImage @ 0x18011741C (LdrpMapDllPatchImage.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpLogNewDllLoad @ 0x18006E350 (LdrpLogNewDllLoad.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18006E490 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18006E750 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18006E938 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x18006EAC0 (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x18006EBE0 (LdrpHashUnicodeString.c)
 *     LdrpCorProcessImports @ 0x18006EF20 (LdrpCorProcessImports.c)
 *     LdrpResolvePatchDllName @ 0x18006EF88 (LdrpResolvePatchDllName.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // edx
  int LoadedDllByNameLockHeld; // eax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rcx
  _BOOL8 v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // [rsp+20h] [rbp-288h]
  __int64 v23; // [rsp+28h] [rbp-280h]
  __int64 v24; // [rsp+30h] [rbp-278h] BYREF
  __int64 v25; // [rsp+38h] [rbp-270h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-268h] BYREF
  __int64 v27; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE Src[528]; // [rsp+60h] [rbp-248h] BYREF

  v24 = 0LL;
  v27 = 0LL;
  memset_thunk_772440563353939046(v28, 0, 0x218uLL);
  v4 = LdrpMinimalMapModule(a1, a2);
  v5 = v4;
  if ( v4 == 1073741838 || v4 < 0 )
    return (unsigned int)v5;
  v6 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(v6 + 268) != 9 )
  {
LABEL_4:
    v7 = *(_QWORD *)(a1 + 168);
    v8 = v5;
    v9 = *(_QWORD *)(a1 + 56);
    v25 = 0LL;
    v5 = RtlImageNtHeaderEx(0, *(_QWORD *)(v9 + 48), v7, &v24);
    if ( v5 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v18 = v24;
        v8 = 0;
        *(_DWORD *)(v9 + 128) = *(_DWORD *)(v24 + 8);
        *(_DWORD *)(v9 + 288) = *(_DWORD *)(v18 + 88);
        *(_DWORD *)(v9 + 64) = *(_DWORD *)(v18 + 80);
      }
      else
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
        v10 = *(_DWORD *)(a1 + 32);
        v11 = 0;
        if ( (v10 & 0x20) == 0 )
          v11 = v9 + 72;
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                    (int)v9 + 88,
                                    v11,
                                    v10,
                                    (unsigned int)&v25,
                                    *(_DWORD *)(v9 + 264));
        v13 = v24;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v14 = *(_QWORD *)(v9 + 48);
          v26[0] = *(_DWORD *)(v24 + 8);
          v26[1] = *(_DWORD *)(v24 + 80);
          LdrpFindLoadedDllByMappingLockHeld(v14, v24, v26, &v25, v22, v23);
        }
        v15 = v25;
        if ( !v25 )
        {
          LdrpInsertDataTableEntry(v9);
          LdrpInsertModuleToIndexLockHeld(v9, v13);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v15 )
        {
          v16 = *(_QWORD *)(a1 + 56);
          if ( *(_DWORD *)(v16 + 268) != 9 || *(_DWORD *)(v15 + 268) == 9 )
          {
            LdrpLoadContextReplaceModule(a1);
          }
          else
          {
            v5 = -1073740608;
            LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, *(_QWORD *)(a1 + 48), v16 + 72, -1073740608, 3);
            LdrpDereferenceModule(v15);
          }
          return (unsigned int)v5;
        }
      }
      if ( (void *)qword_1801CE8F0 == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v5 = LdrpCompleteMapModule(a1, v24, v8);
        if ( v5 >= 0 )
        {
          v5 = LdrpProcessMappedModule(v9, *(unsigned int *)(a1 + 32), 1LL);
          if ( v5 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v9);
            v20 = *(_QWORD *)(a1 + 48);
            if ( v20 )
              *(_QWORD *)(v9 + 184) = *(_QWORD *)(v20 + 48);
            LOBYTE(v19) = 0;
            if ( *(_DWORD *)(v9 + 268) == 9 && LdrpImageEntry )
              v19 = *(_QWORD *)(v9 + 184) == *(_QWORD *)(LdrpImageEntry + 48);
            v21 = *(_DWORD *)(v9 + 104);
            if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || (v21 & 4) != 0 || v19 )
            {
              if ( (v21 & 0x1000000) != 0 )
              {
                return (unsigned int)LdrpCorProcessImports(v9, v19);
              }
              else
              {
                LdrpMapAndSnapDependency(a1, v19);
                return (unsigned int)**(_DWORD **)(a1 + 40);
              }
            }
            else
            {
              LdrpLogDllState(*(_QWORD *)(v9 + 48), v9 + 72, 5294LL);
              v5 = 0;
              *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL) = 9;
            }
          }
        }
      }
    }
    return (unsigned int)v5;
  }
  result = ZwQueryVirtualMemory(-1LL, *(_QWORD *)(v6 + 48), 2LL, v28, 536LL, &v27);
  if ( (int)result >= 0 )
  {
    result = LdrpResolvePatchDllName(Src);
    v5 = result;
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 264LL) = LdrpHashUnicodeString(*(_QWORD *)(a1 + 56) + 88LL);
      goto LABEL_4;
    }
  }
  return result;
}
