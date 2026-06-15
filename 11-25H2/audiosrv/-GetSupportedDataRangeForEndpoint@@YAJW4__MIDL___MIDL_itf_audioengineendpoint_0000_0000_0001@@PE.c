/*
 * XREFs of ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x180090650
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18009025C (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetSupportedDataRangeForEndpoint(
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a1,
        struct IMMDevice *a2,
        struct KSMULTIPLE_ITEM **a3)
{
  GUID *v5; // rbx
  int v6; // edi
  GUID *v7; // rax
  __int64 v8; // rax
  int v9; // eax
  struct KSMULTIPLE_ITEM *v10; // rax
  __int64 *v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  GUID *v15; // [rsp+48h] [rbp-8h]
  LPVOID pv; // [rsp+78h] [rbp+28h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v12 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 **))a2->lpVtbl->Activate)(
         a2,
         &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
         23LL,
         0LL,
         &v12);
  if ( v6 >= 0 )
  {
    v7 = (GUID *)CoTaskMemAlloc(0x68uLL);
    v5 = v7;
    v15 = v7;
    if ( v7 )
    {
      v7->Data1 = 64;
      v7[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
      v7[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      v7[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
      v8 = *v12;
      if ( a1 == eKeywordDetectorConnector )
        v9 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, __int64 *))(v8 + 104))(
               v12,
               v5,
               64LL,
               0LL,
               &v17);
      else
        v9 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, __int64 *))(v8 + 24))(
               v12,
               v5,
               64LL,
               0LL,
               &v17);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v14);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                 v14,
                 1LL,
                 &GUID_0a129110_db5c_467d_b247_b90472feb991,
                 &v13);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 24LL))(v13, &pv);
            if ( v6 >= 0 )
            {
              v10 = (struct KSMULTIPLE_ITEM *)pv;
              pv = 0LL;
              *a3 = v10;
            }
          }
        }
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  CoTaskMemFree(v5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return (unsigned int)v6;
}
