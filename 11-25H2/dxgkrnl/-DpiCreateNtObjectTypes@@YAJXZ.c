/*
 * XREFs of ?DpiCreateNtObjectTypes@@YAJXZ @ 0x14007C438
 * Callers:
 *     DpiInitializeGlobalState @ 0x1404339E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkCreateNtObjectType @ 0x1401DD064 (DxgkCreateNtObjectType.c)
 */

__int64 DpiCreateNtObjectTypes(void)
{
  __int64 result; // rax

  result = 0LL;
  if ( !g_pDpDisplayMuxSwitchNtObject )
    return DxgkCreateNtObjectType(
             L"DxgkDisplayMuxSwitch",
             0LL,
             (__int64)DpiDisplayMuxObjectDelete,
             0LL,
             (__int64)&g_pDpDisplayMuxSwitchNtObject,
             0);
  return result;
}
