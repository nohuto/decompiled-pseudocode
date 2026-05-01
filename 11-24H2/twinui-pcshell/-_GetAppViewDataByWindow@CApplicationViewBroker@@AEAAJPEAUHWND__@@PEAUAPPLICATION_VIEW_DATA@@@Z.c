/*
 * XREFs of ?_GetAppViewDataByWindow@CApplicationViewBroker@@AEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E8B28
 * Callers:
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E8A40 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataByWindow(
        CApplicationViewBroker *this,
        HWND a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, HWND, __int64 *); // rbx
  int v7; // ebx
  __int64 v9[2]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+50h] [rbp-58h]

  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 1) = 0;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 4) = 0;
  *((_DWORD *)a3 + 6) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 8) = 3;
  *((_DWORD *)a3 + 9) = 0;
  v9[0] = 0LL;
  v5 = *((_QWORD *)this + 2);
  v6 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v5 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
  v7 = v6(v5, a2, v9);
  if ( v7 >= 0 )
  {
    memset_0(v10, 0, 0x50uLL);
    v7 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v9[0] + 216LL))(v9[0], v10);
    if ( v7 >= 0 )
    {
      *(_OWORD *)a3 = v10[0];
      *((_OWORD *)a3 + 1) = v10[1];
      *((_QWORD *)a3 + 4) = v11;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
  return (unsigned int)v7;
}
