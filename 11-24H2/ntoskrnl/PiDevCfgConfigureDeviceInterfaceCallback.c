/*
 * XREFs of PiDevCfgConfigureDeviceInterfaceCallback @ 0x1405A3BC0
 * Callers:
 *     <none>
 * Callees:
 *     PiDevCfgConfigureDeviceInterface @ 0x1409CCBD4 (PiDevCfgConfigureDeviceInterface.c)
 */

char __fastcall PiDevCfgConfigureDeviceInterfaceCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax

  if ( *(int *)(a4 + 16) >= 0 )
  {
    v5 = PiDevCfgConfigureDeviceInterface(a2, *(_QWORD *)a4, *(_QWORD *)(a4 + 8));
    if ( v5 < 0 )
      *(_DWORD *)(a4 + 16) = v5;
  }
  return 0;
}
