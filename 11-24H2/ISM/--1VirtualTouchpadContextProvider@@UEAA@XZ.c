/*
 * XREFs of ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x1801A1018
 * Callers:
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x1801A10A0 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000BE80 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall VirtualTouchpadContextProvider::~VirtualTouchpadContextProvider(VirtualTouchpadContextProvider *this)
{
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)this + 16);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
}
