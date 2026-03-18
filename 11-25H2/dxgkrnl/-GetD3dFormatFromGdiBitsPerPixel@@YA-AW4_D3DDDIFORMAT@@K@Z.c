/*
 * XREFs of ?GetD3dFormatFromGdiBitsPerPixel@@YA?AW4_D3DDDIFORMAT@@K@Z @ 0x140253BA8
 * Callers:
 *     DxgkUpdateCddDevmodeExtraData @ 0x1404058F0 (DxgkUpdateCddDevmodeExtraData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetD3dFormatFromGdiBitsPerPixel(unsigned int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 8u:
      return 41LL;
    case 0x10u:
      return 23LL;
    case 0x18u:
      return 20LL;
    case 0x20u:
      return 21LL;
  }
  WdLogSingleEntry1(2LL, a1);
  result = 0LL;
  WdLogGlobalForLineNumber = 14400;
  return result;
}
