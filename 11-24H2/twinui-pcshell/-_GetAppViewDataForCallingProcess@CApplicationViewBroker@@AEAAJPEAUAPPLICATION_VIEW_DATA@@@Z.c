/*
 * XREFs of ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180227C1C
 * Callers:
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E8A40 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z @ 0x1804E8A80 (-GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802BEFE8 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataForCallingProcess(
        CApplicationViewBroker *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  int CallingProcessAppId; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, LPVOID, __int64 *); // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-39h] BYREF
  LPVOID pv[3]; // [rsp+28h] [rbp-31h] BYREF
  _OWORD v11[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v12; // [rsp+60h] [rbp+7h]

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 3LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)pv, (unsigned __int16 **)a2);
  if ( CallingProcessAppId >= 0 )
  {
    v9 = 0LL;
    v5 = *((_QWORD *)this + 2);
    v6 = *(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    CallingProcessAppId = v6(v5, pv[0], &v9);
    if ( CallingProcessAppId >= 0 )
    {
      memset_0(v11, 0, 0x50uLL);
      CallingProcessAppId = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v9 + 216LL))(v9, v11);
      if ( CallingProcessAppId >= 0 )
      {
        *(_OWORD *)a2 = v11[0];
        *((_OWORD *)a2 + 1) = v11[1];
        *((_QWORD *)a2 + 4) = v12;
      }
    }
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)CallingProcessAppId;
}
