/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180199270
 * Callers:
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18028DFA0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18029A654 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z @ 0x1802AA5C4 (-Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  __int64 result; // rax

  if ( a1 == 42 )
    return (unsigned int)(a1 >> 4);
  switch ( a1 )
  {
    case 17:
    case 18:
    case 35:
    case 52:
    case 69:
    case 70:
    case 71:
    case 104:
    case 265:
      return (unsigned int)(a1 >> 4);
    default:
      result = 0LL;
      break;
  }
  return result;
}
