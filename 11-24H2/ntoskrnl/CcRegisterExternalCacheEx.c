/*
 * XREFs of CcRegisterExternalCacheEx @ 0x140577E20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcAddExternalCacheToVolumeEx @ 0x1405775CC (CcAddExternalCacheToVolumeEx.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCacheEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
    return 3221225485LL;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x24CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( CcEnablePerVolumeLazyWriter )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x50uLL, 0x43456343u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = a2;
      v6 = CcAddExternalCacheToVolumeEx((__int64)PoolWithTag);
      if ( v6 < 0 )
      {
        *a3 = 0LL;
        ExFreePoolWithTag(v8, 0x43456343u);
      }
      else
      {
        v9 = v8[9] + 1016LL;
        v10 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + ***(unsigned __int16 ***)(v8[8] + 8LL)) + 18512LL);
        *(_QWORD *)(v9 + 40) = 0LL;
        *(_QWORD *)(v9 + 16) = v10 >> 2;
        *(_QWORD *)(v9 + 8) = v10 >> 2;
        *(_QWORD *)v9 = v10 >> 2;
        *(_QWORD *)(v9 + 32) = 10 * v10;
        *(_DWORD *)(v9 + 48) = 10;
        *(_DWORD *)(v9 + 24) = (v10 >> 3) + (v10 >> 4);
        *a3 = v8;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8[8] + 768LL), &LockHandle);
        CcScheduleLazyWriteScan((_BYTE *)v8[8], (_BYTE *)v8[9], 1, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *a3 = 0LL;
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
