/*
 * XREFs of ??1CEndpointStore@@UEAA@XZ @ 0x1800FD068
 * Callers:
 *     ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x1800FD1C0 (--_ECEndpointStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x180047230 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800A3274 (--1-$unique_ptr@VCAudioSessionManager@@U-$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA.c)
 */

void __fastcall CEndpointStore::~CEndpointStore(CEndpointStore *this)
{
  __int64 *v1; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v1 )
  {
    do
    {
      v3 = (__int64 *)*v1;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16,0>((char *)v1, (const struct std::nothrow_t *)0x10);
      v1 = v3;
    }
    while ( v3 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  v4 = (__int64 *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (__int64 *)*v4;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v4 + 1);
      std::_Deallocate<16,0>((char *)v4, (const struct std::nothrow_t *)0x10);
      v4 = v5;
    }
    while ( v5 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 13);
  std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>((_QWORD *)this + 12);
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
    std::default_delete<_RecurringTask>::operator()(v6, v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  std::wstring::_Tidy_deallocate((__int64)this + 16, v8);
  *((_DWORD *)this + 3) = -1073741823;
}
