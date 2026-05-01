/*
 * XREFs of ??$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgileRef@01@@Z @ 0x1801DBD00
 * Callers:
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x18023E858 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsAgile<IAsyncCallbackDispatcher>(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx

  v4 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a1, a2);
  }
  else
  {
    v6 = *a2;
    *a2 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
