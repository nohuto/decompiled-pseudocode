/*
 * XREFs of RawQueryFileSystemInformation @ 0x14077CCF0
 * Callers:
 *     RawUserFsCtrl @ 0x1409A2EE4 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RawPerformDevIoCtrl @ 0x14077CAF4 (RawPerformDevIoCtrl.c)
 *     IoBuildSynchronousFsdRequest @ 0x140A3CD90 (IoBuildSynchronousFsdRequest.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r12
  size_t v5; // rax
  NTSTATUS Status; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // si
  ULONG v11; // r15d
  unsigned __int16 *PoolWithTag; // rdi
  unsigned __int16 v13; // r14
  PIRP v14; // rax
  ULONG v15; // r8d
  struct _KEVENT Event; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  __int128 v20; // [rsp+80h] [rbp+7h] BYREF
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+17h]

  NumberOfBytes = 0LL;
  v4 = *(_QWORD **)(a1 + 24);
  v5 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v20 = 0LL;
  if ( (unsigned int)v5 >= 9 )
  {
    memset_0(v4, 0, v5);
    v10 = 0;
    Status = RawPerformDevIoCtrl(v7, *(struct _DEVICE_OBJECT **)(a3 + 192), v8, v9, &v20);
    if ( Status >= 0 )
    {
      v11 = HIDWORD(NumberOfBytes);
      if ( HIDWORD(NumberOfBytes) >= 0x18 )
      {
        PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag((POOL_TYPE)1025, HIDWORD(NumberOfBytes), 0x62574152u);
        if ( PoolWithTag )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v13 = 3;
          v14 = IoBuildSynchronousFsdRequest(
                  3u,
                  *(PDEVICE_OBJECT *)(a3 + 192),
                  PoolWithTag,
                  v11,
                  0LL,
                  &Event,
                  &IoStatusBlock);
          if ( v14 )
          {
            v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 192), v14);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status >= 0 )
            {
              if ( *((_DWORD *)PoolWithTag + 4) != 1397904198 )
                goto LABEL_21;
              v15 = PoolWithTag[10];
              if ( v15 > v11 || (unsigned __int16)v15 < 0x18u )
                goto LABEL_21;
              do
              {
                if ( (unsigned __int16)(v13 - 22) > 1u )
                  v10 = (v10 << 15) + *((unsigned __int8 *)PoolWithTag + v13) + (v10 >> 1);
                ++v13;
              }
              while ( v13 < (unsigned __int16)v15 );
              if ( v10 == PoolWithTag[11] )
              {
                *v4 = *(_QWORD *)((char *)PoolWithTag + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
LABEL_21:
                Status = -1073741637;
              }
            }
          }
          else
          {
            Status = -1073741670;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)Status;
}
