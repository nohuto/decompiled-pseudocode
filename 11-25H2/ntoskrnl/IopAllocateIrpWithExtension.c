/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14048ADBC
 * Callers:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x140253CC0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140C0B9D0 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253800 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  __int64 IrpPrivate; // rax
  __int64 v4; // rbx
  bool v5; // zf

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 144LL;
    *(_BYTE *)(IrpPrivate + 67) -= 2;
    *(_BYTE *)(IrpPrivate + 66) -= 2;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *(_QWORD *)(IrpPrivate + 200) = *(_QWORD *)(IrpPrivate + 184);
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v4;
}
