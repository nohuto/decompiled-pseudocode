/*
 * XREFs of ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18005DF40
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x1800189C0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005E044 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+30h] [rbp-28h] BYREF

  v16 = 0LL;
  if ( a3 != a4 )
  {
    v7 = a2 + 88;
    if ( *(_QWORD *)(a1 + 184) )
    {
      v8 = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, a2 + 88);
      LOBYTE(v9) = *(_BYTE *)(a1 + 200);
      v10 = v8;
      v11 = *(_QWORD *)(a1 + 184) + 16 * (v8 & ((8LL << v9) - 1));
      v12 = *(_QWORD **)v11;
      if ( *(_QWORD *)v11 )
      {
        v13 = **(_QWORD ***)(v11 + 8);
        while ( v12 != v13 )
        {
          if ( v12[2] >= v10 )
          {
            if ( v12[2] > v10 )
              return 0LL;
            if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v9, v7, v12 + 3) )
            {
              if ( v12 == (_QWORD *)(a1 + 168) )
                return 0LL;
              v15 = v12[72];
              v16 = __PAIR64__(a4, a3);
              result = RtlPublishWnfStateData(v15, 0LL, &v16, 8LL, 0LL);
              if ( (int)result >= 0 )
                return 0LL;
              return result;
            }
          }
          v12 = (_QWORD *)*v12;
        }
      }
    }
  }
  return 0LL;
}
