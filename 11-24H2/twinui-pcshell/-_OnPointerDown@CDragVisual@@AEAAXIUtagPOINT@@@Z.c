/*
 * XREFs of ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180544F50
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180545E58 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x18054521C (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_OnPointerDown(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  void *v6; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-68h] BYREF
  void *v8; // [rsp+48h] [rbp-40h]
  void *ppvOut; // [rsp+90h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
           &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  else if ( GetCapture() != *((HWND *)this + 19) && !*((_DWORD *)this + 82) )
  {
    memset_0(v7, 0, 0x60uLL);
    if ( (unsigned int)GetPointerInfo(a2, v7) )
    {
      ppvOut = v8;
      v6 = v8;
      *(_QWORD *)((char *)this + 316) = v8;
      *(_QWORD *)((char *)this + 308) = v6;
      *((_DWORD *)this + 82) = a2;
      *(struct tagPOINT *)((char *)this + 300) = a3;
    }
    if ( *((_DWORD *)this + 37) == 6 )
      CDragVisual::_OnPressDown(this, a3);
  }
}
