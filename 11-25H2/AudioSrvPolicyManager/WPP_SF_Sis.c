/*
 * XREFs of WPP_SF_Sis @ 0x18003C848
 * Callers:
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000BAE4 (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Sis(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5, const char *a6)
{
  const char *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v6 = a6;
  v7 = -1LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  if ( a4 )
  {
    do
      ++v7;
    while ( a4[v7] );
    v10 = 2 * v7 + 2;
  }
  else
  {
    v10 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
           0x2Cu,
           a4,
           v10,
           &a5,
           8LL,
           v6,
           v9,
           0LL);
}
