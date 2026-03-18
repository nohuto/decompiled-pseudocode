/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x14007C100
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x14007DD24 (DpiGetDeviceRegistryPaths.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x14018C078 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1402254CC (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // r9
  unsigned __int16 v11; // r8
  void *v12; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Length = 0;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &KeyHandle);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
    if ( v5 == -1073741789 )
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, Length, 1953656900LL, v6);
      v8 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, Length);
        v9 = ZwQueryKey(KeyHandle, KeyNameInformation, v8, Length, &Length);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v11 = *v8;
          *a3 = *v8;
          a3[1] = v11 + 2;
          v12 = (void *)ExAllocatePool2(256LL, (unsigned __int16)(v11 + 2), 1953656900LL, v10);
          *((_QWORD *)a3 + 1) = v12;
          if ( v12 )
          {
            memset(v12, 0, a3[1]);
            memmove(*((void **)a3 + 1), v8 + 2, *a3);
          }
          else
          {
            v5 = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 5476;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 5459;
        }
        ExFreePoolWithTag(v8, 0x74727044u);
      }
      else
      {
        v5 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 5442;
      }
    }
    ZwClose(KeyHandle);
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 5408;
  }
  return v5;
}
