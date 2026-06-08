/*
 * XREFs of GetCpcRegisterDefinitionTable @ 0x140006890
 * Callers:
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 *     AcpiEval_CPC @ 0x14002874C (AcpiEval_CPC.c)
 *     Display_CPC @ 0x14002CCA0 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x1400302D4 (ValidateAcpiCPC.c)
 *     ValidateCpcSymmetry @ 0x1400318B4 (ValidateCpcSymmetry.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall GetCpcRegisterDefinitionTable(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  void *result; // rax

  switch ( *(_DWORD *)(a1 + 4) )
  {
    case 1:
      *a3 = 15;
      result = &CpcRegisterTable;
      break;
    case 2:
      *a3 = 19;
      result = &Cpc2RegisterTable;
      break;
    case 3:
      *a3 = 21;
      result = &Cpc3RegisterTable;
      break;
    default:
      *a3 = 22;
      result = &Cpc4RegisterTable;
      break;
  }
  *a2 = result;
  return result;
}
