/*
 * XREFs of _CmContainerListGenericObjectCallback @ 0x140819CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmValidateDeviceContainerName @ 0x1408B5474 (_CmValidateDeviceContainerName.c)
 */

char __fastcall CmContainerListGenericObjectCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char result; // al

  result = 0;
  if ( a4 )
  {
    result = (int)CmValidateDeviceContainerName() >= 0;
    if ( result )
    {
      if ( *a4 )
        return guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  return result;
}
