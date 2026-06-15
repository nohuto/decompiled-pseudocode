/*
 * XREFs of ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x180043CD0
 * Callers:
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x18008A170 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18008A9C0 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180043E20 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetEndpointLevel(void (__fastcall ***a1)(_QWORD, GUID *, _QWORD *), unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+38h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int16 v11[16]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = StringCchPrintfW(v11, 0xDuLL, L"Level:%x", a2);
  if ( v5 < 0 )
    goto LABEL_9;
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
  if ( v8 != a1 )
  {
    v6 = 0LL;
    v8 = 0LL;
    if ( a1 )
    {
      (**a1)(a1, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v8);
      v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
    }
  }
  if ( !v6 )
  {
    v5 = -2147024809;
    goto LABEL_10;
  }
  v9 = 8;
  v5 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), unsigned __int16 *, __int64, __int64 *, int *))(*v6)[15])(
         v6,
         v11,
         11LL,
         &v10,
         &v9);
  if ( v5 < 0 )
  {
LABEL_9:
    v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
    goto LABEL_10;
  }
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
  if ( v9 == 8 )
    *a3 = v10;
  else
    v5 = -2147024809;
LABEL_10:
  if ( v6 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v6)[2])(v6);
  return (unsigned int)v5;
}
