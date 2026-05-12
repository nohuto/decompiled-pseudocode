/*
 * XREFs of StorSetAllIoGatewayBusy @ 0x1400A6F30
 * Callers:
 *     StorSetIoGatewayBusy @ 0x1400013B4 (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorGetOutstandingIoCount @ 0x140055E34 (StorGetOutstandingIoCount.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1400A7088 (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetAllIoGatewayBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r14
  _DWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = StorGetOutstandingIoCount(v3);
  v6 = result;
  if ( (_DWORD)result )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 992LL), 1, 0);
    if ( !(_DWORD)result )
    {
      v7 = *(_QWORD *)(a1 + 48);
      v8 = 0LL;
      if ( *(_DWORD *)(v7 + 968) )
      {
        while ( 1 )
        {
          v9 = (_DWORD *)(a1 + 320 * v8);
          v10 = v9[48];
          if ( !FeatureFixKcsanRacyAccessV2 )
            break;
          if ( a2 <= v10 )
          {
            v10 = v9[48];
LABEL_8:
            v9[8] = v10 - a2;
            goto LABEL_9;
          }
          v9[8] = 0;
LABEL_9:
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 320 * v8), &LockHandle);
          v9[10] = 1850304845;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v7 = *(_QWORD *)(a1 + 48);
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 968) )
            goto LABEL_10;
        }
        if ( a2 > v10 )
        {
          v9[8] = 0;
          goto LABEL_9;
        }
        goto LABEL_8;
      }
LABEL_10:
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( v6 <= a2 )
        {
          *(_DWORD *)(v7 + 984) = 0;
          goto LABEL_18;
        }
      }
      else if ( v6 <= a2 )
      {
        *(_DWORD *)(v7 + 984) = 0;
LABEL_18:
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 992LL), 2, 1);
        result = StorGetOutstandingIoCount(*(_QWORD *)(a1 + 48));
        if ( !(_DWORD)result )
          return StorSetAllIoGatewayNotBusy(*(_QWORD *)(a1 + 48), v11, v12);
        return result;
      }
      *(_DWORD *)(v7 + 984) = v6 - a2;
      goto LABEL_18;
    }
  }
  return result;
}
