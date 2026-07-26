/*
 * XREFs of ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x140099100
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x140167650 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void __fastcall NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(void **this)
{
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(this + 1, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(this, 0LL);
}
