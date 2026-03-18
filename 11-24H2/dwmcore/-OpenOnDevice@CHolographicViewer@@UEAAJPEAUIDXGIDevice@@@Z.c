/*
 * XREFs of ?OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z @ 0x1802D3AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicViewer::OpenOnDevice(CHolographicViewer *this, struct IDXGIDevice *a2)
{
  HRESULT v4; // eax
  int v5; // ebx
  __int64 v7; // rdx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *); // rbp
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *ppFactory; // [rsp+60h] [rbp+8h] BYREF

  ppFactory = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
  v4 = CreateDXGIFactory2(0, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &ppFactory);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
    CloseHandle(*((HANDLE *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    return (unsigned int)v5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  if ( *((_DWORD *)this + 26) == 3 )
  {
    v5 = -2005270490;
    v7 = 143LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicviewer.cpp",
      (const char *)(unsigned int)v5);
    ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 26) != 1 )
  {
    v5 = -2147483635;
    v7 = 146LL;
    goto LABEL_6;
  }
  v8 = ppFactory;
  v9 = *(__int64 (__fastcall **)(void *, struct IDXGIDevice *, _QWORD, _QWORD, int, int, char *))(*(_QWORD *)ppFactory
                                                                                                + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  v5 = v9(v8, a2, *((_QWORD *)this + 9), 0LL, 5, 0x10000000, (char *)this + 80);
  if ( v5 < 0 )
  {
    v7 = 154LL;
    goto LABEL_6;
  }
  *((_QWORD *)this + 9) = 0LL;
  _InterlockedExchange((volatile __int32 *)this + 26, 2);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppFactory);
  return 0LL;
}
