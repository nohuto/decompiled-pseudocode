/*
 * XREFs of ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x180199A28
 * Callers:
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x180199AB0 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000B724 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall VirtualTouchpadContextProvider::~VirtualTouchpadContextProvider(VirtualTouchpadContextProvider *this)
{
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)this + 16);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
}
