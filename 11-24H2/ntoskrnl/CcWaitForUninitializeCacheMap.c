/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x14044F570
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r14
  unsigned __int64 v3; // rdi
  __int64 v4; // r15
  char v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 *i; // rcx
  int v13; // eax
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // r8
  _QWORD *v20; // [rsp+30h] [rbp-A8h] BYREF
  __int16 Object; // [rsp+38h] [rbp-A0h] BYREF
  char v22; // [rsp+3Ah] [rbp-9Eh]
  char v23; // [rsp+3Bh] [rbp-9Dh]
  int v24; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v25[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+68h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+78h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-48h] BYREF
  char v30; // [rsp+E0h] [rbp+8h]
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp+10h] BYREF

  v20 = 0LL;
  v23 = 0;
  v30 = 0;
  v2 = 0;
  v3 = 0LL;
  v27 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v26, 0, sizeof(v26));
  memset(&v28, 0, sizeof(v28));
  v4 = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v22 = 6;
    v24 = 0;
    v25[1] = v25;
    v25[0] = v25;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v7 )
    {
      v4 = *(_QWORD *)(v7 + 536);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 768), &v26);
      v5 = 1;
      if ( *(_QWORD *)(v7 + 232) == v7 + 232 )
      {
        v13 = *(_DWORD *)(v7 + 152);
        if ( (v13 & 0x100) == 0 )
        {
          v30 = 1;
          *(_DWORD *)(v7 + 152) = v13 | 0x10000;
          v20 = *(_QWORD **)(v7 + 280);
          *(_QWORD *)(v7 + 280) = (char *)&v20 + 1;
          v14 = *(_DWORD *)(v7 + 152);
          if ( (v14 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 504) )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 832), &v28);
              v16 = *(_QWORD *)(v7 + 504);
              if ( v16 )
              {
                v3 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
                v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFEuLL);
                v18 = *(_QWORD **)((v16 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v17 + 8) != v3 || *v18 != v3 )
                  __fastfail(3u);
                *v18 = v17;
                *(_QWORD *)(v17 + 8) = v18;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v7 + 504) = 0LL;
                v2 = 1;
              }
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&v28, 0LL);
            }
          }
          else
          {
            *(_DWORD *)(v7 + 152) = v14 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v26, v6);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v27 + 1) = v3;
      CcWriteBehind(v7, (__int64)&v27, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      CcFreeWorkQueueEntry((_SLIST_ENTRY *)v3, v8, v9, v10);
    if ( v30 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v26);
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v11 )
        {
          for ( i = (unsigned __int64 *)(v11 + 280); ; i = (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFEuLL) )
          {
            v19 = *i;
            if ( !*i )
              break;
            if ( (_QWORD **)v19 == (_QWORD **)((char *)&v20 + 1) )
            {
              *i = (unsigned __int64)v20;
              break;
            }
          }
          *(_DWORD *)(v11 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLock(&v26);
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&v26);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
