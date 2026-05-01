/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048D5F0
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x1804902C0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048D3F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___(
        __int64 a1,
        volatile int *a2)
{
  __int128 *v2; // r8
  __int128 v3; // xmm0
  __int64 v4; // r9
  __int64 v5; // xmm1_8
  volatile int *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v14, a2);
  v3 = *v2;
  v13[0] = v4;
  v5 = *((_QWORD *)v2 + 2);
  v11 = v3;
  v12 = v5;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v13, v6);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___(v7, 0, v8, (__int64)&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  return v9;
}
