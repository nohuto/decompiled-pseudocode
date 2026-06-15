/*
 * XREFs of ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006E9C0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180038EE0 (AudioServerIsFormatSupported.c)
 *     AudioServerIsOffloadCapable @ 0x18006E770 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall AllowUseofOffloadResources(
        struct CEndpointCharacteristics *a1,
        struct IAudioProcess *a2,
        unsigned int a3)
{
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 64LL))(g_ProcessSubmixManager) )
    return 0;
  v8 = 0LL;
  v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 7);
  if ( v7 )
  {
    (**v7)(v7, &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3, &v8);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
        return 0;
      }
    }
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, a3, 0LL) )
  {
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return 0;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return 1;
}
