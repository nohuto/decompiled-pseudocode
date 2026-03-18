/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x140A86DC4
 * Callers:
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpJoinClassOfTrust @ 0x140464940 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1404649BC (CmpPerformTrustClassAccessCheck.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmpUnJoinClassOfTrust @ 0x140497B6C (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407DA6B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpRecordUnloadEventForHive @ 0x1407DA7EC (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140909020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140909098 (LOCK_HIVE_LOAD.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  unsigned int v18; // ebx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // edi
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rbx
  int v26; // edx
  int v27; // [rsp+20h] [rbp-258h]
  PVOID Object; // [rsp+40h] [rbp-238h] BYREF
  __int64 v29; // [rsp+48h] [rbp-230h] BYREF
  __int64 *v30; // [rsp+50h] [rbp-228h]
  _QWORD *v31; // [rsp+58h] [rbp-220h]
  _BYTE v32[464]; // [rsp+60h] [rbp-218h] BYREF

  v30 = a8;
  v31 = a9;
  memset_0(v32, 0, sizeof(v32));
  v29 = 0LL;
  v13 = 0LL;
  Object = 0LL;
  CmpInitializeParseContext((__int64)v32);
  v14 = ObReferenceObjectByNameEx(
          a1,
          0LL,
          131097,
          (__int64)CmKeyObjectType,
          0,
          (__int64)v32,
          (PADAPTER_OBJECT *)&Object);
  v17 = (__int64 *)Object;
  if ( v14 < 0 )
  {
    v18 = -1073741275;
    goto LABEL_3;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_11;
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v21 = CmpPerformTrustClassAccessCheck(v13, a7);
    v22 = v21;
    if ( v21 < 0 )
    {
      v23 = v21;
      v24 = 32;
LABEL_20:
      SetFailureLocation(a6, 0, 33, v23, v24);
      if ( v22 == -1073741275 )
        v22 = -1073741823;
      v18 = v22;
      goto LABEL_28;
    }
LABEL_11:
    if ( CmpIsHiveAlreadyLoaded((__int64)v17, a2, a3, (__int64)&v29, v30) )
    {
      v25 = v29;
      v26 = *(_DWORD *)(v29 + 160);
      if ( ((v26 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v26 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive(v17[1]);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock(v17[1]);
          *v31 = v17[1];
        }
        if ( !a5 || (v22 = CmpRecordUnloadEventForHive(v25, a5), v23 = v22, v22 >= 0) )
        {
          CmpUnlockKcb(v17[1]);
          if ( v13 )
          {
            CmpUnJoinClassOfTrust(v25);
            *(_DWORD *)(v25 + 4112) |= 1u;
            CmpJoinClassOfTrust(v25, v13, a7);
          }
          v18 = 0;
          goto LABEL_28;
        }
        CmpUnlockKcb(v17[1]);
        v24 = 80;
        goto LABEL_20;
      }
      v27 = 64;
    }
    else
    {
      v27 = 48;
    }
    v18 = -1073741757;
    SetFailureLocation(a6, 0, 33, -1073741757, v27);
    goto LABEL_28;
  }
  v18 = -1073741444;
  SetFailureLocation(a6, 0, 33, -1073741444, 16);
LABEL_28:
  CmpUnlockRegistry(v20);
  UNLOCK_HIVE_LOAD();
LABEL_3:
  if ( v17 )
    ObfDereferenceObject(v17);
  CmpCleanupParseContext((__int64)v32, 0, v15, v16);
  return v18;
}
