/*
 * XREFs of PiConfigureDevice @ 0x140721A7C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     PpDevCfgProcessDeviceClass @ 0x14072A508 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A7EC90 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgProcessDevice @ 0x140A9A74C (PpDevCfgProcessDevice.c)
 */

__int64 __fastcall PiConfigureDevice(__int64 a1)
{
  __int64 v1; // r9
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v2 = *(_DWORD *)(v1 + 300);
  if ( (unsigned int)(v2 - 789) <= 1 )
    return 3221225558LL;
  v3 = v2 - 768;
  if ( v3 )
  {
    v4 = v3 - 16;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( (unsigned int)(v7 - 2) >= 2 )
            {
              v8 = *(_DWORD *)(a1 + 24) - 21;
              if ( !v8 )
                return PpDevCfgProcessDevice(v1, 0LL, 0LL);
              v9 = v8 - 1;
              if ( !v9 )
                return PpDevCfgProcessDeviceClass(v1);
              v10 = v9 - 1;
              if ( !v10 )
                return PpDevCfgProcessDeviceExtensions(v1);
              if ( v10 == 1 )
                return PpDevCfgProcessDeviceReset(v1);
            }
          }
        }
      }
    }
  }
  return 3221225473LL;
}
