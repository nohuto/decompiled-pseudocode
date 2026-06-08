/*
 * XREFs of GetCpcRegisterDefinitionTable @ 0x140009058
 * Callers:
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x14002DC3C (ValidateAcpiCPC.c)
 *     ValidateCpcSymmetry @ 0x14002EE80 (ValidateCpcSymmetry.c)
 *     AcpiEval_CPC @ 0x140031088 (AcpiEval_CPC.c)
 *     Display_CPC @ 0x140034044 (Display_CPC.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
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
