/*
 * XREFs of CmRegisterInternalCallback @ 0x1409899A0
 * Callers:
 *     VrpIncrementSiloCount @ 0x1409FE6BC (VrpIncrementSiloCount.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140989A9C (CmpRegisterCallbackInternal.c)
 */

__int64 __fastcall CmRegisterInternalCallback(__int64 a1, int a2)
{
  if ( VrpDriverObject )
    return CmpRegisterCallbackInternal((unsigned int)VrpRegistryCallback, 0, a2, 0, 1, (__int64)&VrpCallbackCookie);
  else
    return 3221225713LL;
}
