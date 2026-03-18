/*
 * XREFs of CmUnRegisterCallback @ 0x1407C1E10
 * Callers:
 *     DifCmUnRegisterCallbackWrapper @ 0x14060EAE0 (DifCmUnRegisterCallbackWrapper.c)
 *     EtwpRegTraceEnableCallback @ 0x140995000 (EtwpRegTraceEnableCallback.c)
 *     VrpDecrementSiloCount @ 0x140AA61E8 (VrpDecrementSiloCount.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockCallbackListExclusive @ 0x1406EA3FC (CmpLockCallbackListExclusive.c)
 *     CmpUnlockContextList @ 0x140949BA0 (CmpUnlockContextList.c)
 *     CmpLockContextListExclusive @ 0x140949C0C (CmpLockContextListExclusive.c)
 *     CmpUnlockCallbackList @ 0x1409952C0 (CmpUnlockCallbackList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
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
  __int64 v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // rbx
  PSLIST_ENTRY v25; // rbx
  PSLIST_ENTRY v26; // rcx
  void *v27; // rcx
  __int64 v28; // rcx
  PVOID *v29; // rbx
  _QWORD *v30; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v31[3]; // [rsp+38h] [rbp-90h] BYREF
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  __int128 v33; // [rsp+60h] [rbp-68h] BYREF
  __int128 v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+80h] [rbp-48h]
  int v36; // [rsp+E8h] [rbp+20h] BYREF

  v33 = 0LL;
  v2 = -1073741811;
  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v33);
  v31[0] = 0LL;
  CmpLockCallbackListExclusive();
  do
  {
    do
    {
      NextElement = CmListGetNextElement(&CallbackListHead, v31, 0LL);
      v4 = (char *)NextElement;
      v31[1] = NextElement;
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
    v36 = *((_DWORD *)v4 + 4);
    if ( v36 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock(&CallbackListDeleteEvent, v4 + 16, &v36, 4LL, 0LL);
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
  *((_QWORD *)&v32 + 1) = &v32;
  *(_QWORD *)&v32 = &v32;
  v11 = 0;
  CmpLockContextListExclusive();
  v12 = v4 + 64;
  v13 = (_QWORD *)*((_QWORD *)v4 + 8);
  while ( 1 )
  {
    v30 = v13;
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
      v21 = (_QWORD *)*((_QWORD *)&v32 + 1);
      if ( **((__int128 ***)&v32 + 1) != &v32 )
        goto LABEL_46;
      *v15 = &v32;
      v15[1] = v21;
      *v21 = v15;
      *((_QWORD *)&v32 + 1) = v15;
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
    v22 = v32;
    if ( (__int128 *)v32 == &v32 )
      break;
    v28 = *(_QWORD *)v32;
    if ( *(__int128 **)(v32 + 8) != &v32 || *(_QWORD *)(v28 + 8) != (_QWORD)v32 )
      goto LABEL_46;
    *(_QWORD *)&v32 = *(_QWORD *)v32;
    *(_QWORD *)(v28 + 8) = &v32;
    v29 = (PVOID *)(v22 - 16);
    v31[2] = v22 - 16;
    v34 = *(_OWORD *)(v22 - 16 + 48);
    guard_dispatch_icall_no_overrides(*((_QWORD *)v4 + 4));
    ObfDereferenceObject(v29[6]);
    ExFreePoolWithTag(v29, 0x63634D43u);
  }
  if ( v11 )
  {
    v23 = v4 + 64;
    do
    {
      CmpLockContextListExclusive();
      v30 = (_QWORD *)*v23;
      v24 = v30;
      CmpUnlockContextList();
      if ( v24 == v23 )
        v11 = 0;
      else
        ExBlockOnAddressPushLock(&CallbackListDeleteEvent, v4 + 64, &v30, 8LL, 0LL);
    }
    while ( v11 );
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v25 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v25 )
    {
      v26 = v25;
      v25 = v25->Next;
      ExFreePoolWithTag(v26, 0);
    }
  }
  v27 = (void *)*((_QWORD *)v4 + 7);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  ExFreePoolWithTag(v4, 0);
LABEL_14:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v33);
  return v2;
}
