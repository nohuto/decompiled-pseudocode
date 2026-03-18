/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x140A82524
 * Callers:
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpJoinClassOfTrust @ 0x140465784 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x140465800 (CmpPerformTrustClassAccessCheck.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmpUnJoinClassOfTrust @ 0x140498D80 (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407CAEF0 (CmpIsHiveAlreadyLoaded.c)
 *     CmpRecordUnloadEventForHive @ 0x1407CB028 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     LOCK_HIVE_LOAD @ 0x140883970 (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        __int64 *a8,
        _QWORD *a9)
{
  __int64 v13; // r15
  int v14; // eax
  __int64 *v15; // rsi
  unsigned int v16; // ebx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edi
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rbx
  int v24; // edx
  int v25; // [rsp+20h] [rbp-258h]
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  __int64 v27; // [rsp+48h] [rbp-230h] BYREF
  __int64 *v28; // [rsp+50h] [rbp-228h]
  _QWORD *v29; // [rsp+58h] [rbp-220h]
  _BYTE v30[464]; // [rsp+60h] [rbp-218h] BYREF

  v28 = a8;
  v29 = a9;
  memset_0(v30, 0, sizeof(v30));
  v27 = 0LL;
  v13 = 0LL;
  Object = 0LL;
  CmpInitializeParseContext((__int64)v30);
  v14 = ObReferenceObjectByNameEx(
          a1,
          0LL,
          0x20019u,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          0,
          (__int64)v30,
          (PADAPTER_OBJECT *)&Object);
  v15 = (__int64 *)Object;
  if ( v14 < 0 )
  {
    v16 = -1073741275;
    goto LABEL_3;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_11;
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v19 = CmpPerformTrustClassAccessCheck(v13, a7);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = v19;
      v22 = 32;
LABEL_20:
      SetFailureLocation(a6, 0, 33, v21, v22);
      if ( v20 == -1073741275 )
        v20 = -1073741823;
      v16 = v20;
      goto LABEL_28;
    }
LABEL_11:
    if ( CmpIsHiveAlreadyLoaded((__int64)v15, a2, a3, (__int64)&v27, v28) )
    {
      v23 = v27;
      v24 = *(_DWORD *)(v27 + 160);
      if ( ((v24 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v24 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive(v15[1]);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock(v15[1]);
          *v29 = v15[1];
        }
        if ( !a5 || (v20 = CmpRecordUnloadEventForHive(v23, a5), v21 = v20, v20 >= 0) )
        {
          CmpUnlockKcb(v15[1]);
          if ( v13 )
          {
            CmpUnJoinClassOfTrust(v23);
            *(_DWORD *)(v23 + 4112) |= 1u;
            CmpJoinClassOfTrust(v23, v13, a7);
          }
          v16 = 0;
          goto LABEL_28;
        }
        CmpUnlockKcb(v15[1]);
        v22 = 80;
        goto LABEL_20;
      }
      v25 = 64;
    }
    else
    {
      v25 = 48;
    }
    v16 = -1073741757;
    SetFailureLocation(a6, 0, 33, -1073741757, v25);
    goto LABEL_28;
  }
  v16 = -1073741444;
  SetFailureLocation(a6, 0, 33, -1073741444, 16);
LABEL_28:
  CmpUnlockRegistry(v18);
  UNLOCK_HIVE_LOAD();
LABEL_3:
  if ( v15 )
    ObfDereferenceObject(v15);
  CmpCleanupParseContext((__int64)v30, 0);
  return v16;
}
