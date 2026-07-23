/*
 * XREFs of IovAllocateIrp @ 0x140BAB550
 * Callers:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1402841C0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x14025D950 (IopIsActivityTracingEnabled.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140449990 (IopInitActivityIdIrp.c)
 *     VfIoAllocateIrp1 @ 0x140B8FDA4 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140B8FE1C (VfIoAllocateIrp2.c)
 *     IovpLogStackTrace @ 0x140BA8A6C (IovpLogStackTrace.c)
 */

__int64 __fastcall IovAllocateIrp(__int64 a1, char a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // ebp
  _QWORD *v8; // rsi
  char v9; // di
  __int64 v10; // rcx
  __int64 Irp1; // rbx
  __int64 IrpPrivate; // rax
  __int64 v13; // rax

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
    v13 = *(_QWORD *)(Irp1 + 184);
    *(_BYTE *)(Irp1 + 67) -= 2;
    *(_BYTE *)(Irp1 + 66) -= 2;
    *(_QWORD *)(Irp1 + 200) = v13;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(Irp1);
  }
  return Irp1;
}
