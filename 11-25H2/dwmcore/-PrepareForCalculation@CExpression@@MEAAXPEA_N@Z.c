/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x180190980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  if ( CCommonRegistryData::OptimizeForDirtyExpressions )
  {
    if ( *((_QWORD *)this + 40) )
      *a2 = 1;
    else
      *a2 = *((_QWORD *)this + 29) > *((_QWORD *)this + 22);
  }
  else
  {
    *a2 = 1;
  }
}
