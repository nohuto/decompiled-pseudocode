/*
 * XREFs of ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x18008EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x18008DA08 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 *     _lambda_6ee4989f9139f581a42397e10829ce1f_::operator() @ 0x18008F0EC (_lambda_6ee4989f9139f581a42397e10829ce1f_--operator().c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008F514 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveWindowManager::Set(__int64 a1, int a2, int a3, __int64 a4)
{
  const struct _GUID *v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 i; // rbx
  void *v12; // rbx
  void (__fastcall *v13)(void *, GUID *, __int64 *); // rdi
  __int64 v14; // rcx
  void *v15; // rcx
  int v16; // [rsp+20h] [rbp-30h] BYREF
  void *v17; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  void *v21; // [rsp+48h] [rbp-8h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  result = CImmersiveAppArray::s_CreateInstance(v8, &v17);
  if ( (int)result >= 0 )
  {
    v19[0] = a3;
    v19[1] = a2;
    v20 = a4;
    v21 = v17;
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
    v10 = *(_QWORD *)(a1 + 48);
    for ( i = 0LL; i < v10; ++i )
    {
      if ( !(unsigned __int8)lambda_6ee4989f9139f581a42397e10829ce1f_::operator()(
                               v19,
                               *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i)) )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    v18 = 0LL;
    v12 = v17;
    v13 = **(void (__fastcall ***)(void *, GUID *, __int64 *))v17;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v13(v12, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, &v18);
    v16 = 0;
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 24LL))(v18, &v16);
    if ( (int)result >= 0 && v16 )
      result = CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(a1 - 176, (__int64)v17, a2);
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return result;
}
