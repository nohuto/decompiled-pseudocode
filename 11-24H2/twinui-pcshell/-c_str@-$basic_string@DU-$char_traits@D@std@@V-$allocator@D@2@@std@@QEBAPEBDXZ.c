/*
 * XREFs of ?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x180319F5C
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180669030 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::c_str(_QWORD *a1)
{
  if ( a1[3] > 0xFuLL )
    return (_QWORD *)*a1;
  return a1;
}
