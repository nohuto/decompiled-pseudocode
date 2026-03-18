/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14037592C
 * Callers:
 *     IoAllocateIrpEx @ 0x140253BB0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140C1CBA0 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253E10 (IopAllocateIrpPrivate.c)
 *     IopIsActivityTracingEnabled @ 0x140375090 (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  __int64 IrpPrivate; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 144LL;
    v5 = *(_QWORD *)(IrpPrivate + 184);
    *(_BYTE *)(IrpPrivate + 67) -= 2;
    *(_BYTE *)(IrpPrivate + 66) -= 2;
    *(_QWORD *)(IrpPrivate + 200) = v5;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
