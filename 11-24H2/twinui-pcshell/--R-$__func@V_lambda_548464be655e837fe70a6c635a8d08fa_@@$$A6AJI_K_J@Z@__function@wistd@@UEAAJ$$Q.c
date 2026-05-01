/*
 * XREFs of ??R?$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$QEAI$$QEA_K$$QEA_J@Z @ 0x18037A180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>::operator()(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1 + 8;
  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = 0;
  v10 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 8), &v10) >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v4 + 16))(
           *(_QWORD *)(v4 + 8) + *(int *)(v4 + 24),
           v7,
           v6,
           v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v8;
}
