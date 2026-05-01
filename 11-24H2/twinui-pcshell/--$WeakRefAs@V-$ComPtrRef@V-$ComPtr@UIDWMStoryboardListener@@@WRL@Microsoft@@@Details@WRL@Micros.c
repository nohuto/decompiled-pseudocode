/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x180682AFC
 * Callers:
 *     ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801818F0 (-v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
        _QWORD *a1,
        __int64 *a2)
{
  int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, (__int64 *)&v7);
  if ( v3 >= 0 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( v7 )
    {
      v5 = **v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
      v3 = v5(v4, &GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e, a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
