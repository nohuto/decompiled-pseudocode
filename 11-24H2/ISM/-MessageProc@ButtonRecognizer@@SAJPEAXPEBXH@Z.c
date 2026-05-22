/*
 * XREFs of ?MessageProc@ButtonRecognizer@@SAJPEAXPEBXH@Z @ 0x1801A65E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonRecognizer::MessageProc(_QWORD *a1, const void *a2)
{
  unsigned int v3; // ebx
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v3 = CoreUICallReceive(
         a1[25],
         &IComboButton_Receive<ButtonRecognizer>::Type,
         &Microsoft::CoreUI::MessageCall::ComboButton_g_parameters_B0ZeIKxQP9pAXzUZQ3XJT9gq91M,
         18LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  return v3;
}
