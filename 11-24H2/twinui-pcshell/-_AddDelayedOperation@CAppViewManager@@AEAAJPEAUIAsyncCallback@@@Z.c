/*
 * XREFs of ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1801E7068
 * Callers:
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1801E6E10 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1802FB470 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_AddDelayedOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         &v7);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, struct IAsyncCallback *))(*(_QWORD *)v7 + 128LL))(v7, a2);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
