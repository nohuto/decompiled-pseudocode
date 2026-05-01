/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_18d3c2c80d2d5ec53b93450baefc9fd9_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x180297F94
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x180297EE0 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18054E0AC (-Wrap@-$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _lambda_18d3c2c80d2d5ec53b93450baefc9fd9_::operator()<IVirtualDesktop * &,HSTRING__ * &>(
        int ***a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  int **v7; // r14
  __int64 v8; // rbx
  int **v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v7 = *a1;
  v8 = 0LL;
  v14 = 0LL;
  if ( **v7 >= 0 )
  {
    **v7 = RefCountWrapper<HSTRING__ *,void>::Wrap(*a4, &v14);
    v8 = v14;
  }
  v9 = *a1;
  v10 = *a3;
  v11 = 0LL;
  v13[0] = 0LL;
  if ( **v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v13, v10);
    **v9 = 0;
    v11 = v13[0];
  }
  *a2 = v8;
  a2[1] = 0LL;
  if ( a2 + 1 != v13 )
  {
    a2[1] = v11;
    v11 = 0LL;
    v13[0] = 0LL;
  }
  if ( v11 )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  WindowsDeleteString(0LL);
  return a2;
}
