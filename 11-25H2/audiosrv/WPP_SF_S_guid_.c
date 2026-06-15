/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800C4394
 * Callers:
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::operator() @ 0x1800C25D4 (_lambda_c1484885cbbce228ad1e61609886ff14_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, 63LL, a4, v7, a5, 16LL, 0LL);
}
