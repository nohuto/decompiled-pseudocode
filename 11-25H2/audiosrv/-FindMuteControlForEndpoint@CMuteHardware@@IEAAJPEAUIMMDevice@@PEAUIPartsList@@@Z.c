/*
 * XREFs of ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180086580
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800864E8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180058D94 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C4850 (WPP_SF_qS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMuteHardware::FindMuteControlForEndpoint(
        CMuteHardware *this,
        struct IMMDevice *a2,
        struct IPartsList *a3)
{
  int v6; // ebx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF
  int v16; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  v16 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids, this);
  }
  if ( a2 )
  {
    v11 = 0LL;
    pv = 0LL;
    v13 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
           a2,
           &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
           23LL);
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
      if ( v6 >= 0 )
      {
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              15,
              (unsigned int)&WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids,
              (_DWORD)this,
              (__int64)pv);
            v8 = WPP_GLOBAL_Control;
          }
          if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x10000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
            WPP_SF_q(v8[2], 16LL, &WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids, this);
        }
        ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21>::operator=(
          &v14,
          a2,
          v7);
        if ( !v14 || (v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 88LL))(v14, &v16), v6 >= 0) )
        {
          if ( !v16
            || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, &v13), v6 >= 0)
            && ((v15 = 0,
                 (*(int (__fastcall **)(__int64, _QWORD, int *, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, 0LL, &v15, 0LL) >= 0)
              ? (v9 = v15)
              : (v9 = 1, v15 = 1),
                v9 != 1
             || (v6 = (*(__int64 (__fastcall **)(__int64, struct IPartsList *, GUID *, GUID *, char *))(*(_QWORD *)v11 + 80LL))(
                        v11,
                        a3,
                        &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
                        &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                        (char *)this + 48),
                 v6 >= 0)) )
          {
            if ( *((_QWORD *)this + 6)
              || (v6 = (*(__int64 (__fastcall **)(__int64, struct IPartsList *, GUID *, char *))(*(_QWORD *)v11 + 32LL))(
                         v11,
                         a3,
                         &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                         (char *)this + 48),
                  v6 >= 0) )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  17LL,
                  &WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids,
                  this);
              }
              v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 6) + 104LL))(
                     *((_QWORD *)this + 6),
                     23LL,
                     &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                     (char *)this + 56);
            }
          }
        }
      }
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    if ( v6 < 0 )
    {
      if ( *((_DWORD *)this + 16) )
      {
        (*(void (__fastcall **)(_QWORD, CMuteHardware *))(**((_QWORD **)this + 6) + 120LL))(*((_QWORD *)this + 6), this);
        *((_DWORD *)this + 16) = 0;
      }
      AudSrvTraceLoggingErrorHelper("CMuteHardware::FindMuteControlForEndpoint", 430, v6);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  }
  else
  {
    v6 = -2147467261;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return (unsigned int)v6;
}
