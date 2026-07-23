/*
 * XREFs of EtwpCreateUmReplyObject @ 0x140A703BC
 * Callers:
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeInitializeQueue @ 0x1404717A0 (KeInitializeQueue.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpReferenceGuidEntry @ 0x140838980 (EtwpReferenceGuidEntry.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, __int64 a2, _QWORD *a3)
{
  struct _KQUEUE *Pool2; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rsi
  char *v10; // rax
  signed __int8 v11; // cf
  char *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  PVOID v16; // rdi
  __int64 v18; // [rsp+20h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp-1h] BYREF
  int v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+74h] [rbp+1Bh]
  __int128 v23; // [rsp+78h] [rbp+1Fh]
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v22 = 0;
  v19 = 0LL;
  Object = 0LL;
  v20[1] = 0LL;
  v20[2] = 0LL;
  v20[0] = 48LL;
  v21 = 64;
  v23 = 0LL;
  Pool2 = (struct _KQUEUE *)ExAllocatePool2(0x40uLL, 0x48uLL, 0x71777445u);
  v7 = Pool2;
  if ( Pool2 )
  {
    KeInitializeQueue(Pool2, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)v20, 1u, v18, 120, 0, 0, &Object, 0LL);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = Object;
      memset_0(Object, 0, 0x78uLL);
      *((_WORD *)v9 + 49) = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      v10 = (char *)KeAbPreAcquire((__int64)&EtwpReplyListLock, 0LL);
      v11 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpReplyListLock, 0LL);
      v12 = v10;
      if ( v11 )
        ExfAcquirePushLockExclusiveEx(&EtwpReplyListLock, v10, (__int64)&EtwpReplyListLock);
      if ( v12 )
        v12[10] = 1;
      v13 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      v14 = Object;
      *(_QWORD *)Object = EtwpReplyListHead;
      v14[1] = &EtwpReplyListHead;
      *(_QWORD *)(v13 + 8) = v14;
      EtwpReplyListHead = (__int64)v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v15 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v15 = v15;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x40u);
      v16 = Object;
      inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, 2052, 1, 0, &v19, a2);
      if ( inserted >= 0 )
        *a3 = v16;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
