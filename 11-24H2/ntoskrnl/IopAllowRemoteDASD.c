/*
 * XREFs of IopAllowRemoteDASD @ 0x1404CB370
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140A77340 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool IopAllowRemoteDASD()
{
  bool v0; // bl
  size_t v1; // rax
  _WORD v3[2]; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+34h] [rbp-Ch]
  const wchar_t *v5; // [rsp+38h] [rbp-8h]
  HANDLE Handle; // [rsp+50h] [rbp+10h] BYREF
  PVOID P; // [rsp+58h] [rbp+18h]

  v0 = 0;
  Handle = 0LL;
  P = 0LL;
  wcslen(L"AllowRemoteDASD");
  v4 = 0;
  v5 = L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\RemovableStorageDevices";
  v1 = 2 * wcslen(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\RemovableStorageDevices");
  if ( v1 >= 0xFFFE )
    LOWORD(v1) = -4;
  v3[0] = v1;
  v3[1] = v1 + 2;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, v3, 131097LL, 0) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( *((_DWORD *)P + 3) )
        v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  return v0;
}
