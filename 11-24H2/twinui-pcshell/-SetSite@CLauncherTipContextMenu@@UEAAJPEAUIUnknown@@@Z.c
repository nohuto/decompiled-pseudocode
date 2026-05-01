/*
 * XREFs of ?SetSite@CLauncherTipContextMenu@@UEAAJPEAUIUnknown@@@Z @ 0x180216BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherTipContextMenu::SetSite(CLauncherTipContextMenu *this, struct IUnknown *a2)
{
  __int64 *v2; // rbp
  char v5; // di
  __int64 *v6; // r14
  HMENU v7; // rcx
  HMENU v8; // rcx
  HWND v9; // rcx

  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || !a2 )
  {
    v5 = 0;
    if ( *v2 && !a2 )
    {
      v6 = (__int64 *)((char *)this + 136);
      if ( *((_QWORD *)this + 17) )
      {
        *((_BYTE *)this + 322) = 1;
        (*(void (__fastcall **)(__int64, GUID *, __int64, _QWORD))(*(_QWORD *)*v6 + 32LL))(*v6, &GUID_NULL, -1LL, 0LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
      }
      v7 = (HMENU)*((_QWORD *)this + 41);
      if ( v7 )
      {
        DestroyMenu(v7);
        *((_QWORD *)this + 41) = 0LL;
      }
      v8 = (HMENU)*((_QWORD *)this + 42);
      if ( v8 )
      {
        DestroyMenu(v8);
        *((_QWORD *)this + 42) = 0LL;
      }
      v9 = (HWND)*((_QWORD *)this + 16);
      v5 = 0;
      if ( v9 )
      {
        DestroyWindow(v9);
        *((_QWORD *)this + 16) = 0LL;
      }
    }
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v2, (__int64)a2);
  if ( v5 )
    *((_BYTE *)this + 344) = (unsigned int)Mirror_IsThreadRTL() != 0;
  return 0LL;
}
