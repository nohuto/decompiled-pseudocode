/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x140274B10
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140274CD4 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool v2; // zf

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    v2 = *(_DWORD *)(W32GetUserSessionState(v1, v0) + 18800) == 0;
  else
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(W32GetUserSessionState(v1, v0) + 16340), 1, 1) == 0;
  if ( v2 )
    return 0LL;
  EtwTraceWakeMIT(4LL);
  return (unsigned __int8)WakeMIT(4LL);
}
