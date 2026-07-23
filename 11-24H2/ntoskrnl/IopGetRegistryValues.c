/*
 * XREFs of IopGetRegistryValues @ 0x1409CED70
 * Callers:
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetRegistryValues(HANDLE KeyHandle, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  unsigned int RegistryValue; // edx
  unsigned int v7; // ecx
  NTSTATUS v8; // eax

  v2 = 0;
  v3 = a2 + 1;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Identifier", 40, a2);
  if ( (int)(RegistryValue + 0x80000000) >= 0 && RegistryValue != -1073741772 )
    return RegistryValue;
  v7 = IopGetRegistryValue(KeyHandle, L"Configuration Data", 36, v3);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741772 )
    return v7;
  v8 = IopGetRegistryValue(KeyHandle, L"Component Information", 24, v3 + 1);
  if ( v8 >= 0 )
    return 0LL;
  if ( v8 != -1073741772 )
    return (unsigned int)v8;
  return v2;
}
