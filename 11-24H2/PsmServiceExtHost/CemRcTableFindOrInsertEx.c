/*
 * XREFs of CemRcTableFindOrInsertEx @ 0x180040C00
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005F9C (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180014BA8 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z @ 0x18003D0B8 (-HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x1800405B0 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180040708 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180040BC8 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800428C8 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180069190 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CemRcTableFindOrInsertEx(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int64),
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v10; // r8
  char v11; // bl
  unsigned __int64 v12; // rdi
  int v13; // ebp
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  int v17; // ebp
  unsigned __int64 v18; // rax

  RtlAcquireSRWLockExclusive(a1 + 16);
  v11 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a4 + 16) != -1LL )
      NT_ASSERT("!CempRcObjectIsInserted(ObjectToInsert)");
    if ( !*(_QWORD *)(a4 + 24) )
      NT_ASSERT("!CemRcObjectIsRundownInProgress(ObjectToInsert)");
    if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
      NT_ASSERT("!Table->IsRunningDown");
    v12 = *(_QWORD *)a1;
    v13 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      break;
LABEL_13:
    while ( v12 )
    {
      v14 = a3(a2, v12);
      if ( v14 < 0 )
      {
        v15 = *(_QWORD *)v12;
      }
      else
      {
        if ( v14 <= 0 )
          break;
        v15 = *(_QWORD *)(v12 + 8);
      }
      if ( v13 && v15 )
        v12 ^= v15;
      else
        v12 = v15;
    }
    if ( !v12 )
      goto LABEL_15;
    if ( *(_QWORD *)(v12 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
        __fastfail(0xEu);
      *a6 = v12;
      RtlReleaseSRWLockExclusive(a1 + 16);
      return 0LL;
    }
    RtlSleepConditionVariableSRW(a1 + 32, a1 + 16, 0LL, 0LL);
  }
  if ( v12 )
  {
    v12 ^= a1;
    goto LABEL_13;
  }
LABEL_15:
  v16 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v16 )
    v16 ^= a1;
  v17 = *(_BYTE *)(a1 + 8) & 1;
  if ( v16 )
  {
    while ( 1 )
    {
      if ( (int)a3(a2, v16) < 0 )
      {
        v18 = *(_QWORD *)v16;
        if ( v17 )
        {
          if ( !v18 )
            break;
          v18 ^= v16;
        }
        if ( !v18 )
          break;
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( v17 )
        {
          if ( !v18 )
          {
LABEL_24:
            v11 = 1;
            break;
          }
          v18 ^= v16;
        }
        if ( !v18 )
          goto LABEL_24;
      }
      v16 = v18;
    }
  }
  LOBYTE(v10) = v11;
  RtlRbInsertNodeEx(a1, v16, v10, a4);
  *(_QWORD *)(a1 + 40) ^= (*(_QWORD *)(a1 + 40) ^ (*(_QWORD *)(a1 + 40) + 2LL)) & 0xFFFFFFFFFFFFFFFEuLL;
  RtlReleaseSRWLockExclusive(a1 + 16);
  RtlWakeAllConditionVariable(a1 + 32);
  *a6 = a4;
  return 0LL;
}
