/*
 * XREFs of _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x180037E94
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::Invoke @ 0x180037A90 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x180037F88 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180038040 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180038080 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ca324c265ed58b3d9541d2204f682216_::operator()(__int64 *a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v10 = 0;
  v9 = 0LL;
  v2 = *(_QWORD *)(*a1 + 120);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 136LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  if ( v3(v2, &v9) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 168LL))(v9, &v10);
  v11 = *a1;
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(&v11);
  v6 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(v4, v10, v5, &v11);
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v11);
  if ( v6 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*a1 + 129) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
