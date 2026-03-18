/*
 * XREFs of IovAllocateIrp @ 0x140B99570
 * Callers:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x140253CC0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253800 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 *     VfIoAllocateIrp1 @ 0x140B7DDC4 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140B7DE3C (VfIoAllocateIrp2.c)
 *     IovpLogStackTrace @ 0x140B96A8C (IovpLogStackTrace.c)
 */

__int64 __fastcall IovAllocateIrp(__int64 a1, char a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // ebp
  _QWORD *v8; // rsi
  char v9; // di
  __int64 v10; // rcx
  __int64 Irp1; // rbx
  __int64 IrpPrivate; // rax
  bool v13; // cl

  v5 = a3;
  if ( (VfRuleClasses & 0x10) == 0 )
    return IopAllocateIrpPrivate(a1, a2, a3);
  v8 = IovpLogStackTrace(0LL);
  v9 = a2 + 2;
  LOBYTE(v10) = v9;
  Irp1 = VfIoAllocateIrp1(v10, v5, a4, (_OWORD *)((unsigned __int64)(v8 + 3) & -(__int64)(v8 != 0LL)));
  if ( !Irp1 )
  {
    IrpPrivate = IopAllocateIrpPrivate(a1, v9, v5);
    Irp1 = IrpPrivate;
    if ( IrpPrivate )
      VfIoAllocateIrp2(IrpPrivate, (_OWORD *)((unsigned __int64)(v8 + 3) & -(__int64)(v8 != 0LL)));
  }
  if ( v8 )
    *v8 = Irp1;
  if ( Irp1 )
  {
    *(_QWORD *)(Irp1 + 184) -= 144LL;
    *(_BYTE *)(Irp1 + 67) -= 2;
    *(_BYTE *)(Irp1 + 66) -= 2;
    v13 = (IopIrpExtensionStatus & 1) != 0;
    *(_QWORD *)(Irp1 + 200) = *(_QWORD *)(Irp1 + 184);
    if ( v13 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(Irp1);
  }
  return Irp1;
}
