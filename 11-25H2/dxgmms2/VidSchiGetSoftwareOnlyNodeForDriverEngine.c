/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x140045BD8
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400D7BAC (VidSchCreateSystemDevices.c)
 *     VidSchCreateContext @ 0x1401029F0 (VidSchCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 80));
}
