/*
 * XREFs of ??1InputConfigContextProvider@@EEAA@XZ @ 0x18010A3C8
 * Callers:
 *     ??_EInputConfigContextProvider@@EEAAPEAXI@Z @ 0x18010A460 (--_EInputConfigContextProvider@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000BE80 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000BF78 (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ??1?$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAA@XZ @ 0x1800AC5F0 (--1-$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@QEAA@XZ.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  v2 = (__int64 *)((char *)this + 232);
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  InputConfigContextProvider::ClearConfigs((__int64)this, (InputConfigContextProvider *)((char *)this + 232));
  InputConfigContextProvider::ClearConfigs(v3, (InputConfigContextProvider *)((char *)this + 256));
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)this + 32);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v2);
  KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>::~KernelInputConnection<_MIT_HAPTIC_NOTIFICATION_MESSAGE>(
    (__int64)this + 88,
    v4);
  SystemContextProvider::~SystemContextProvider(this);
}
