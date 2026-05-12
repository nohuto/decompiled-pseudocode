/*
 * XREFs of RaDriverDeleteDevice @ 0x140055730
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDriverDeleteDevice(int *a1)
{
  _QWORD *v1; // rbx
  bool v2; // zf
  int v3; // eax
  KSPIN_LOCK *DriverObjectExtension; // rax
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  KSPIN_LOCK *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 16;
  v2 = *((_QWORD *)a1 + 8) == 0LL;
  v3 = *a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
    return 0LL;
  if ( v3 == 1094997074 )
  {
    if ( !*((_QWORD *)a1 + 9) )
      return 0LL;
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(
                                            *(PDRIVER_OBJECT *)(*((_QWORD *)a1 + 1) + 8LL),
                                            DriverEntry);
    v5 = DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
      v6 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) == v1 )
      {
        v7 = (_QWORD *)v1[1];
        if ( (_QWORD *)*v7 == v1 )
        {
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
LABEL_8:
          --*((_DWORD *)v5 + 18);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          return 0LL;
        }
      }
      goto LABEL_16;
    }
  }
  else
  {
    if ( !*((_QWORD *)a1 + 9) )
      return 0LL;
    v9 = (KSPIN_LOCK *)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(*((_QWORD *)a1 + 1) + 8LL), DriverEntry);
    v5 = v9;
    if ( v9 )
    {
      KeAcquireInStackQueuedSpinLock(v9 + 10, &LockHandle);
      v10 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) == v1 )
      {
        v11 = (_QWORD *)v1[1];
        if ( (_QWORD *)*v11 == v1 )
        {
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          goto LABEL_8;
        }
      }
LABEL_16:
      __fastfail(3u);
    }
  }
  return 3221225701LL;
}
