/*
 * XREFs of ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x1804E83A4
 * Callers:
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1804E8638 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 * Callees:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B3900 (-CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_G.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1804E86FC (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 */

__int64 __fastcall CSwitchController::_PackageActivationArguments(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        const WCHAR *a4,
        __int64 a5,
        int a6,
        char a7,
        CDelayedTileActivation *a8)
{
  unsigned int v8; // ebx
  bool v12; // al
  __int64 v14; // [rsp+28h] [rbp-20h]

  v8 = 0;
  v12 = 0;
  *(_QWORD *)a8 = 0LL;
  if ( !a3 )
    v12 = CompareStringOrdinal(a2, -1, a4, -1, 1) == 2;
  if ( a7 || !v12 || !CSwitchController::s_IsLegacyApp((CallerIdentity *)a2) )
    return (unsigned int)CDelayedTileActivation_CreateInstance((__int64)a2, a3, (__int64)a4, a5, a6, v14, a8);
  return v8;
}
