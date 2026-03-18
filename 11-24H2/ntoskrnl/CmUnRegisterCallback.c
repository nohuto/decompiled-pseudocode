/*
 * XREFs of CmUnRegisterCallback @ 0x1407D1530
 * Callers:
 *     DifCmUnRegisterCallbackWrapper @ 0x14061AAA0 (DifCmUnRegisterCallbackWrapper.c)
 *     EtwpRegTraceEnableCallback @ 0x1409899F0 (EtwpRegTraceEnableCallback.c)
 *     VrpDecrementSiloCount @ 0x140AAB7A8 (VrpDecrementSiloCount.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402C6C40 (ExBlockOnAddressPushLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockCallbackListExclusive @ 0x1406F5D58 (CmpLockCallbackListExclusive.c)
 *     CmpUnlockCallbackList @ 0x140989CB0 (CmpUnlockCallbackList.c)
 *     CmpUnlockContextList @ 0x14098B2A0 (CmpUnlockContextList.c)
 *     CmpLockContextListExclusive @ 0x14098B30C (CmpLockContextListExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140BB9940 (CmListGetNextElement.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  __int64 NextElement; // rax
  char *v4; // rdi
  int v5; // eax
  _QWORD *v6; // rcx
  void **v7; // rax
  _QWORD *v9; // rcx
  void **v10; // rax
  char v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  _QWORD *v16; // r13
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // r15
  _QWORD *v25; // rbx
  PSLIST_ENTRY v26; // rbx
  PSLIST_ENTRY v27; // rcx
  void *v28; // rcx
  __int64 v29; // rcx
  PVOID *v30; // rbx
  __int128 v31; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v33[3]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v34; // [rsp+60h] [rbp-68h] BYREF
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int128 v36; // [rsp+78h] [rbp-50h] BYREF
  __int64 v37; // [rsp+88h] [rbp-40h]
  int v38; // [rsp+E8h] [rbp+20h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v2 = -1073741811;
  v36 = 0LL;
  v37 = 0LL;
  v31 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v34);
  v33[0] = 0LL;
  CmpLockCallbackListExclusive();
  do
  {
    do
    {
      NextElement = CmListGetNextElement(&CallbackListHead, v33, 0LL);
      v4 = (char *)NextElement;
      v33[1] = NextElement;
      if ( !NextElement )
        goto LABEL_12;
    }
    while ( *(_QWORD *)(NextElement + 24) != Cookie.QuadPart );
    v5 = *(_DWORD *)(NextElement + 16);
    if ( !v5 )
    {
      v9 = *(_QWORD **)v4;
      v10 = (void **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) == v4 && *v10 == v4 )
      {
        *v10 = v9;
        v9[1] = v10;
        CmpUnlockCallbackList();
        v2 = 0;
        goto LABEL_18;
      }
LABEL_46:
      __fastfail(3u);
    }
  }
  while ( v5 < 0 );
  _InterlockedOr((volatile signed __int32 *)v4 + 4, 0x80000000);
  CmpUnlockCallbackList();
  while ( 1 )
  {
    v38 = *((_DWORD *)v4 + 4);
    if ( v38 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock(&CallbackListDeleteEvent, v4 + 16, &v38, 4LL, 0LL);
  }
  CmpLockCallbackListExclusive();
  v6 = *(_QWORD **)v4;
  v7 = (void **)*((_QWORD *)v4 + 1);
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
    goto LABEL_46;
  *v7 = v6;
  v6[1] = v7;
  CmpUnlockCallbackList();
  v2 = 0;
LABEL_12:
  if ( v2 < 0 )
  {
    CmpUnlockCallbackList();
    goto LABEL_14;
  }
LABEL_18:
  *((_QWORD *)&v31 + 1) = &v31;
  *(_QWORD *)&v31 = &v31;
  v11 = 0;
  CmpLockContextListExclusive();
  v12 = v4 + 64;
  v13 = (_QWORD *)*((_QWORD *)v4 + 8);
  while ( 1 )
  {
    v32 = v13;
    if ( v13 == v12 )
      break;
    v14 = v13;
    v15 = v13;
    v13 = (_QWORD *)*v13;
    v16 = v14 - 2;
    if ( ObReferenceObjectSafe(v14[4]) )
    {
      v17 = *v15;
      v18 = (_QWORD *)v15[1];
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        goto LABEL_46;
      if ( (_QWORD *)*v18 != v15 )
        goto LABEL_46;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *v16;
      v20 = (_QWORD *)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_46;
      if ( (_QWORD *)*v20 != v16 )
        goto LABEL_46;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = (_QWORD *)*((_QWORD *)&v31 + 1);
      if ( **((__int128 ***)&v31 + 1) != &v31 )
        goto LABEL_46;
      *v15 = &v31;
      v15[1] = v21;
      *v21 = v15;
      *((_QWORD *)&v31 + 1) = v15;
    }
    else
    {
      v11 = 1;
    }
    v12 = v4 + 64;
  }
  CmpUnlockContextList();
  while ( 1 )
  {
    v23 = v31;
    if ( (__int128 *)v31 == &v31 )
      break;
    v29 = *(_QWORD *)v31;
    if ( *(__int128 **)(v31 + 8) != &v31 || *(_QWORD *)(v29 + 8) != (_QWORD)v31 )
      goto LABEL_46;
    *(_QWORD *)&v31 = *(_QWORD *)v31;
    *(_QWORD *)(v29 + 8) = &v31;
    v30 = (PVOID *)(v23 - 16);
    v33[2] = v23 - 16;
    v36 = *(_OWORD *)(v23 - 16 + 48);
    guard_dispatch_icall_no_overrides(*((_QWORD *)v4 + 4), 40LL, &v36, v22);
    ObfDereferenceObject(v30[6]);
    ExFreePoolWithTag(v30, 0x63634D43u);
  }
  if ( v11 )
  {
    v24 = v4 + 64;
    do
    {
      CmpLockContextListExclusive();
      v32 = (_QWORD *)*v24;
      v25 = v32;
      CmpUnlockContextList();
      if ( v25 == v24 )
        v11 = 0;
      else
        ExBlockOnAddressPushLock(&CallbackListDeleteEvent, v4 + 64, &v32, 8LL, 0LL);
    }
    while ( v11 );
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v26 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v26 )
    {
      v27 = v26;
      v26 = v26->Next;
      ExFreePoolWithTag(v27, 0);
    }
  }
  v28 = (void *)*((_QWORD *)v4 + 7);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  ExFreePoolWithTag(v4, 0);
LABEL_14:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v34);
  return v2;
}
