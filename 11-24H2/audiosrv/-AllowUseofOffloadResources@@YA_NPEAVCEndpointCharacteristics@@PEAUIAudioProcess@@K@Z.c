/*
 * XREFs of ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006A4E0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 *     AudioServerIsOffloadCapable @ 0x180084BF0 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    (**v7)(v7, &GUID_475d74a7_6824_4b91_89be_33d893b255ed, &v8);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8) )
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
