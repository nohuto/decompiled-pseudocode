/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AF14
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800092AC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009E5C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EEC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180017344 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001E70C (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026B24 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180053C54 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180071688 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800825BC (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180091A10 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r14
  int v9; // ebx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v12; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v13; // rcx
  struct _RM_HAM_ACTIVITY_HOST *j; // rax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _RM_HAM_ACTIVITY_HOST *v18; // r14
  int v19; // eax

  v1 = *((_QWORD *)a1 + 99);
  v3 = *(_QWORD *)(v1 + 88);
  RmpAcquireGlobalLock();
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
  v4 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  if ( v4 && RmHamHostReferenceUnsafe(v4) )
    v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  else
    v5 = 0LL;
  RmpReleaseGlobalLock();
  v6 = *(_QWORD **)(v1 + 608);
  v7 = (_QWORD *)((char *)a1 + 824);
  if ( *v6 != v1 + 600 )
    __fastfail(3u);
  *v7 = v1 + 600;
  *((_QWORD *)a1 + 104) = v6;
  v8 = 624LL;
  *v6 = v7;
  *(_QWORD *)(v1 + 608) = v7;
  if ( a1 )
    v8 = (__int64)a1 + 560;
  if ( *(_DWORD *)v8 == 2 )
  {
    if ( *((_BYTE *)a1 + 592) )
    {
      if ( !*(_QWORD *)(v1 + 576) )
      {
        *(_QWORD *)(v1 + 576) = a1;
        HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
        goto LABEL_10;
      }
      MicrosoftTelemetryAssertTriggeredNoArgs();
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      v17 = 4867LL;
    }
    else
    {
      if ( !*(_QWORD *)(v1 + 568) )
      {
        *(_QWORD *)(v1 + 568) = a1;
        goto LABEL_7;
      }
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      v17 = 4864LL;
    }
    HampAppQueueTerminate(v1, v16, v17);
    v9 = -1058275322;
    goto LABEL_11;
  }
LABEL_7:
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  if ( *(_DWORD *)v8 != 2 )
  {
    if ( v5 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
      *((_QWORD *)a1 + 100) = RmHamHostReference(v5);
      HampHostReleaseLockExclusive(a1);
      RmpReleaseGlobalLock();
    }
    goto LABEL_10;
  }
  for ( i = HampAppGetFirstHost((struct _HAM_APPLICATION *)v1); ; i = HampAppGetNextHost(v12) )
  {
    v12 = i;
    if ( !i )
      break;
    if ( *((_BYTE *)i + 592) != 1 && *((_DWORD *)i + 140) != 2 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v12, 0);
      *((_QWORD *)v12 + 100) = RmHamHostReference(a1);
      HampHostReleaseLockExclusive(v12);
      RmpReleaseGlobalLock();
    }
  }
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v3);
    *(_QWORD *)(v3 + 328) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    for ( j = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(v3, 3LL); ; j = HampPkgGetNextHost(v15) )
    {
      v15 = j;
      if ( !j )
        break;
      if ( *((_BYTE *)j + 592) != 1 && *((_DWORD *)j + 140) == 2 && j != a1 && !*((_QWORD *)j + 89) )
      {
        v9 = HampDepGroupAddPpleDependency(j, a1);
        if ( v9 < 0 )
          goto LABEL_11;
      }
    }
    goto LABEL_10;
  }
  if ( *((_QWORD *)a1 + 89) )
  {
LABEL_10:
    v9 = 0;
    goto LABEL_11;
  }
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v3);
  v13 = *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 328);
  if ( v13 && RmHamHostReferenceUnsafe(v13) )
  {
    v18 = *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 328);
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    RmpReleaseGlobalLock();
    v19 = HampDepGroupAddPpleDependency(a1, v18);
    v9 = 0;
    if ( v19 < 0 )
      v9 = v19;
    if ( v18 )
      RmHamHostDereference(v18);
  }
  else
  {
    v9 = 0;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    RmpReleaseGlobalLock();
  }
LABEL_11:
  if ( v5 )
    RmHamHostDereference(v5);
  return (unsigned int)v9;
}
