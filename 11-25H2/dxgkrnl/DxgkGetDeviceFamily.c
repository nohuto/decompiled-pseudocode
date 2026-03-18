/*
 * XREFs of DxgkGetDeviceFamily @ 0x1403FB614
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDeviceFamily(_DWORD *a1)
{
  if ( a1 )
    *a1 = dword_14015E3BC;
  return (unsigned int)dword_14015E3B8;
}
