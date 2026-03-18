/*
 * XREFs of ?IsOfType@CRadialGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801FD8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRadialGradientBrush::IsOfType(__int64 a1, int a2)
{
  bool result; // al
  unsigned __int64 v3; // rax
  __int64 v4; // rcx

  result = 1;
  if ( a2 != 125 )
  {
    v3 = (unsigned int)(a2 - 17);
    if ( (unsigned int)v3 > 0x37 )
      return 0;
    v4 = 0x80000020000001LL;
    if ( !_bittest64(&v4, v3) )
      return 0;
  }
  return result;
}
