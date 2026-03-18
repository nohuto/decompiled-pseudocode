/*
 * XREFs of ACPIInitGetPlatformOverrides @ 0x1400C5E00
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     OSGetRegistryValue @ 0x1400B3AFC (OSGetRegistryValue.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1400BE908 (OSCloseHandle.c)
 *     ACPIIsSystemStartOptionPresent @ 0x1400C73D0 (ACPIIsSystemStartOptionPresent.c)
 */

__int64 ACPIInitGetPlatformOverrides()
{
  void *v0; // rbx
  void *v1; // rdi
  NTSTATUS v2; // eax
  unsigned int v3; // eax
  NTSTATUS v4; // eax
  unsigned int v5; // eax
  NTSTATUS v6; // eax
  wchar_t *v7; // r14
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  const wchar_t *v10; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+40h] BYREF
  _DWORD *v14; // [rsp+78h] [rbp+48h] BYREF
  HANDLE v15; // [rsp+80h] [rbp+50h] BYREF
  _DWORD *v16; // [rsp+88h] [rbp+58h] BYREF

  v0 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  KeyHandle = 0LL;
  P[0] = 0LL;
  v1 = 0LL;
  v16 = 0LL;
  if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ACPI", 0LL, (__int64)&KeyHandle) >= 0 )
  {
    v2 = OSGetRegistryValue(KeyHandle, L"TADOverrides", &v16);
    v1 = v16;
    if ( v2 >= 0 )
    {
      v3 = v16[1];
      if ( v3 )
      {
        if ( *v16 == 4 && v3 >= 4 && (v16[2] & 1) != 0 )
          AcpiOverrideAttributes |= 0x10000000u;
      }
    }
    v4 = OSGetRegistryValue(KeyHandle, L"PrmSupportOptOut", &v14);
    v0 = v14;
    if ( v4 >= 0 )
    {
      v5 = v14[1];
      if ( v5 )
      {
        if ( *v14 == 4 && v5 >= 4 && v14[2] )
          AcpiOverrideAttributes |= 0x8000000u;
      }
    }
  }
  OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control", 0LL, (__int64)&v15);
  v6 = OSGetRegistryValue(v15, L"SystemStartOptions", P);
  v7 = (wchar_t *)P[0];
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = *((unsigned int *)P[0] + 1);
    if ( (_DWORD)v9 )
    {
      if ( *(_DWORD *)P[0] == 1 && (unsigned int)v9 >= 2 )
      {
        v10 = (const wchar_t *)((char *)P[0] + 8);
        *((_WORD *)P[0] + (v9 >> 1) + 3) = 0;
        if ( wcsstr(v10, L"PCIEXPRESSPOLICY=FORCEDISABLE") )
          AcpiOverrideAttributes |= 0x2000u;
        if ( wcsstr(v7 + 4, L"SBOSCEVALPOLICY=FORCEDISABLE") )
          AcpiOverrideAttributes |= 0x4000u;
        if ( (unsigned __int8)ACPIIsSystemStartOptionPresent(v7 + 4) )
          AcpiOverrideAttributes |= 0x10000u;
        if ( (AcpiOverrideAttributes & 0x10000) == 0 )
          AcpiOverrideAttributes &= ~0x40000u;
      }
      else
      {
        v8 = -1073741788;
      }
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v15 )
    OSCloseHandle(v15);
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return v8;
}
