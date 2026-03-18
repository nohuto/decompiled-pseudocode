/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001CFEC
 * Callers:
 *     VidMmFreeFenceStorageSlot @ 0x14001CEF0 (VidMmFreeFenceStorageSlot.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(KSPIN_LOCK *this, __int64 **a2)
{
  __int64 *v4; // rax
  bool v5; // zf
  __int64 *v6; // rdx
  __int64 **v7; // rcx
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 **v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
  v4 = *a2;
  v5 = *((_BYTE *)*a2 + 161) == 0;
  v4[12] = (*a2)[12] & ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v6 = (__int64 *)*v4;
  if ( v5 )
  {
    if ( (__int64 *)v6[1] == v4 )
    {
      v7 = (__int64 **)v4[1];
      if ( *v7 == v4 )
      {
        *v7 = v6;
        v6[1] = (__int64)v7;
        v8 = (char *)(this + 3);
        goto LABEL_5;
      }
    }
LABEL_6:
    __fastfail(3u);
  }
  if ( (__int64 *)v6[1] != v4 )
    goto LABEL_6;
  v10 = (__int64 **)v4[1];
  if ( *v10 != v4 )
    goto LABEL_6;
  *v10 = v6;
  v6[1] = (__int64)v10;
  if ( *((_DWORD *)v4 + 41) == 1 )
    v8 = (char *)(this + 9);
  else
    v8 = (char *)(this + 11);
LABEL_5:
  v9 = *(_QWORD *)v8;
  if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
    goto LABEL_6;
  *v4 = v9;
  v4[1] = (__int64)v8;
  *(_QWORD *)(v9 + 8) = v4;
  *(_QWORD *)v8 = v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
