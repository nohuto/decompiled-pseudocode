/*
 * XREFs of ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180104B84
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180104AE0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180009E10 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800DD974 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180105000 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x18010505C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x1801168BC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnVolumeLimitCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  int DeviceId; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  signed int v9; // eax
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v15[240]; // [rsp+5Ch] [rbp-ACh] BYREF
  int v16; // [rsp+23Ch] [rbp+134h]

  pv = 0LL;
  v11 = 0LL;
  v13[0] = 0LL;
  memset_0(&v14, 0, 0x1E8uLL);
  if ( (byte_1801CF881 & 2) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v2, &EVT_VOLUME_LIMIT_CHANGED_ENTER, this);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11), &v11);
  if ( v5 >= 0 )
  {
    if ( (_DWORD)v11 )
    {
      v5 = -2147467259;
      goto LABEL_20;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 32LL))(
           *((_QWORD *)this + 11),
           (char *)&v11 + 4);
    if ( v5 >= 0 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
      {
        DeviceId = CKsNotificationsMonitor::GetDeviceId(this, (unsigned __int16 **)&pv);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 11) + 96LL))(
               *((_QWORD *)this + 11),
               v13);
        if ( v5 < 0 )
          goto LABEL_20;
        DeviceId = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13[0] + 64LL))(v13[0], &pv);
      }
      v5 = DeviceId;
      if ( DeviceId >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( *((_WORD *)pv + v7) );
        v16 = HIDWORD(v11);
        v14 = 2 * v7 + 2;
        v5 = StringCbCopyW((char *)v15, 0x1E0uLL, (char *)pv);
        if ( v5 >= 0 )
        {
          if ( (byte_1801CF881 & 2) != 0 )
            McTemplateU0p_EtwEventWriteTransfer(v4, &EVT_VOLUME_LIMIT_PUBLISH_WNF_AVLC_STATE, this);
          v8 = RtlPublishWnfStateData(WNF_AVLC_DRIVER_REQUEST, 0LL, &v14, 488LL, 0LL);
          if ( v8 < 0 )
          {
            v9 = RtlNtStatusToDosError(v8);
            v5 = v9;
            if ( v9 > 0 )
              v5 = (unsigned __int16)v9 | 0x80070000;
          }
        }
      }
    }
  }
LABEL_20:
  if ( (byte_1801CF881 & 2) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v4, v3, this, (unsigned int)v5);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
  return (unsigned int)v5;
}
