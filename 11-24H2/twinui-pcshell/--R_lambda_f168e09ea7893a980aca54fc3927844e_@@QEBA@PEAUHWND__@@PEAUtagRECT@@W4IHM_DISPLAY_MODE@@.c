/*
 * XREFs of ??R_lambda_f168e09ea7893a980aca54fc3927844e_@@QEBA@PEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180239A38
 * Callers:
 *     ??R?$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@__function@wistd@@UEAAJ$$QEAPEAUHWND__@@$$QEAPEAUtagRECT@@$$QEAW4IHM_DISPLAY_MODE@@11@Z @ 0x1803B6D80 (--R-$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_f168e09ea7893a980aca54fc3927844e_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v13) < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    return 0LL;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(a1 + 16))(
            *(_QWORD *)(a1 + 8) + *(int *)(a1 + 24),
            a2,
            a3,
            a4,
            a5,
            a6);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
}
