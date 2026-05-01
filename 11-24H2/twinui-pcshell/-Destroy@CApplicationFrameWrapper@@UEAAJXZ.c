/*
 * XREFs of ?Destroy@CApplicationFrameWrapper@@UEAAJXZ @ 0x1802FF280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationFrameWrapper::Destroy(unsigned __int64 this)
{
  RTL_SRWLOCK *v2; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_BYTE *)(this + 64) = 1;
  ReleaseSRWLockExclusive(v2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 128) + 96LL))(
    *(_QWORD *)(this + 128),
    this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(this + 128));
  return 0LL;
}
