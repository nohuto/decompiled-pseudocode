/*
 * XREFs of HamRpcSrvGetInterruptiveUIStateForAumid @ 0x1800816B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180068B18 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

__int64 __fastcall HamRpcSrvGetInterruptiveUIStateForAumid(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  unsigned int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0;
  result = HamSrvGetInterruptiveUIStateForAumid(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248),
             a2,
             a3,
             a4,
             a5,
             v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
