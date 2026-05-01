/*
 * XREFs of ??$__invoke@AEAV_lambda_8d135f07ec1e4c768c6672246a6f5092_@@PEAUHWND__@@W4IHM_DISPLAY_MODE@@@wistd@@YAJAEAV_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$QEAPEAUHWND__@@$$QEAW4IHM_DISPLAY_MODE@@@Z @ 0x1802B25A4
 * Callers:
 *     ??R?$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@__function@wistd@@UEAAJ$$QEAPEAUHWND__@@$$QEAW4IHM_DISPLAY_MODE@@@Z @ 0x1802CFF70 (--R-$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__invoke<_lambda_8d135f07ec1e4c768c6672246a6f5092_ &,HWND__ *,enum IHM_DISPLAY_MODE>(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = *a2;
  v9 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v9) < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    return 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 24), v5, v4);
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v6;
}
