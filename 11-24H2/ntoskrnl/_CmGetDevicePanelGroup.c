/*
 * XREFs of _CmGetDevicePanelGroup @ 0x140A9D970
 * Callers:
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDevicePanelGroup(__int64 a1)
{
  unsigned int v1; // edx
  int v3; // eax

  v1 = 0;
  if ( (*(_BYTE *)a1 & 0x7Fu) < 2 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( (v3 & 4) != 0 )
    {
      return 256;
    }
    else if ( (v3 & 2) != 0 )
    {
      return 257;
    }
  }
  else
  {
    return (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2);
  }
  return v1;
}
