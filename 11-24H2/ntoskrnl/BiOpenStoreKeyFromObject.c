/*
 * XREFs of BiOpenStoreKeyFromObject @ 0x1404A28E4
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A2898 (BiSetFirmwareModifiedFromObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 */

__int64 __fastcall BiOpenStoreKeyFromObject(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int KeyInformation; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v8[58]; // [rsp+44h] [rbp-B4h] BYREF
  __int16 v9; // [rsp+7Eh] [rbp-7Ah]

  memset_0(&KeyInformation, 0, 0xA0uLL);
  ResultLength[0] = 160;
  *a2 = 0LL;
  if ( ((unsigned __int8)KeyHandle & 1) != 0 )
  {
    v4 = -1073741822;
  }
  else
  {
    v4 = ZwQueryKey(KeyHandle, KeyNameInformation, &KeyInformation, 0xA0u, ResultLength);
    if ( v4 >= 0 )
    {
      if ( KeyInformation < 0x4C )
        return (unsigned int)v4;
      v9 = 0;
      v4 = BiOpenKey(0LL, v8, 131103LL, a2);
      if ( v4 >= 0 )
        return (unsigned int)v4;
    }
  }
  if ( *a2 )
  {
    BiCloseKey(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v4;
}
