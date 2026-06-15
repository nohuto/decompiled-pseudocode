/*
 * XREFs of ?LoadMuteState_old@CMuteSoftware@@AEAAJXZ @ 0x180102400
 * Callers:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x18010230C (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800C30FC (WPP_SF_Sd.c)
 *     WPP_SF_Sl @ 0x18010306C (WPP_SF_Sl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::LoadMuteState_old(CMuteSoftware *this)
{
  int v2; // esi
  int v3; // edi
  int v4; // r8d
  BOOL v5; // eax
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)this + 4),
         &v10);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9);
    if ( v2 >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v8 = 0LL;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_7f672c8107043d7bc81576871ecf25df_Traceguids,
          *((const wchar_t **)this + 4));
      }
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
             v9,
             &PKEY_APO_MasterMute,
             pvar);
      if ( v3 >= 0 && LOWORD(pvar[0]) == 11 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x16u,
            (__int64)&WPP_7f672c8107043d7bc81576871ecf25df_Traceguids,
            *((const wchar_t **)this + 4),
            SLOWORD(pvar[1]));
        }
        v5 = LOWORD(pvar[1]) == 0xFFFF;
        *((_DWORD *)this + 6) = v5;
        *((_BYTE *)this + 96) = 1;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v4, *((_QWORD *)this + 4), v5);
        }
      }
      PropVariantClear(pvar);
      if ( v3 < 0 )
        AudSrvTraceLoggingErrorHelper("CMuteSoftware::LoadMuteState_old", 916, v3);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  return (unsigned int)v2;
}
