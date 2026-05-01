/*
 * XREFs of ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035034
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034C90 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034838 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035170 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180035424 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800354A4 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800369BC (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800719DC (-HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180083240 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupEnsureHostDisposition(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  int DepGroupDisposition; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // r14d
  struct _HAM_DEPENDENCY_GROUP *v14; // rsi
  struct _HAM_DEPENDENCY_GROUP *v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  HampHostAcquireTwoLocksExclusive(a1, a2);
  do
  {
    DepGroupDisposition = HampHostGetDepGroupDisposition(a1, a2);
    if ( !DepGroupDisposition )
    {
      v14 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v14 + 12) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseTwoLocksExclusive(a1, v7);
      v13 = 0;
      HampDepGroupWaitEnterStateChange(v14);
      v12 = 0;
      goto LABEL_16;
    }
    v9 = DepGroupDisposition - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v14 = v16[0];
          v12 = -1073741823;
          goto LABEL_18;
        }
        v11 = HampDepGroupTryMerge(v8, v7, v16);
      }
      else
      {
        v11 = HampDepGroupTryAddToExisting(v8, v7, v16);
      }
    }
    else
    {
      v11 = HampDepGroupCreate(
              (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99)
                                                                                                + 88LL)
                                                                                    + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                       + 120)
                                                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                              - 392),
              a1,
              a2,
              v16);
    }
    v12 = v11;
    v13 = 1;
  }
  while ( v11 == -1073741267 );
  v14 = v16[0];
  if ( v11 < 0 )
    goto LABEL_17;
LABEL_16:
  *a3 = v14;
  v14 = 0LL;
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
LABEL_18:
  HampHostReleaseTwoLocksExclusive(a1, a2);
LABEL_19:
  if ( v14 )
    HampDepGroupDereference(v14);
  return v12;
}
