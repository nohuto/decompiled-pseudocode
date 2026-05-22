/*
 * XREFs of ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800F3E24
 * Callers:
 *     ??_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z @ 0x1800EFC50 (--_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ @ 0x1800EF75C (--1-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAA@XZ @ 0x1800EF788 (--1-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_M.c)
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800F4130 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 */

void __fastcall KeyboardOverriderDispatcher::~KeyboardOverriderDispatcher(KeyboardOverriderDispatcher *this)
{
  *(_QWORD *)this = &KeyboardOverriderDispatcher::`vftable'{for `IRemoteKeyboardOverriderCallback'};
  *((_QWORD *)this + 1) = &KeyboardOverriderDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  KeyboardOverriderDispatcher::DestroyOverriderProxy(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 97);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 96);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 95);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 94);
  std::deque<KeyboardEvent>::~deque<KeyboardEvent>((char **)this + 89);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 55);
  std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>((char **)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
