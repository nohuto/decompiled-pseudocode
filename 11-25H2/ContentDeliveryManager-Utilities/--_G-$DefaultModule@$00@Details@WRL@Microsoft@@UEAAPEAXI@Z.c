/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800429C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180042584 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(
        Microsoft::WRL::Details *a1,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = (char)a2;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
    a1,
    a2,
    a3,
    a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}
