/*
 * XREFs of ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804091D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180405C4C (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     _LogEventWithViewHostItemData__ @ 0x180407570 (_LogEventWithViewHostItemData__.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040C994 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18040D030 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::ExitFullScreenForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  HolographicPositioner *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF

  v3 = (HolographicPositioner *)((char *)this - 128);
  HolographicPositioner::_FindViewHostItem((char *)this - 128, &v12, a2);
  if ( !v12 )
    return 2147942487LL;
  LogEventWithViewHostItemData__(
    (__int64)v12,
    (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::ExitFullScreenForView<unsigned short const *,unsigned int &>);
  v13 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
         &v12,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43F,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
    }
    return v5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 112LL))(v13);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
    }
    return v5;
  }
  HolographicPositioner::_EnsureHolographicViewConfiguration(v3, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
  }
  return 0LL;
}
