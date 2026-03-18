/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C00DE7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*((_DWORD *)PtiCurrentShared() + 318) & 0x10000) != 0 )
    return 1;
  return v1;
}
