/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013DE4
 * Callers:
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18001C4C4 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18004354C (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800583EC (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180068998 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18006CC48 (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007FA58 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x1800839C4 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180014A30 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180014A50 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  void *v2; // rbp
  unsigned __int64 v3; // rdi
  char *v4; // r14
  unsigned __int64 v6; // rbx
  int v7; // esi
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  int v12; // ebp
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  int v17; // ebp
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  unsigned __int64 v24; // rbx
  __int64 v25; // rax

  v2 = (void *)*((unsigned int *)a2 + 50);
  v3 = (unsigned __int64)a1 + 392;
  v4 = (char *)a1 + 408;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v6 = *(_QWORD *)v3;
  v7 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
    {
      v6 ^= v3;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    while ( v6 )
    {
      v8 = HampSessionCompareById(v2, (void *)v6);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)v6;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      if ( v7 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
  }
  v10 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( !v10 )
    return 0LL;
  RtlAcquireSRWLockShared(v10 + 56);
  v11 = *(_QWORD *)(v10 + 40);
  v12 = *(_BYTE *)(v10 + 48) & 1;
  if ( (*(_BYTE *)(v10 + 48) & 1) == 0 )
    goto LABEL_25;
  if ( v11 )
  {
    v11 ^= v10 + 40;
LABEL_25:
    while ( v11 )
    {
      v13 = HampUserCompareByIdentity((char *)a2 + 132, (void *)v11);
      if ( v13 < 0 )
      {
        v14 = *(_QWORD *)v11;
      }
      else
      {
        if ( v13 <= 0 )
          break;
        v14 = *(_QWORD *)(v11 + 8);
      }
      if ( v12 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
    }
  }
  v15 = v11;
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v15 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v10 + 56);
  if ( !v15 )
    goto LABEL_55;
  RtlAcquireSRWLockShared(v15 + 56);
  v16 = *(_QWORD *)(v15 + 40);
  v17 = *(_BYTE *)(v15 + 48) & 1;
  if ( (*(_BYTE *)(v15 + 48) & 1) == 0 )
    goto LABEL_41;
  if ( v16 )
  {
    v16 ^= v15 + 40;
LABEL_41:
    while ( v16 )
    {
      v18 = HampPkgCompareByIdentity(a2, (void *)v16);
      if ( v18 < 0 )
      {
        v19 = *(_QWORD *)v16;
      }
      else
      {
        if ( v18 <= 0 )
          break;
        v19 = *(_QWORD *)(v16 + 8);
      }
      if ( v17 && v19 )
        v16 ^= v19;
      else
        v16 = v19;
    }
  }
  v20 = v16;
  if ( v16 )
  {
    if ( *(_QWORD *)(v16 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v20 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v15 + 56);
  if ( !v20 )
LABEL_55:
    v20 = 0LL;
  _m_prefetchw((const void *)(v10 + 24));
  v21 = *(_QWORD *)(v10 + 24);
  while ( v21 - 1 > 0 )
  {
    v22 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v21 - 1, v21);
    if ( v22 == v21 )
      goto LABEL_49;
  }
  if ( v21 != 1 )
    __fastfail(0xEu);
  v24 = *(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( *(_QWORD *)(v10 + 16) == -1LL )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v10 + 24)) <= -1 )
      __fastfail(0xEu);
LABEL_62:
    (*(void (__fastcall **)(unsigned __int64))(v24 + 24))(v10);
    goto LABEL_49;
  }
  RtlAcquireSRWLockExclusive(v24 + 16);
  v25 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 24));
  if ( v25 <= 0 )
  {
    if ( v25 )
      __fastfail(0xEu);
    RtlReleaseSRWLockExclusive(v24 + 16);
    goto LABEL_62;
  }
  RtlReleaseSRWLockExclusive(v24 + 16);
LABEL_49:
  if ( v15 )
    CemRcObjectDereference(v15);
  return (struct _HAM_PACKAGE *)v20;
}
