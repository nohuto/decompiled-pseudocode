/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x14000D410
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

void __fastcall NVMeSetInterruptCoalescing(__int64 a1, unsigned __int8 a2)
{
  char v4; // si
  char v5; // di
  char v6; // al
  _BYTE *v7; // rcx
  char v8; // al

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_BYTE *)(a1 + 44);
    v5 = *(_BYTE *)(a1 + 45);
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v6 = v5;
    v7 = *(_BYTE **)(a1 + 1104);
    if ( !v5 )
      v6 = 0;
    v7[4140] = v6;
    v8 = v4;
    if ( !v4 )
      v8 = 0;
    v7[4096] = 9;
    v7[4141] = v8;
    v7[4136] = 8;
    ProcessCommand(a1, a1 + 1016);
    WaitForCommandComplete(a1, a1 + 1016, a2);
  }
}
