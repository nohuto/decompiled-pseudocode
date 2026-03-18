/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140597410
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x14031B360 (IopFreeIrpExtension.c)
 *     IopAllocateIrpExtension @ 0x140375A80 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1403F51A0 (IopIrpHasExtensionType.c)
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
