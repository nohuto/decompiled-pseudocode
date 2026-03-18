/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401305C0
 * Callers:
 *     _RegisterRawInputDevices @ 0x14012FA44 (_RegisterRawInputDevices.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x14002BEB0 (EditionUpdateRawMouseMode.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x140130994 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ValidatePtiMouse @ 0x1401314E0 (ValidatePtiMouse.c)
 *     HasHidTable @ 0x140172640 (HasHidTable.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x1401AF090 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // ecx
  struct tagPROCESS_HID_REQUEST *v4; // rsi
  int v5; // ecx
  struct tagPROCESS_HID_REQUEST *v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  struct tagPROCESS_HID_REQUEST *v9; // rsi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  tagObjLock *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 UserSessionState; // rax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-40h] BYREF
  __int64 v47; // [rsp+28h] [rbp-38h]
  _BYTE v48[16]; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v49; // [rsp+40h] [rbp-20h]
  char v50; // [rsp+50h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 104);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  v3 = *(_DWORD *)(v1 + 100);
  v4 = v2;
  if ( v2 )
  {
    v5 = v3 | 0x10;
    *(_DWORD *)(v1 + 100) = v5;
    if ( -__CFSHR__(v5, 7) != -(*((_DWORD *)v2 + 5) & 1) )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v48);
        UserSessionState = W32GetUserSessionState(v28, v27);
        ++*(_DWORD *)(UserSessionState + 16848);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v48);
        v45 = W32GetUserSessionState(v44, v43);
        --*(_DWORD *)(v45 + 16848);
      }
      if ( v50 && v49 )
        tagObjLock::UnLockExclusive(v49);
      v30 = (*((_DWORD *)v4 + 5) << 6) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v4 + 5) << 6)) & 0xFFFFFFBF;
      *(_DWORD *)(v1 + 100) = v30;
      *(_DWORD *)(v1 + 100) = (*((_DWORD *)v4 + 5) << 6) ^ ((*((_DWORD *)v4 + 5) << 6) ^ v30) & 0xFFFFFF7F;
    }
    v46 = v1 + 72;
    v47 = *((_QWORD *)v4 + 4);
    HMAssignmentLock(&v46, 0LL);
  }
  else
  {
    v23 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v23;
    if ( (v23 & 0x40) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v48);
      v39 = W32GetUserSessionState(v38, v37);
      --*(_DWORD *)(v39 + 16848);
      if ( v50 )
      {
        if ( v49 )
          tagObjLock::UnLockExclusive(v49);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v6 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v8 = *(_DWORD *)(v1 + 100);
  v9 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v1 + 112) = 0;
    v10 = v8 | 1;
    *(_DWORD *)(v1 + 100) = v10;
    v11 = -(*((_DWORD *)v6 + 5) & 1);
    v12 = (unsigned int)-__CFSHR__(v10, 3);
    if ( (_DWORD)v12 != (_DWORD)v11 )
    {
      if ( (*((_DWORD *)v6 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v48);
        v42 = W32GetUserSessionState(v41, v40);
        ++*(_DWORD *)(v42 + 16852);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v48);
        v26 = W32GetUserSessionState(v25, v24);
        --*(_DWORD *)(v26 + 16852);
      }
      if ( v50 && v49 )
        tagObjLock::UnLockExclusive(v49);
      v11 = (4 * *((_DWORD *)v9 + 5)) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v9 + 5))) & 0xFFFFFFFB;
      *(_DWORD *)(v1 + 100) = v11;
      v12 = (4 * *((_DWORD *)v9 + 5)) ^ ((unsigned int)v11 ^ (4 * *((_DWORD *)v9 + 5))) & 0xFFFFFFF7;
      *(_DWORD *)(v1 + 100) = v12;
    }
    v13 = W32GetUserSessionState(v12, v11);
    v14 = ValidatePtiMouse(*(_QWORD *)(v13 + 18944));
    v15 = v14;
    if ( v14 && (unsigned int)HasHidTable(v14) && *(_QWORD *)(*(_QWORD *)(v15 + 464) + 832LL) == v1 )
    {
      v18 = W32GetUserSessionState(v17, v16);
      EditionUpdateRawMouseMode(*(_QWORD *)(v18 + 18944));
    }
    v46 = v1 + 64;
    v47 = *((_QWORD *)v9 + 4);
    HMAssignmentLock(&v46, 0LL);
  }
  else
  {
    v19 = (tagObjLock *)(v8 & 0xFFFFF6FC);
    *(_DWORD *)(v1 + 100) = (_DWORD)v19;
    if ( ((unsigned __int8)v19 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v48);
      v36 = W32GetUserSessionState(v35, v34);
      --*(_DWORD *)(v36 + 16852);
      if ( v50 )
      {
        v19 = v49;
        if ( v49 )
          tagObjLock::UnLockExclusive(v49);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFFF3;
    v20 = W32GetUserSessionState(v19, v7);
    v21 = ValidatePtiMouse(*(_QWORD *)(v20 + 18944));
    v22 = v21;
    if ( v21 && (unsigned int)HasHidTable(v21) && *(_QWORD *)(*(_QWORD *)(v22 + 464) + 832LL) == v1 )
    {
      v33 = W32GetUserSessionState(v32, v31);
      EditionUpdateRawMouseMode(*(_QWORD *)(v33 + 18944));
    }
    HMAssignmentUnlock(v1 + 64);
  }
}
