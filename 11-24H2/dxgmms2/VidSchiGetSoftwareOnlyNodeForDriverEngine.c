/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x140043E38
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400D380C (VidSchCreateSystemDevices.c)
 *     VidSchCreateContext @ 0x140101950 (VidSchCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 80));
}
