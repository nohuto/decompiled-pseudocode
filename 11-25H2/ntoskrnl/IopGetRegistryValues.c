/*
 * XREFs of IopGetRegistryValues @ 0x14094D400
 * Callers:
 *     pIoQueryDeviceDescription @ 0x140709C3C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14094CFE4 (pIoQueryBusDescription.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetRegistryValues(HANDLE KeyHandle, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int RegistryValue; // edx
  unsigned int v6; // ecx
  int v7; // eax

  v2 = 0;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  if ( (int)(RegistryValue + 0x80000000) >= 0 && RegistryValue != -1073741772 )
    return RegistryValue;
  v6 = IopGetRegistryValue(KeyHandle);
  if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
    return v6;
  v7 = IopGetRegistryValue(KeyHandle);
  if ( v7 >= 0 )
    return 0LL;
  if ( v7 != -1073741772 )
    return (unsigned int)v7;
  return v2;
}
