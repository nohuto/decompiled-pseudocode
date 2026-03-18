/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14013104C
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x140130C30 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     PostDeviceNotification @ 0x14012F608 (PostDeviceNotification.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1401AEF9C (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x1401AF090 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401F386C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1401F95DC (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1401F9D7C (SearchHidTLCInfo.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401FBB7C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x140207D68 (-SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x140228B40 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InsertProcRequest(
        struct tagPROCESSINFO *a1,
        const struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        int a4,
        int a5,
        struct tagWND *a6,
        int a7)
{
  const struct tagRAWINPUTDEVICE *v8; // r14
  __int64 UserSessionState; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagHID_PAGEONLY_REQUEST *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct DEVICEINFO *i; // rsi
  __int64 v29; // r8
  char *v30; // [rsp+30h] [rbp-40h] BYREF
  struct tagWND *v31; // [rsp+38h] [rbp-38h]
  _BYTE v32[16]; // [rsp+40h] [rbp-30h] BYREF
  tagObjLock *v33; // [rsp+50h] [rbp-20h]
  char v34; // [rsp+60h] [rbp-10h]

  v8 = a2;
  switch ( a4 )
  {
    case 1:
      if ( !a5 )
      {
        UserSessionState = W32GetUserSessionState(a1, a2);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v30,
          (struct RIMLOCK *)(UserSessionState + 104));
        v11 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v11 )
        {
          v11 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
          if ( !v11 )
          {
LABEL_5:
            UserSetLastError(8);
            RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v30);
            return 0LL;
          }
        }
        *((_QWORD *)a3 + 3) = v11;
        ++*(_DWORD *)(v11 + 24);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v30);
      }
      if ( !a7 )
      {
        v30 = (char *)a3 + 32;
        v31 = a6;
        HMAssignmentLock(&v30, 0LL);
      }
      v13 = *((_QWORD *)a1 + 104) + 16LL;
LABEL_11:
      v14 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
      {
        *(_QWORD *)a3 = v14;
        *((_QWORD *)a3 + 1) = v13;
        *(_QWORD *)(v14 + 8) = a3;
LABEL_26:
        *(_QWORD *)v13 = a3;
        break;
      }
      goto LABEL_24;
    case 2:
      v15 = SearchHidPageOnlyRequest(*((_WORD *)a3 + 8));
      if ( !v15 )
      {
        v15 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8));
        if ( !v15 )
        {
          UserSetLastError(8);
          return 0LL;
        }
      }
      *((_QWORD *)a3 + 3) = v15;
      SetHidPOCountToTLCInfo(*((_WORD *)a3 + 8), ++*((_DWORD *)v15 + 5), 0);
      v30 = (char *)a3 + 32;
      v31 = a6;
      HMAssignmentLock(&v30, 0LL);
      v13 = *((_QWORD *)a1 + 104) + 32LL;
      goto LABEL_11;
    case 3:
      if ( !a5 )
      {
        v16 = W32GetUserSessionState(a1, a2);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v30,
          (struct RIMLOCK *)(v16 + 104));
        v17 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v17 )
        {
          v17 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
          if ( !v17 )
            goto LABEL_5;
        }
        *((_QWORD *)a3 + 3) = v17;
        ++*(_DWORD *)(v17 + 36);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v30);
      }
      v13 = *((_QWORD *)a1 + 104) + 48LL;
      a2 = *(const struct tagRAWINPUTDEVICE **)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
      {
        *(_QWORD *)a3 = a2;
        *((_QWORD *)a3 + 1) = v13;
        *((_QWORD *)a2 + 1) = a3;
        goto LABEL_26;
      }
LABEL_24:
      __fastfail(3u);
  }
  v18 = *((_DWORD *)a3 + 5) & 0xFFFFFFFB | (*((_DWORD *)v8 + 1) >> 11) & 4;
  *((_DWORD *)a3 + 5) = v18;
  if ( (*((_DWORD *)v8 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (v18 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 104) + 80LL);
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v32);
      v21 = W32GetUserSessionState(v20, v19);
      ++*(_DWORD *)(v21 + 16856);
      if ( v34 )
      {
        if ( v33 )
          tagObjLock::UnLockExclusive(v33);
      }
    }
    v22 = *((_DWORD *)a3 + 5) | 1;
    *((_DWORD *)a3 + 5) = v22;
    if ( (*((_DWORD *)v8 + 1) & 0x1000) != 0 )
      v18 = v22 | 2u;
    else
      v18 = v22 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v18;
  }
  v23 = W32GetUserSessionState(v18, a2);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v23 + 16840));
  W32AcquirePushLockSharedEx(Lock, 0);
  v27 = W32GetUserSessionState(v26, v25);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v27 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, v29, 1LL, 0, 1);
  W32ReleasePushLockSharedEx(Lock, 0LL);
  return 1LL;
}
