/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180004340
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x18004326C (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

__int64 dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__()
{
  __int64 result; // rax

  result = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 1;
  return result;
}
