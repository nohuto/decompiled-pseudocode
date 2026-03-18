/*
 * XREFs of EditionGetMouseWheelRoutingMode @ 0x1401D3BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x140273928 (-RawInputMouseRequestedByForeground@@YAHXZ.c)
 */

__int64 EditionGetMouseWheelRoutingMode()
{
  unsigned int v0; // ebx

  v0 = *(_DWORD *)UPDWORDPointer(8220LL);
  if ( v0 == 1 )
    return (unsigned int)RawInputMouseRequestedByForeground() == 0;
  return v0;
}
