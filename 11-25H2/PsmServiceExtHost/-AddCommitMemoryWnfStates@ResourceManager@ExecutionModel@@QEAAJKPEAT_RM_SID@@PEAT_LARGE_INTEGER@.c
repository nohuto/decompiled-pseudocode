/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18005D818
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18003DEC4 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x1800189C0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019380 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18005DAE0 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18005DBC4 (--$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionM.c)
 *     ?_InsertAt@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@AEBU_InsertPosResult@12@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x18005DC88 (-_InsertAt@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStat.c)
 *     ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18005DD2C (-_FindInsertPos@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWn.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18005DE38 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005E044 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800739B8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        union _RM_SID *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  union _LARGE_INTEGER *v15; // rbx
  union _LARGE_INTEGER *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rbx
  unsigned int *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  char v26[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-B8h] BYREF
  struct _WNF_STATE_NAME v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _WNF_STATE_NAME v29; // [rsp+68h] [rbp-98h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  wchar_t v32[280]; // [rsp+90h] [rbp-70h] BYREF

  P = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  memset_0(v32, 0, 0x228uLL);
  result = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, wchar_t *))(*(_QWORD *)this + 40LL))(
             this,
             a2,
             v32);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)this + 23) )
    {
      v11 = utl::hash<_RM_PSM_HOST_INFO>::operator()(v10, (unsigned __int64)v32);
      LOBYTE(v12) = *((_BYTE *)this + 200);
      v13 = v11;
      v14 = *((_QWORD *)this + 23) + 16 * (v11 & ((8LL << v12) - 1));
      v15 = *(union _LARGE_INTEGER **)v14;
      if ( *(_QWORD *)v14 )
      {
        v16 = **(union _LARGE_INTEGER ***)(v14 + 8);
        while ( v15 != v16 )
        {
          if ( v15[2].QuadPart >= v13 )
          {
            if ( v15[2].QuadPart > v13 )
              break;
            if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v12, v32, &v15[3]) )
            {
              if ( v15 != (union _LARGE_INTEGER *)((char *)this + 168) )
                goto LABEL_14;
              break;
            }
          }
          v15 = (union _LARGE_INTEGER *)v15->QuadPart;
        }
      }
    }
    result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(a3, &v28, &v29);
    if ( (int)result >= 0 )
    {
      v18 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
              v17,
              v32,
              &v28);
      v20 = (void *)v18;
      if ( v18 )
      {
        utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_FindInsertPos(
          (char *)this + 168,
          v27,
          v18 + 24);
        if ( !v27[16] )
        {
          v15 = *(union _LARGE_INTEGER **)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InsertAt(
                                            (char *)this + 168,
                                            v26,
                                            v27,
                                            v20);
          if ( (int)RmpActivityHostFindByPsmId(
                      *((struct _RM_SERVICE_GLOBALS **)this + 16),
                      v32,
                      (struct _RM_ACTIVITY_HOST **)&P) < 0 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
              v29,
              0LL,
              &v30,
              24LL,
              0LL);
            HIDWORD(v25) = 1;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
              v28,
              0LL,
              &v25,
              8LL,
              0LL);
          }
          else
          {
            v21 = (unsigned int *)P;
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64), 0);
            RmpActivityHostPublishCommitLimit((struct _RM_ACTIVITY_HOST *)v21, *((_QWORD *)v21 + 174), 1u);
            (*(void (__fastcall **)(ExecutionModel::ResourceManager *, unsigned int *, _QWORD, _QWORD))(*(_QWORD *)this + 32LL))(
              this,
              v21,
              0LL,
              v21[350]);
            HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)(v21 + 16));
            RmpObjectRelease((char *)v21, v22);
          }
LABEL_14:
          *a4 = v15[72];
          *a5 = v15[73];
          return 0LL;
        }
        operator delete(v20);
      }
      NtDeleteWnfStateName(&v28, v19);
      NtDeleteWnfStateName(&v29, v23);
      return 2147942414LL;
    }
  }
  return result;
}
