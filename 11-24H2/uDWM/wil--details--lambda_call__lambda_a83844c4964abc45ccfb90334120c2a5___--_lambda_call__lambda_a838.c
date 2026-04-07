/*
 * XREFs of wil::details::lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___::_lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___ @ 0x180075AD4
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$3 @ 0x1800F6A48 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$3.c)
 * Callees:
 *     _lambda_a83844c4964abc45ccfb90334120c2a5_::operator() @ 0x180075AF4 (_lambda_a83844c4964abc45ccfb90334120c2a5_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___::_lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(a1);
  }
  return result;
}
