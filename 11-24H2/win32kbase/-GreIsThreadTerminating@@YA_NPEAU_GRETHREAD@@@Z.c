/*
 * XREFs of ?GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z @ 0x140065090
 * Callers:
 *     bConstructGET @ 0x140064F80 (bConstructGET.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall GreIsThreadTerminating(PETHREAD *a1)
{
  return PsIsThreadTerminating(*(a1 - 1)) != 0;
}
