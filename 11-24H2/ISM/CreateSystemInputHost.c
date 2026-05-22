/*
 * XREFs of CreateSystemInputHost @ 0x180083050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateSystemInputHost(void *a1, int a2, struct ISystemInputHost **a3)
{
  if ( !a2 )
    return OneCoreUAPInputHost::Create(a1, a3);
  if ( a2 == 1 )
    return DeviceInputHost::Create(a3);
  return 0LL;
}
