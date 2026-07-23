/*
 * XREFs of PopFanReadFanNoiseInfo @ 0x140A73098
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopFanUpdateStatistics @ 0x140A90BF8 (PopFanUpdateStatistics.c)
 */

__int64 __fastcall PopFanReadFanNoiseInfo(int a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 i; // rdi
  int v10; // [rsp+30h] [rbp-88h] BYREF
  int v11; // [rsp+34h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-78h] BYREF
  int *v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  int *v15; // [rsp+70h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 400));
    if ( *(_BYTE *)(i + 88) )
    {
      if ( !v5 )
      {
        if ( a1 == 84 )
        {
          if ( a3 != 160 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128) + 2;
          PopFanUpdateStatistics(i);
          memmove((void *)(a2 + 8), (const void *)(i + 216), 8LL * (unsigned int)(*(_DWORD *)(i + 128) + 2));
        }
        else
        {
          if ( a1 != 85 )
            return (unsigned int)-1073741637;
          if ( a3 != 88 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128);
          *(_OWORD *)(a2 + 4) = *(_OWORD *)(i + 132);
          *(_OWORD *)(a2 + 20) = *(_OWORD *)(i + 148);
          *(_OWORD *)(a2 + 36) = *(_OWORD *)(i + 164);
          *(_OWORD *)(a2 + 52) = *(_OWORD *)(i + 180);
          *(_DWORD *)(a2 + 68) = *(_DWORD *)(i + 196);
          *(_OWORD *)(a2 + 72) = *(_OWORD *)(i + 112);
        }
      }
      ++v5;
    }
    PopReleaseRwLock((signed __int64 *)(i + 400));
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
  if ( v5 != 1 )
  {
    if ( (unsigned int)dword_140E07680 > 2 )
    {
      v10 = a1;
      v14 = 4LL;
      v13 = &v10;
      v16 = 4LL;
      v15 = &v11;
      v11 = v5;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)byte_14004D6B5,
        0LL,
        0LL,
        4u,
        &v12);
    }
    return (unsigned int)-1073741823;
  }
  return v4;
}
