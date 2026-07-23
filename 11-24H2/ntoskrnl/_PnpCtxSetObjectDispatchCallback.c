/*
 * XREFs of _PnpCtxSetObjectDispatchCallback @ 0x1408182D0
 * Callers:
 *     DrvDbOpenContext @ 0x140823D90 (DrvDbOpenContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxSetObjectDispatchCallback(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    _InterlockedExchange64((volatile __int64 *)(a1 + 8LL * a2 + 296), a3);
  return v3;
}
