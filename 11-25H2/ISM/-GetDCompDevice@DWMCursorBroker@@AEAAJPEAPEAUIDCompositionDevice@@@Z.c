/*
 * XREFs of ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801C005C
 * Callers:
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801C0B4C (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C1280 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::GetDCompDevice(DWMCursorBroker *this, struct IDCompositionDevice **a2)
{
  _QWORD *v3; // rbx
  int Device3; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5)
    || (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5),
        Device3 = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, v3),
        v5 = Device3,
        Device3 >= 0) )
  {
    if ( *v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
    *a2 = (struct IDCompositionDevice *)*v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)Device3);
    return v5;
  }
}
