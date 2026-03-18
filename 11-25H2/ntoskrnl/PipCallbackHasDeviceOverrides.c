/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x14070DC54
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x14082E6D8 (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryKey @ 0x14069B400 (ZwQueryKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 */

bool __fastcall PipCallbackHasDeviceOverrides(__int64 a1, __int64 a2)
{
  int v3; // ebx
  NTSTATUS v4; // eax
  int v5; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  __int128 KeyInformation; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]

  KeyHandle = 0LL;
  ResultLength = 0;
  KeyInformation = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v3 = IopOpenRegistryKeyEx(&KeyHandle, a1, a2, 131097LL);
  if ( v3 >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    v3 = 0;
    if ( v4 != -2147483643 )
      v3 = v4;
    if ( v3 >= 0 && (v5 = DWORD1(v10)) != 0 )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v5;
    }
    else
    {
      v3 = -1073741823;
      ZwClose(KeyHandle);
    }
  }
  return v3 >= 0;
}
