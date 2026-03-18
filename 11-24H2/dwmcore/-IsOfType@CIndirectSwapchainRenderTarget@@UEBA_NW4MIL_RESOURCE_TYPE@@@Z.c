/*
 * XREFs of ?IsOfType@CIndirectSwapchainRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180277870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 86);
  result = 0;
  if ( (unsigned int)v2 <= 0x30 )
  {
    v3 = 0x1000010000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
