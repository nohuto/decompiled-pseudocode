/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800C306C
 * Callers:
 *     _lambda_9219152d4e141db21e4330029f5108f8_::operator() @ 0x1800C0C0C (_lambda_9219152d4e141db21e4330029f5108f8_--operator().c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, 63LL, a4, v7, a5, 16LL, 0LL);
}
