/*
 * XREFs of PipApplyFunctionToServiceInstances @ 0x140720650
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PnpUnicodeStringToWstr @ 0x1409C5120 (PnpUnicodeStringToWstr.c)
 *     PnpRegSzToString @ 0x140A3FBB8 (PnpRegSzToString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140C2226C (PipAddDevicesToBootDriverWorker.c)
 */

__int64 __fastcall PipApplyFunctionToServiceInstances(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        HANDLE Handle)
{
  __int64 result; // rax
  int v8; // ebx
  int RegistryValue; // edi
  _DWORD *Pool2; // rsi
  ULONG i; // r14d
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  char *v14; // rcx
  int v15; // ebx
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+40h] BYREF
  int v19; // [rsp+A8h] [rbp+48h] BYREF

  LOBYTE(v19) = a4;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  v16 = 0LL;
  a5 = 0LL;
  result = PipOpenServiceEnumKeys(a2, 131097LL, 0LL, &KeyHandle, 0);
  if ( (int)result < 0 )
    return result;
  v8 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue == -1073741772 )
      RegistryValue = 0;
    goto LABEL_22;
  }
  if ( MEMORY[4] == 4 && MEMORY[0xC] >= 4u )
    v8 = *(_DWORD *)MEMORY[8];
  ExFreePoolWithTag(0LL, 0);
  if ( !v8 )
    goto LABEL_22;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x20207050u);
  if ( !Pool2 )
  {
    RegistryValue = -1073741670;
    goto LABEL_22;
  }
  for ( i = 0; ; ++i )
  {
    v12 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, Pool2, 0x200u, &ResultLength);
    if ( v12 < 0 )
      break;
    if ( Pool2[1] == 1 )
    {
      LOWORD(v16) = 0;
      v13 = (unsigned int)Pool2[3];
      v14 = (char *)Pool2 + (unsigned int)Pool2[2];
      v19 = 0;
      PnpRegSzToString(v14, v13, &v19);
      LOWORD(v16) = v19;
      WORD1(v16) = *((_WORD *)Pool2 + 6);
      *((_QWORD *)&v16 + 1) = (char *)Pool2 + (unsigned int)Pool2[2];
      if ( (_WORD)v19 )
      {
        if ( (int)PnpUnicodeStringToWstr(&a5, 0LL, &v16) >= 0 )
        {
          RegistryValue = CmOpenDeviceRegKey(PiPnpRtlCtx, a5, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          PnpUnicodeStringToWstrFree(a5, &v16);
          if ( RegistryValue >= 0 )
          {
            v15 = PipAddDevicesToBootDriverWorker(Handle, &v16, a6);
            ZwClose(Handle);
            if ( !v15 )
              goto LABEL_13;
          }
        }
      }
    }
LABEL_19:
    ;
  }
  if ( v12 != -2147483622 )
    goto LABEL_19;
  RegistryValue = 0;
LABEL_13:
  ExFreePoolWithTag(Pool2, 0);
LABEL_22:
  ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
