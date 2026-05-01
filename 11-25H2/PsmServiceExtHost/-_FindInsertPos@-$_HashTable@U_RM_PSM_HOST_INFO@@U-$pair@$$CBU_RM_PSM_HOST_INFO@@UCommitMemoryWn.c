/*
 * XREFs of ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18005DD2C
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18005D818 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x1800189C0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?_InitBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x18005D3F4 (-_InitBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005E044 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?_AllocBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashBucket@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@_K@Z @ 0x180071A0C (-_AllocBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnf.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_FindInsertPos(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  __int128 v16; // [rsp+20h] [rbp-20h]
  unsigned __int8 v17; // [rsp+30h] [rbp-10h]

  *(_OWORD *)a2 = 0LL;
  v3 = a1;
  *(_QWORD *)(a2 + 16) = 0LL;
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  v5 = 8LL << a1;
  v7 = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, a3);
  v8 = *(_QWORD *)(v3 + 16);
  v9 = v7;
  v10 = v7 & (v5 - 1);
  if ( v8 )
  {
    v12 = 2 * v10;
    v13 = *(_QWORD **)(v8 + 8 * v12);
    if ( v13 )
    {
      v14 = **(_QWORD ***)(v8 + 8 * v12 + 8);
      while ( v13 != v14 )
      {
        if ( v13[2] >= v9 )
        {
          if ( v13[2] > v9 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v8, a3, v13 + 3) )
          {
            *(_QWORD *)&v16 = v13;
            v17 = 2;
            goto LABEL_16;
          }
        }
        v13 = (_QWORD *)*v13;
      }
      *(_QWORD *)&v16 = v13;
      goto LABEL_15;
    }
LABEL_4:
    *(_QWORD *)&v16 = 0LL;
LABEL_15:
    v17 = 0;
    goto LABEL_16;
  }
  v11 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_AllocBuckets(
          0LL,
          v5);
  *(_QWORD *)(v3 + 16) = v11;
  if ( v11 )
  {
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InitBuckets(v3);
    goto LABEL_4;
  }
  *(_QWORD *)&v16 = 0LL;
  v17 = 1;
LABEL_16:
  *((_QWORD *)&v16 + 1) = v9;
  *(_OWORD *)a2 = v16;
  *(_QWORD *)(a2 + 16) = v17;
  return a2;
}
