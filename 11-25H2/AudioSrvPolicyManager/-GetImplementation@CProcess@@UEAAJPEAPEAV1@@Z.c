/*
 * XREFs of ?GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z @ 0x18000D260
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D2A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CProcess::GetImplementation(CProcess *this, struct CProcess **a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = (CProcess *)((char *)this - 8);
  Microsoft::WRL::Details::SafeUnknownIncrementReference((CProcess *)((char *)this + 12), (volatile int *)this - 2);
  return 0LL;
}
