/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180035E74
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180035BBC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035C10 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065578 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800676B4 (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18006831C (-HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z @ 0x180068A8C (-HampActGetDependencyAction@@YA-AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180071A94 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x1800845DC (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 a2)
{
  struct _HAM_HOST_DEPENDENCY *i; // rax
  unsigned __int64 v5; // rax
  struct _RM_HAM_ACTIVITY_HOST *v6; // r13
  struct _HAM_HOST_DEPENDENCY *j; // rax
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // edx
  unsigned int v13; // r9d
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  void *v17; // rsi
  int v18; // ebp
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  void *v22; // rsi
  int v23; // ebp
  unsigned __int64 v24; // rax
  struct _HAM_HOST_DEPENDENCY *v25; // r14
  struct _HAM_HOST_DEPENDENCY *k; // rax
  char v27; // al
  struct _HAM_HOST_DEPENDENCY *v28; // r11
  __int64 v29; // rdx
  int DependencyAction; // eax
  __int64 v31; // r11

  for ( i = HampDepGroupGetFirstDependency(a1); i; i = HampDepGroupGetNextDependency(i) )
    *((_DWORD *)i + 8) = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      if ( !v5 )
        break;
      v5 ^= a2;
    }
    if ( !v5 )
      break;
    v6 = HampDepHostStackPop((struct _HAM_DEP_HOST_STACK *)a2);
    if ( (*((_QWORD *)v6 + 83) & 0x800000000LL) == 0 )
    {
      for ( j = HampDepGroupFindFirstDependencyForHost(a1, v6); ; j = HampDepGroupGetNextDependencyForHost(v25) )
      {
        v25 = j;
        if ( !j )
          break;
        if ( *((_BYTE *)j + 40) != 3 )
        {
          v8 = *((_DWORD *)j + 9);
          *((_DWORD *)j + 8) |= 8u;
          if ( (unsigned __int8)HampActGetDependencyAction(j, 2 * (v8 & 1u)) != 3 )
          {
            v9 = *((_DWORD *)v6 + 196) >> 2;
            v10 = *(_QWORD *)(*(_QWORD *)v25 + 80LL);
            v11 = *(unsigned int *)(v10 + 784);
            v12 = *(_DWORD *)(v10 + 784) >> 2;
            v13 = v12 & 3;
            if ( v13 <= (v9 & 3u) )
              LOBYTE(v12) = v9;
            *(_DWORD *)(v10 + 784) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(4 * v12)) & 0xC;
            v14 = *(_QWORD *)v25;
            *(_QWORD *)(v14 + 432) |= 0x20uLL;
            *(_DWORD *)(v14 + 480) ^= (*(_DWORD *)(v14 + 480) ^ (*(_DWORD *)(v10 + 784) >> 2)) & 3;
            v15 = *(unsigned int *)(v10 + 784);
            if ( (v15 & 2) != 0 )
            {
              if ( v13 < (((unsigned int)v15 >> 2) & 3) )
              {
                RtlRbRemoveNode(a2, v10 + 760);
                *(_QWORD *)(v10 + 776) = -1LL;
                v21 = *(_QWORD *)a2;
                v22 = (void *)((*(_DWORD *)(v10 + 784) >> 2) & 3);
                if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v21 )
                  v21 ^= a2;
                LOBYTE(v20) = 0;
                v23 = *(_BYTE *)(a2 + 8) & 1;
                if ( v21 )
                {
                  while ( 1 )
                  {
                    if ( (int)HampDepHostStackCompareHosts(v22, (struct _RTL_BALANCED_NODE *)v21) < 0 )
                    {
                      v24 = *(_QWORD *)v21;
                      if ( v23 )
                      {
                        if ( !v24 )
                          goto LABEL_48;
                        v24 ^= v21;
                      }
                      if ( !v24 )
                      {
LABEL_48:
                        LOBYTE(v20) = 0;
                        break;
                      }
                    }
                    else
                    {
                      v24 = *(_QWORD *)(v21 + 8);
                      if ( v23 )
                      {
                        if ( !v24 )
                          goto LABEL_42;
                        v24 ^= v21;
                      }
                      if ( !v24 )
                      {
LABEL_42:
                        LOBYTE(v20) = 1;
                        break;
                      }
                    }
                    v21 = v24;
                  }
                }
                RtlRbInsertNodeEx(a2, v21, v20, v10 + 760);
              }
            }
            else
            {
              v16 = *(_QWORD *)a2;
              v17 = (void *)((v15 >> 2) & 3);
              if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
              {
                if ( v16 )
                  v16 ^= a2;
              }
              LOBYTE(v11) = 0;
              v18 = *(_BYTE *)(a2 + 8) & 1;
              if ( v16 )
              {
                while ( 1 )
                {
                  if ( (int)HampDepHostStackCompareHosts(v17, (struct _RTL_BALANCED_NODE *)v16) < 0 )
                  {
                    v19 = *(_QWORD *)v16;
                    if ( v18 )
                    {
                      if ( !v19 )
                        goto LABEL_30;
                      v19 ^= v16;
                    }
                    if ( !v19 )
                    {
LABEL_30:
                      LOBYTE(v11) = 0;
                      break;
                    }
                  }
                  else
                  {
                    v19 = *(_QWORD *)(v16 + 8);
                    if ( v18 )
                    {
                      if ( !v19 )
                        goto LABEL_24;
                      v19 ^= v16;
                    }
                    if ( !v19 )
                    {
LABEL_24:
                      LOBYTE(v11) = 1;
                      break;
                    }
                  }
                  v16 = v19;
                }
              }
              RtlRbInsertNodeEx(a2, v16, v11, v10 + 760);
              *(_DWORD *)(v10 + 784) |= 2u;
            }
          }
        }
      }
    }
  }
  for ( k = HampDepGroupGetFirstDependency(a1); ; k = HampDepGroupGetNextDependency((struct _HAM_HOST_DEPENDENCY *)v31) )
  {
    v28 = k;
    if ( !k )
      break;
    v27 = *((_BYTE *)k + 40);
    if ( v27 == 1 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v28 + 6) + 816LL) > *((_QWORD *)v28 + 8)
        || *(_QWORD *)(*((_QWORD *)v28 + 7) + 816LL) > *((_QWORD *)v28 + 9) )
      {
        goto LABEL_60;
      }
    }
    else if ( v27 == 3 && HampTerminateDepShouldInvalidate(v28) )
    {
LABEL_60:
      *((_DWORD *)v28 + 9) |= 1u;
    }
    v29 = (2 * (*((_DWORD *)v28 + 9) & 1)) | 1u;
    if ( (*((_BYTE *)v28 + 32) & 8) == 0 )
      v29 = 2 * (*((_DWORD *)v28 + 9) & 1u);
    DependencyAction = HampActGetDependencyAction(v28, v29);
    *(_DWORD *)(v31 + 32) ^= (*(_DWORD *)(v31 + 32) ^ DependencyAction) & 7;
  }
}
