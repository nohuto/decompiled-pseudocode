/*
 * XREFs of ?Disconnect@CPlaceModeButtonAcc@@UEAAXXZ @ 0x18054A5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPlaceModeButtonAcc::Disconnect(CPlaceModeButtonAcc *this)
{
  *((_BYTE *)this + 16) = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
}
