/*
 * XREFs of ??1CDeviceGraphManager@@UEAA@XZ @ 0x1800EEE30
 * Callers:
 *     ??_GCDeviceGraphManager@@UEAAPEAXI@Z @ 0x1800EF820 (--_GCDeviceGraphManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphManager::~CDeviceGraphManager(struct _RTL_CRITICAL_SECTION *this)
{
  DeleteCriticalSection(this + 1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>((__int64)this);
}
