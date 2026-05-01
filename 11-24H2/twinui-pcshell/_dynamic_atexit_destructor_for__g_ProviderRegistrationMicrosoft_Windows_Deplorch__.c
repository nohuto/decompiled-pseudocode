/*
 * XREFs of _dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x180706E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (*dynamic_atexit_destructor_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__())(void)
{
  __int64 (*result)(void); // rax

  result = g_ProviderRegistrationMicrosoft_Windows_Deplorch;
  if ( g_ProviderRegistrationMicrosoft_Windows_Deplorch )
    return (__int64 (*)(void))g_ProviderRegistrationMicrosoft_Windows_Deplorch();
  return result;
}
