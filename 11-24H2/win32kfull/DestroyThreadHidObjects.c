/*
 * XREFs of DestroyThreadHidObjects @ 0x1401AEBF0
 * Callers:
 *     <none>
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x14002BEB0 (EditionUpdateRawMouseMode.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x140130AE8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x140130B64 (FreeHidProcessRequest.c)
 *     ValidatePtiMouse @ 0x1401314E0 (ValidatePtiMouse.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x1401AF090 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x140271D58 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char v6; // dl
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  __int64 v9; // rax
  struct tagPROCESS_HID_REQUEST *v10; // rsi
  struct tagPROCESS_HID_REQUEST *v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  tagObjLock *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct tagPROCESS_HID_REQUEST *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  const struct tagPROCESSINFO *v28; // rcx
  struct tagPROCESSINFO *v29; // rcx
  struct tagPROCESS_HID_REQUEST *v30; // rax
  struct tagPROCESS_HID_REQUEST *v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v34[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v35; // [rsp+38h] [rbp-40h]
  char v36; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 832LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      v12 = *(_DWORD *)(v2 + 100) & 0xFFFFFFCF;
      *(_DWORD *)(v2 + 100) = v12;
      if ( (v12 & 0x40) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v34);
        UserSessionState = W32GetUserSessionState(v14, v13);
        --*(_DWORD *)(UserSessionState + 16848);
        if ( v36 && v35 )
          tagObjLock::UnLockExclusive(v35);
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    v18 = *(_DWORD *)(v2 + 100) & 0xFFFFF7FC;
    *(_DWORD *)(v2 + 100) = v18;
    if ( (v18 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v34);
      v27 = W32GetUserSessionState(v26, v25);
      --*(_DWORD *)(v27 + 16852);
      if ( v36 )
      {
        v17 = v35;
        if ( v35 )
          tagObjLock::UnLockExclusive(v35);
      }
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    v19 = W32GetUserSessionState(v17, v16);
    if ( ValidatePtiMouse(*(_QWORD *)(v19 + 18944)) == a1 )
    {
      v22 = W32GetUserSessionState(v21, v20);
      EditionUpdateRawMouseMode(*(_QWORD *)(v22 + 18944));
    }
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  v5 = *(_QWORD *)(a1 + 1360);
  if ( (v5 & 0x200000) != 0 )
  {
    v28 = *(const struct tagPROCESSINFO **)(a1 + 464);
    *(_QWORD *)(a1 + 1360) = v5 & 0xFFFFFFFFFFDFFFFFuLL;
    if ( !(unsigned int)HasRawKeyboardPerThreadRegistration(v28) )
    {
      v33 = 0;
      v30 = SearchProcessHidRequest(v29, 1u, 6u, &v33);
      if ( v30 )
      {
        FreeHidProcessRequest(v30, v33, (struct tagPROCESS_HID_TABLE *)v2);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = 0;
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v8 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    v9 = *((_QWORD *)v8 + 4);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == a1 )
      {
        FreeHidProcessRequest(v8, 1, (struct tagPROCESS_HID_TABLE *)v2);
        v6 = 1;
      }
    }
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v23 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    v24 = *((_QWORD *)v23 + 4);
    if ( v24 && *(_QWORD *)(v24 + 16) == a1 )
    {
      FreeHidProcessRequest(v23, 2, (struct tagPROCESS_HID_TABLE *)v2);
      v6 = 1;
    }
  }
  v11 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v11 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v31 = v11;
    v11 = *(struct tagPROCESS_HID_REQUEST **)v11;
    v32 = *((_QWORD *)v31 + 4);
    if ( v32 && *(_QWORD *)(v32 + 16) == a1 )
    {
      FreeHidProcessRequest(v31, 3, (struct tagPROCESS_HID_TABLE *)v2);
      v6 = 1;
    }
  }
  if ( v6 )
    *(_QWORD *)(*(_QWORD *)(a1 + 464) + 816LL) |= 0x8000000uLL;
}
