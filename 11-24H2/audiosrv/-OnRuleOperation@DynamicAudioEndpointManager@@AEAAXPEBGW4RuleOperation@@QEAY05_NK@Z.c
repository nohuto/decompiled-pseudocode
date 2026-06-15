/*
 * XREFs of ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z @ 0x18006B978
 * Callers:
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18006B754 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180126B70 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180053800 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x180126560 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall DynamicAudioEndpointManager::OnRuleOperation(
        DynamicAudioEndpointManager *a1,
        __int64 a2,
        unsigned int a3,
        bool *a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  bool *v8; // rdi
  __int64 v9; // r15
  _QWORD **v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  int (__fastcall *v13)(__int64, struct IAudioProcess **); // rbx
  int v15; // [rsp+30h] [rbp-40h] BYREF
  struct IAudioProcess *v16; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v17; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-28h] BYREF
  _QWORD **v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+68h] [rbp-8h] BYREF

  v7 = 0LL;
  v21 = 0LL;
  v8 = a4;
  v9 = 6LL;
  v10 = (_QWORD **)((char *)a1 + 24);
  do
  {
    v19 = v10;
    v11 = 6LL;
    v20 = 6LL;
    do
    {
      v18 = *v10;
      if ( v18 )
      {
        do
        {
          v12 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v11, &v18);
          v22 = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v15 = 0;
          if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v12 + 48LL))(
                 v12,
                 a2,
                 a3,
                 a5,
                 &v15) >= 0 )
          {
            switch ( v15 )
            {
              case 2:
                v16 = 0LL;
                while ( 1 )
                {
                  v13 = *(int (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)v12 + 40LL);
                  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v16);
                  if ( v13(v12, &v16) < 0 )
                    break;
                  v17 = 0LL;
                  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v17);
                  if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v12)(
                         v12,
                         &GUID_00000000_0000_0000_c000_000000000046,
                         &v17) >= 0 )
                    DynamicAudioEndpointManager::RemoveRule(a1, v16, v17, 0, (bool (*const)[6])a4);
                  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v16);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
                v7 = v21;
                break;
              case 3:
                *v8 = 1;
                break;
              case 4:
                v8[v7] = 1;
                v8[v9] = 1;
                break;
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
        }
        while ( v18 );
        v10 = v19;
        v11 = v20;
      }
      v10 += 6;
      v19 = v10;
      ++v8;
      v20 = --v11;
    }
    while ( v11 );
    v9 -= 6LL;
    v7 -= 6LL;
    v21 = v7;
  }
  while ( v9 > -6 );
  return DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(a1, (bool (*const)[6])a4);
}
