/*
 * XREFs of WPP_SF_Ss @ 0x18003A0F0
 * Callers:
 *     _lambda_55bbdd01f859b2b681de89e14de0bd19_::operator() @ 0x180003ADC (_lambda_55bbdd01f859b2b681de89e14de0bd19_--operator().c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Ss(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, const char *a5)
{
  const char *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  v5 = a5;
  v6 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  if ( !a5 )
    v5 = "NULL";
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v9 = 2 * v6 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, 0x37u, a4, v9, v5, v8, 0LL);
}
