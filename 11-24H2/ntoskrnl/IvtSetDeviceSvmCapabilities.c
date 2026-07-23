/*
 * XREFs of IvtSetDeviceSvmCapabilities @ 0x14056E710
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateContextTable @ 0x1404CD658 (IvtAllocateContextTable.c)
 */

__int64 __fastcall IvtSetDeviceSvmCapabilities(__int64 a1, __int64 a2, char a3)
{
  if ( a3 )
    return IvtAllocateContextTable(a1, **(_DWORD **)(a2 + 56));
  else
    return 0LL;
}
