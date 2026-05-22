/*
 * XREFs of ?AddRef@?$SipcObjectBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18010B710
 * Callers:
 *     <none>
 * Callees:
 *     SipcFailFast @ 0x18010E99C (SipcFailFast.c)
 */

__int64 __fastcall SipcObjectBase<ISIPCEndpoint>::AddRef(__int64 a1)
{
  unsigned int v1; // edx

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 1uLL);
  if ( v1 + 1 <= 2 )
  {
    SipcFailFast(2147943113LL);
    __debugbreak();
  }
  return v1;
}
