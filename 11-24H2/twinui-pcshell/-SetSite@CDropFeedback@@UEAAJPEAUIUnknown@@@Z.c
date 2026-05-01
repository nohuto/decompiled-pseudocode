/*
 * XREFs of ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1805400A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x180540910 (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::SetSite(CDropFeedback *this, struct IUnknown *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 && *((_QWORD *)this + 2) )
  {
    v4 = (__int64 *)((char *)this + 128);
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    }
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 128LL))(v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
    }
    DestroyWindow(*((HWND *)this + 8));
    CDropFeedback::_SetThreadPriority(this, 0);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DropFeedback_Hide_Info, v7, 1u, &v9);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}
