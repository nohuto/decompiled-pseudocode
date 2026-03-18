/*
 * XREFs of DxgkMiracastGetNextChunkInfo @ 0x1400803A4
 * Callers:
 *     DxgkNetDispGetNextChunkInfo @ 0x1401ABE20 (DxgkNetDispGetNextChunkInfo.c)
 * Callees:
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x14007E2D4 (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x14007E5BC (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F220 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DxgkMiracastGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a5,
        unsigned int *a6)
{
  __int64 v6; // r15
  __int64 *DeviceContextFromLuid; // rax
  __int64 *v11; // rdi
  int v12; // ebx
  __int64 v13; // rdx
  union _LARGE_INTEGER *Timeout; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  struct _FDO_CONTEXT *v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a1, 1);
  v11 = DeviceContextFromLuid;
  if ( DeviceContextFromLuid )
  {
    v13 = DeviceContextFromLuid[54];
    if ( v13 )
    {
      if ( DeviceContextFromLuid[62] )
      {
        v12 = -1073741811;
        WdLogSingleEntry1(3LL, -1073741811LL);
        WdLogGlobalForLineNumber = 8752;
      }
      else if ( (unsigned int)(*((_DWORD *)DeviceContextFromLuid + 102) - 1) <= 1 )
      {
        v12 = ProcessMiracastAPIChunk(
                (struct _MIRACAST_DEVICE_CONTEXT *)DeviceContextFromLuid,
                *(struct _FDO_CONTEXT **)(v13 + 64),
                a4,
                a5,
                a6);
        if ( v12 == -1073741762 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v11[62] = (__int64)&Event;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v19 = 0LL;
          Timeout = 0LL;
          if ( (_DWORD)v6 != -1 )
          {
            Timeout = (union _LARGE_INTEGER *)&v19;
            v19 = -10000 * v6;
          }
          v15 = *(_DWORD *)(a3 + 280);
          *(_QWORD *)a3 = &Event;
          v12 = KeWaitForMultipleObjects(
                  v15 + 1,
                  (PVOID *)a3,
                  WaitAny,
                  Executive,
                  0,
                  0,
                  Timeout,
                  (PKWAIT_BLOCK)(a3 + 40));
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v16 = v11[54];
          if ( v16 )
          {
            v17 = *(struct _FDO_CONTEXT **)(v16 + 64);
            v11[62] = 0LL;
            if ( *((_DWORD *)v11 + 102) == 2 )
            {
              if ( v12 )
              {
                if ( v12 >= 1 && v12 < *(_DWORD *)(a3 + 280) + 1 )
                  --v12;
                *a4 = 0;
              }
              else
              {
                v12 = ProcessMiracastAPIChunk((struct _MIRACAST_DEVICE_CONTEXT *)v11, v17, a4, a5, a6);
              }
            }
            else
            {
              v12 = -1073741653;
              WdLogSingleEntry1(3LL, -1073741653LL);
              WdLogGlobalForLineNumber = 8860;
            }
          }
          else
          {
            v12 = -1073741811;
            WdLogSingleEntry1(3LL, -1073741811LL);
            WdLogGlobalForLineNumber = 8838;
          }
        }
      }
      else
      {
        v12 = -1073741653;
        WdLogSingleEntry1(3LL, -1073741653LL);
        WdLogGlobalForLineNumber = 8765;
      }
    }
    else
    {
      v12 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8739;
    }
  }
  else
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8730;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v11 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v11, (unsigned int)v11);
  return (unsigned int)v12;
}
