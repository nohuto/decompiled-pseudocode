/*
 * XREFs of ?GetDeviceCreationError@CD3DDevice@@SAJI@Z @ 0x1802C6820
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801981D4 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::GetDeviceCreationError(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 4098:
      return 2291663026LL;
    case 4318:
      return 2291663027LL;
    case 32902:
      return 2291663025LL;
  }
  result = 2291663028LL;
  if ( a1 != 1297040209 )
    return 2291663024LL;
  return result;
}
