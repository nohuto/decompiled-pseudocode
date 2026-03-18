/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x1403AA230
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r14
  _QWORD *v3; // rdi
  __int64 v4; // r15
  char v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 *i; // rcx
  int v9; // eax
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r8
  _QWORD *v16; // [rsp+30h] [rbp-A8h] BYREF
  __int16 Object; // [rsp+38h] [rbp-A0h] BYREF
  char v18; // [rsp+3Ah] [rbp-9Eh]
  char v19; // [rsp+3Bh] [rbp-9Dh]
  int v20; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v21[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+50h] [rbp-88h] BYREF
  __int128 v23; // [rsp+68h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+78h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-48h] BYREF
  char v26; // [rsp+E0h] [rbp+8h]
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp+10h] BYREF

  v16 = 0LL;
  v19 = 0;
  v26 = 0;
  v2 = 0;
  v3 = 0LL;
  v23 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v22, 0, sizeof(v22));
  memset(&v24, 0, sizeof(v24));
  v4 = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v18 = 6;
    v20 = 0;
    v21[1] = v21;
    v21[0] = v21;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v6 )
    {
      v4 = *(_QWORD *)(v6 + 536);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 768), &v22);
      v5 = 1;
      if ( *(_QWORD *)(v6 + 232) == v6 + 232 )
      {
        v9 = *(_DWORD *)(v6 + 152);
        if ( (v9 & 0x100) == 0 )
        {
          v26 = 1;
          *(_DWORD *)(v6 + 152) = v9 | 0x10000;
          v16 = *(_QWORD **)(v6 + 280);
          *(_QWORD *)(v6 + 280) = (char *)&v16 + 1;
          v10 = *(_DWORD *)(v6 + 152);
          if ( (v10 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v6 + 504) )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 832), &v24);
              v12 = *(_QWORD *)(v6 + 504);
              if ( v12 )
              {
                v3 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
                v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
                v14 = *(_QWORD **)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD **)(v13 + 8) != v3 || (_QWORD *)*v14 != v3 )
                  __fastfail(3u);
                *v14 = v13;
                *(_QWORD *)(v13 + 8) = v14;
                v3[1] = 0LL;
                *v3 = 0LL;
                *(_QWORD *)(v6 + 504) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
            }
          }
          else
          {
            *(_DWORD *)(v6 + 152) = v10 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v23 + 1) = v3;
      CcWriteBehind(v6, &v23, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry(v3);
    if ( v26 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v22);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v7 )
        {
          for ( i = (unsigned __int64 *)(v7 + 280); ; i = (unsigned __int64 *)(v15 & 0xFFFFFFFFFFFFFFFEuLL) )
          {
            v15 = *i;
            if ( !*i )
              break;
            if ( (_QWORD **)v15 == (_QWORD **)((char *)&v16 + 1) )
            {
              *i = (unsigned __int64)v16;
              break;
            }
          }
          *(_DWORD *)(v7 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLock(&v22);
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&v22);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
