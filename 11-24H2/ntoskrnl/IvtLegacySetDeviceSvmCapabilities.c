/*
 * XREFs of IvtLegacySetDeviceSvmCapabilities @ 0x140570C30
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateContextTable @ 0x1404D4448 (IvtAllocateContextTable.c)
 */

__int64 __fastcall IvtLegacySetDeviceSvmCapabilities(__int64 a1, unsigned int a2, char a3)
{
  if ( a3 )
    return IvtAllocateContextTable(a1, a2);
  else
    return 0LL;
}
