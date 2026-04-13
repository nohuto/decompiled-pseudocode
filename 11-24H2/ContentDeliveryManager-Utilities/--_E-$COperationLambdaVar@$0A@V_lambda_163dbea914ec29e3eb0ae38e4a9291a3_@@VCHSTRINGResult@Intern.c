/*
 * XREFs of ??_E?$COperationLambdaVar@$0A@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002CC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$COperationLambdaVar@$0A@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x180029E08 (--1-$COperationLambdaVar@$0A@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@VCHSTRINGResult@Interna.c)
 */

void *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_,Windows::Internal::CHSTRINGResult,>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar<0,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_,Windows::Internal::CHSTRINGResult,>::~COperationLambdaVar<0,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_,Windows::Internal::CHSTRINGResult,>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
