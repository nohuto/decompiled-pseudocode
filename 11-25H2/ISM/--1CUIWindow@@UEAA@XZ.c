/*
 * XREFs of ??1CUIWindow@@UEAA@XZ @ 0x1800AA168
 * Callers:
 *     ??_ECUIWindow@@UEAAPEAXI@Z @ 0x1800AA290 (--_ECUIWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x180014BA0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CUIWindow::~CUIWindow(CUIWindow *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v2, *((__int64 **)this + 9));
    std::_Deallocate<16,0>(
      *((char **)this + 8),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  *((_DWORD *)this + 3) = -1073741823;
}
