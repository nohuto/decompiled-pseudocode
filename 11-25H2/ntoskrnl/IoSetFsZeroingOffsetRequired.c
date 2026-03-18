/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x140593E70
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402D5250 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1403EF950 (IopIrpHasExtensionType.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14047FE48 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r11
  __int64 v4; // r11
  __int64 IrpExtension; // rax

  if ( IopIrpHasExtensionType(a1, 4u) )
    return 3221225505LL;
  if ( !IopIrpHasValidCombinationOfExtensionTypes(v2, v1) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v4, 4);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_DWORD *)(IrpExtension + 40) = 0;
  return 0LL;
}
