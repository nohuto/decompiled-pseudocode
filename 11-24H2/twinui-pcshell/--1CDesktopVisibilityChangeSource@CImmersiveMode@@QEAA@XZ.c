/*
 * XREFs of ??1CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@XZ @ 0x1802F1348
 * Callers:
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802F15D8 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::~CDesktopVisibilityChangeSource(HWND *this)
{
  DestroyWindow(this[2]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
