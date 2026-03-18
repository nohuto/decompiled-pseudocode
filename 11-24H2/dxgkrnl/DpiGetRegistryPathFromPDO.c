/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x14007C5A0
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x14007E3A4 (DpiGetDeviceRegistryPaths.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x14018E2B0 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022BDB8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v7; // rdi
  NTSTATUS v8; // eax
  unsigned __int16 v9; // r8
  void *v10; // rax
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
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, Length, 1953656900LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, Length);
        v8 = ZwQueryKey(KeyHandle, KeyNameInformation, v7, Length, &Length);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v9 = *v7;
          *a3 = *v7;
          a3[1] = v9 + 2;
          v10 = (void *)ExAllocatePool2(256LL, (unsigned __int16)(v9 + 2), 1953656900LL);
          *((_QWORD *)a3 + 1) = v10;
          if ( v10 )
          {
            memset(v10, 0, a3[1]);
            memmove(*((void **)a3 + 1), v7 + 2, *a3);
          }
          else
          {
            v5 = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 5638;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v8);
          WdLogGlobalForLineNumber = 5621;
        }
        ExFreePoolWithTag(v7, 0x74727044u);
      }
      else
      {
        v5 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 5604;
      }
    }
    ZwClose(KeyHandle);
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 5570;
  }
  return v5;
}
