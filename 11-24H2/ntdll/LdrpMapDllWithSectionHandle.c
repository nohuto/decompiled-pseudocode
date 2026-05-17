/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x180072B70
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 *     LdrpMapDllPatchImage @ 0x18011446C (LdrpMapDllPatchImage.c)
 * Callees:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpLogNewDllLoad @ 0x180073AD0 (LdrpLogNewDllLoad.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180073C10 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800740B8 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x180074240 (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x180074360 (LdrpHashUnicodeString.c)
 *     LdrpCorProcessImports @ 0x1800746A0 (LdrpCorProcessImports.c)
 *     LdrpResolvePatchDllName @ 0x180074708 (LdrpResolvePatchDllName.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180074798 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rsi
  volatile signed __int32 **v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // r8d
  int v13; // edx
  int LoadedDllByNameLockHeld; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // rcx
  _BOOL8 v23; // rdx
  __int64 v24; // rax
  int v25; // r8d
  __int64 v26; // [rsp+30h] [rbp-278h] BYREF
  __int64 v27; // [rsp+38h] [rbp-270h] BYREF
  _DWORD v28[2]; // [rsp+40h] [rbp-268h] BYREF
  __int64 v29; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE Src[528]; // [rsp+60h] [rbp-248h] BYREF

  v26 = 0LL;
  v29 = 0LL;
  memset_thunk_772440563353939046(v30, 0, 0x218uLL);
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
    v27 = 0LL;
    v5 = RtlImageNtHeaderEx(0, *(_QWORD *)(v9 + 48), v7, &v26);
    if ( v5 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v22 = v26;
        v8 = 0;
        *(_DWORD *)(v9 + 128) = *(_DWORD *)(v26 + 8);
        *(_DWORD *)(v9 + 288) = *(_DWORD *)(v22 + 88);
        *(_DWORD *)(v9 + 64) = *(_DWORD *)(v22 + 80);
      }
      else
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, v10, v11);
        v12 = *(_DWORD *)(a1 + 32);
        v13 = 0;
        if ( (v12 & 0x20) == 0 )
          v13 = v9 + 72;
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                    (int)v9 + 88,
                                    v13,
                                    v12,
                                    (unsigned int)&v27,
                                    *(_DWORD *)(v9 + 264));
        v17 = v26;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v18 = *(_QWORD *)(v9 + 48);
          v28[0] = *(_DWORD *)(v26 + 8);
          v28[1] = *(_DWORD *)(v26 + 80);
          LdrpFindLoadedDllByMappingLockHeld(v18, v26, v28, &v27);
        }
        v19 = v27;
        if ( !v27 )
        {
          LdrpInsertDataTableEntry(v9, v15, v16);
          LdrpInsertModuleToIndexLockHeld(v9, v17);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v19 )
        {
          v20 = *(_QWORD *)(a1 + 56);
          if ( *(_DWORD *)(v20 + 268) != 9 || *(_DWORD *)(v19 + 268) == 9 )
          {
            LdrpLoadContextReplaceModule(a1, v19);
          }
          else
          {
            v5 = -1073740608;
            LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, *(_QWORD *)(a1 + 48), v20 + 72, -1073740608, 3);
            LdrpDereferenceModule(v19);
          }
          return (unsigned int)v5;
        }
      }
      if ( (void *)qword_1801CC8F0 == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v5 = LdrpCompleteMapModule(a1, v26, v8);
        if ( v5 >= 0 )
        {
          v5 = LdrpProcessMappedModule(v9, *(unsigned int *)(a1 + 32), 1LL);
          if ( v5 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v9);
            v24 = *(_QWORD *)(a1 + 48);
            if ( v24 )
              *(_QWORD *)(v9 + 184) = *(_QWORD *)(v24 + 48);
            LOBYTE(v23) = 0;
            if ( *(_DWORD *)(v9 + 268) == 9 && LdrpImageEntry )
              v23 = *(_QWORD *)(v9 + 184) == *(_QWORD *)(LdrpImageEntry + 48);
            v25 = *(_DWORD *)(v9 + 104);
            if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || (v25 & 4) != 0 || v23 )
            {
              if ( (v25 & 0x1000000) != 0 )
              {
                return (unsigned int)LdrpCorProcessImports(v9);
              }
              else
              {
                LdrpMapAndSnapDependency(a1, v23);
                return (unsigned int)**(_DWORD **)(a1 + 40);
              }
            }
            else
            {
              LdrpLogDllState(*(_QWORD *)(v9 + 48), v9 + 72, 0x14AEu);
              v5 = 0;
              *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL) = 9;
            }
          }
        }
      }
    }
    return (unsigned int)v5;
  }
  result = ZwQueryVirtualMemory(-1LL, *(_QWORD *)(v6 + 48), 2LL, v30, 536LL, &v29);
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
