/*
 * XREFs of PiDmGetCacheKeys @ 0x1409F24B0
 * Callers:
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectCreate @ 0x140AC0068 (PiDmObjectCreate.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &PiDmCachedDeviceContainerKeys;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &PiDmCachedDeviceInterfaceKeys;
    }
  }
  else
  {
    *a3 = 10;
    result = &PiDmCachedDeviceKeys;
  }
  *a2 = result;
  return result;
}
