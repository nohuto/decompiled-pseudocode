/*
 * XREFs of WmipReceiveNotifications @ 0x140475EC4
 * Callers:
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x1403CBB0C (WmipClearIrpObjectList.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     WmipCompleteGuidIrpWithError @ 0x140484410 (WmipCompleteGuidIrpWithError.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x140A4CE20 (WmipCopyFromEventQueues.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, int *a2, __int64 a3)
{
  int v3; // r13d
  __int64 v5; // r12
  _DWORD *v6; // r15
  unsigned int v7; // r14d
  _BYTE *Pool2; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // r9d
  __int64 i; // rax
  void *v15; // rcx
  NTSTATUS v16; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  char v22; // r12
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 **v27; // rax
  unsigned int v29; // r12d
  bool v30; // r14
  PVOID *v31; // rbx
  __int64 v32; // rax
  unsigned int v33; // ebx
  int v34; // r14d
  int v35; // eax
  _QWORD *v36; // r12
  __int64 v37; // r13
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-BCh]
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-B0h]
  unsigned int v42; // [rsp+54h] [rbp-ACh]
  int v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+5Ch] [rbp-A4h]
  int v45; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  int *v47; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[256]; // [rsp+90h] [rbp-70h] BYREF

  v38 = 0;
  v5 = *a1;
  v6 = a1;
  v7 = *a2;
  v47 = a2;
  v45 = -1073741811;
  if ( (unsigned int)v5 > 0x10 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 16 * v5, 0x70696D57u);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v9 = 0LL;
  LOBYTE(v44) = 0;
  LOBYTE(v3) = 0;
  v42 = 0;
  LOBYTE(v10) = 0;
  LODWORD(v40) = v3;
  v11 = 0;
  v41 = v10;
  v12 = 0LL;
  v43 = 0;
  v13 = 1;
  for ( i = 0LL; ; i = v39 + 1 )
  {
    v39 = i;
    if ( (unsigned int)i >= (unsigned int)v5 )
      break;
    v15 = *(void **)&v6[2 * i + 2];
    Object = 0LL;
    v16 = ObReferenceObjectByHandle(v15, 4u, WmipGuidObjectType, 1, &Object, 0LL);
    v45 = v16;
    if ( v16 < 0 )
    {
      v29 = v16;
      goto LABEL_28;
    }
    v17 = Object;
    v18 = 0;
    v13 = 1;
    while ( v18 < (unsigned int)v12 )
    {
      if ( Object == *(PVOID *)&Pool2[16 * v18] )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        v10 = v41;
        v13 = 1;
        v9 = v42;
        v11 = v43;
        goto LABEL_15;
      }
      ++v18;
    }
    v10 = (unsigned __int8)v41;
    if ( *((_QWORD *)Object + 9) )
      v10 = 1LL;
    v19 = 2LL * (unsigned int)v12;
    v12 = (unsigned int)(v12 + 1);
    v41 = v10;
    *(_QWORD *)&Pool2[8 * v19] = Object;
    if ( *((_QWORD *)v17 + 12) )
    {
      v3 = (unsigned __int8)v3;
      if ( v17[29] )
        v3 = 1;
      LODWORD(v40) = v3;
    }
    if ( *((_QWORD *)v17 + 16) )
    {
      v35 = (unsigned __int8)v44;
      if ( v17[37] )
        v35 = 1;
      v44 = v35;
    }
    v9 = ((v17[29] + 7) & 0xFFFFFFF8) + v42;
    v20 = (v17[37] + 7) & 0xFFFFFFF8;
    v42 += (v17[29] + 7) & 0xFFFFFFF8;
    v11 = v20 + v43;
    v43 += v20;
LABEL_15:
    ;
  }
  v21 = v9 + v11;
  v39 = v21;
  if ( (_BYTE)v10 == 1 && (_DWORD)v12 )
  {
    v36 = Pool2;
    v37 = (unsigned int)v12;
    do
    {
      if ( *(_QWORD *)(*v36 + 72LL) )
      {
        WmipCompleteGuidIrpWithError(*v36, v10, v9, 1LL);
        v13 = 1;
      }
      v36 += 2;
      --v37;
    }
    while ( v37 );
    v21 = v39;
    LOBYTE(v3) = v40;
  }
  v22 = v44;
  if ( (unsigned __int8)v44 | (unsigned __int8)v3 )
  {
    if ( v21 > v7 )
    {
      v34 = 56;
      v6[11] = 32;
      *v6 = 56;
      v6[12] = v21;
    }
    else
    {
      v32 = 0LL;
      v33 = v7;
      v40 = 0LL;
      if ( (_BYTE)v3 )
      {
        WmipCopyFromEventQueues((_DWORD)Pool2, v12, (_DWORD)v6, 1, (__int64)&v38, (__int64)&v40, 1);
        LODWORD(v6) = v38 + (_DWORD)v6;
        v32 = v40;
        v33 = v7 - v38;
      }
      if ( v22 )
      {
        WmipCopyFromEventQueues((_DWORD)Pool2, v12, (_DWORD)v6, v13, (__int64)&v38, (__int64)&v40, 0);
        v33 -= v38;
        v32 = v40;
      }
      if ( v32 )
        *(_DWORD *)(v32 + 12) = 0;
      v34 = v7 - v33;
    }
    v29 = v45;
    *v47 = v34;
  }
  else
  {
    v23 = a3 + 120;
    v24 = 0;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    *(_QWORD *)(a3 + 128) = a3 + 120;
    *(_QWORD *)(a3 + 120) = a3 + 120;
    for ( LockHandle.LockQueue = 0LL; v24 < (unsigned int)v12; *(_QWORD *)(a3 + 128) = v26 )
    {
      v25 = *(_QWORD *)&Pool2[16 * v24];
      *(_QWORD *)(v25 + 72) = a3;
      v26 = (__int64 *)(v25 + 80);
      v27 = *(__int64 ***)(a3 + 128);
      if ( *v27 != (__int64 *)v23 )
        __fastfail(3u);
      *v26 = v23;
      ++v24;
      v26[1] = (__int64)v27;
      *v27 = v26;
    }
    v29 = 259;
    v30 = 0;
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)WmipNotificationIrpCancel);
    if ( *(_BYTE *)(a3 + 68) )
    {
      WmipClearIrpObjectList(a3);
      v29 = -1073741536;
      v30 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v30 )
    {
      *(_QWORD *)(a3 + 56) = 0LL;
      *(_DWORD *)(a3 + 48) = -1073741536;
      IofCompleteRequest((PIRP)a3, 0);
    }
    *v47 = 0;
  }
LABEL_28:
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, (int *)&v40);
  if ( (_DWORD)v12 )
  {
    v31 = (PVOID *)Pool2;
    do
    {
      ObfDereferenceObjectWithTag(*v31, 0x746C6644u);
      v31 += 2;
      --v12;
    }
    while ( v12 );
  }
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  return v29;
}
