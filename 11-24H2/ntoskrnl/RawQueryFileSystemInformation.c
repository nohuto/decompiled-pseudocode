/*
 * XREFs of RawQueryFileSystemInformation @ 0x14077CBF4
 * Callers:
 *     RawUserFsCtrl @ 0x1408AE174 (RawUserFsCtrl.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1405E44AC (Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RawPerformDevIoCtrl @ 0x14077C9A4 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x14077CBA0 (RawComputeFileSystemInformationChecksum.c)
 *     IoBuildSynchronousFsdRequest @ 0x140A326A0 (IoBuildSynchronousFsdRequest.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // esi
  _QWORD *v5; // r12
  size_t v6; // rax
  NTSTATUS Status; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG v12; // r14d
  ULONG v13; // eax
  PVOID PoolWithTag; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  void *v16; // r8
  PIRP v17; // rax
  __int64 v18; // rsi
  ULONG v19; // eax
  struct _KEVENT Event; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+80h] [rbp+7h] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp+17h]

  v3 = 0LL;
  v4 = 0;
  *(_QWORD *)Length = 0LL;
  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  if ( (unsigned int)v6 >= 9 )
  {
    memset_0(v5, 0, v6);
    Status = RawPerformDevIoCtrl(v9, *(struct _DEVICE_OBJECT **)(a3 + 192), v10, v11, Timeout);
    if ( Status >= 0 )
    {
      v12 = Length[1];
      if ( Length[1] >= 0x18 )
      {
        if ( (unsigned int)Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline() )
        {
          v4 = *(_DWORD *)(*(_QWORD *)(a3 + 192) + 152LL);
          v13 = v4 + v12;
        }
        else
        {
          v13 = v12;
        }
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v13, 0x62574152u);
        if ( PoolWithTag )
        {
          if ( (unsigned int)Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline() )
            v3 = -(__int64)(unsigned int)(v4 + 1) & ((unsigned __int64)PoolWithTag + (unsigned int)(v4 + 1) - 1);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IsEnabledDeviceUsageNoInline = Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline();
          v16 = PoolWithTag;
          if ( IsEnabledDeviceUsageNoInline )
            v16 = (void *)v3;
          v17 = IoBuildSynchronousFsdRequest(3u, *(PDEVICE_OBJECT *)(a3 + 192), v16, v12, 0LL, &Event, &IoStatusBlock);
          if ( v17 )
          {
            v17->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 192), v17);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status >= 0 )
            {
              v18 = (__int64)PoolWithTag;
              if ( (unsigned int)Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline() )
                v18 = v3;
              if ( *(_DWORD *)(v18 + 16) == 1397904198
                && (v19 = *(unsigned __int16 *)(v18 + 20), v19 <= v12)
                && (unsigned __int16)v19 >= 0x18u
                && (unsigned __int16)RawComputeFileSystemInformationChecksum(v18) == *(_WORD *)(v18 + 22) )
              {
                *v5 = *(_QWORD *)(v18 + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
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
