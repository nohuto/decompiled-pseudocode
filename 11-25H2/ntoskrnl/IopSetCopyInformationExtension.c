/*
 * XREFs of IopSetCopyInformationExtension @ 0x1402D49A4
 * Callers:
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402D5250 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 9LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 64) = *a2;
  return 0LL;
}
