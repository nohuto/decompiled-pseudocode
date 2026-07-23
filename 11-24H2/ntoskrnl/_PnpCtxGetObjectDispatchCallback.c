/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1409F4D0C
 * Callers:
 *     _PnpCreateObjectDispatch @ 0x14081B20C (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x14081B438 (_PnpDeleteObjectDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
