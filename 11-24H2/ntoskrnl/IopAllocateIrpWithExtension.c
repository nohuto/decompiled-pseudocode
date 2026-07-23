/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14025E1EC
 * Callers:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1402841C0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140C1EBE0 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x14025D950 (IopIsActivityTracingEnabled.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140449990 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 IrpPrivate; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  LOBYTE(a2) = a2 + 2;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2, a3);
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
