/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140594390
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1403E8190 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x140435420 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 IrpExtension; // rax

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  IrpExtension = IopAllocateIrpExtension(a1, v2);
  if ( !IrpExtension )
    return 3221226021LL;
  *(_OWORD *)(IrpExtension + 40) = 0LL;
  IopFreeIrpExtension(a1, 7, 0);
  return 0LL;
}
