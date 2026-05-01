/*
 * XREFs of ?SetPresentedWindow@CApplicationFrameWrapper@@UEAAJPEAUHWND__@@@Z @ 0x18021D6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPresentedWindow(CApplicationFrameWrapper *this, HWND a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13), a2);
}
