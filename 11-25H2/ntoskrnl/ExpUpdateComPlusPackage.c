/*
 * XREFs of ExpUpdateComPlusPackage @ 0x1407A66E4
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 */

__int64 __fastcall ExpUpdateComPlusPackage(int a1)
{
  NTSTATUS v1; // ebx
  int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a1;
  Disposition = 0;
  KeyHandle = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x40000000u, &stru_140E09188);
  if ( v1 == -1073741772 )
    v1 = ZwCreateKey(&KeyHandle, 0x40000000u, &stru_140E09188, 0, 0LL, 0, &Disposition);
  if ( v1 >= 0 )
  {
    v1 = ZwSetValueKey(KeyHandle, &stru_140E09178, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
