/*
 * XREFs of DxgkGetDeviceFamily @ 0x1403F53F4
 * Callers:
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDeviceFamily(_DWORD *a1)
{
  if ( a1 )
    *a1 = dword_14016137C;
  return (unsigned int)dword_140161378;
}
