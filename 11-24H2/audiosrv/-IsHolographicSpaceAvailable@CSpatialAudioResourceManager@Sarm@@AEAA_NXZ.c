/*
 * XREFs of ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x1800A0C94
 * Callers:
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18005F21C (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18000170C (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005F5D8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v5; // bl
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp-40h] BYREF
  bool v9[7]; // [rsp+31h] [rbp-3Fh] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  v5 = 0;
  if ( *((_BYTE *)this + 105) )
  {
    v11 = 0LL;
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.HolographicDisplay",
      0x30u,
      0x2Fu);
    if ( (int)RoGetActivationFactory(v13, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v11) >= 0 )
    {
      v10 = 0LL;
      v6 = *v11;
      v10 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v6 + 64))(v11, &v10) >= 0 )
        v5 = v10 != 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  }
  if ( (unsigned int)dword_1801D82B0 > 4 )
  {
    v8 = *((_BYTE *)this + 105);
    v9[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1801D82B0,
      (__int64)&unk_1801AE395,
      a3,
      a4,
      (__int64)v9,
      (__int64)&v8);
  }
  return v5;
}
