/*
 * XREFs of PipDmgInitReadGroupPolicy @ 0x1407250E8
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x14072FD5C (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404C0614 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PipDmgInitReadGroupPolicy()
{
  unsigned int v0; // ebx
  int RegistryValue; // eax
  unsigned int *v2; // r8
  int v3; // edx
  int v4; // edx
  _DWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-8h]
  HANDLE Handle; // [rsp+40h] [rbp+10h] BYREF
  PVOID P; // [rsp+48h] [rbp+18h]

  v6[1] = 0;
  P = 0LL;
  Handle = (HANDLE)-1LL;
  v7 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\Kernel DMA Protection";
  v6[0] = 9961622;
  v0 = 0;
  if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, v6, 131097LL) >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    v2 = (unsigned int *)P;
    if ( RegistryValue >= 0 && PnpValidateRegistryDword((__int64)P) )
    {
      v3 = *(unsigned int *)((char *)v2 + v2[2]);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
          v0 = v4 == 1;
        else
          v0 = 2;
      }
      else
      {
        v0 = 3;
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  return v0;
}
