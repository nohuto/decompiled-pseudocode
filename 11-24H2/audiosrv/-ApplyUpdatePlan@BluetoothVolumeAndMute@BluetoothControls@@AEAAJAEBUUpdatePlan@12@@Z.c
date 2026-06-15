/*
 * XREFs of ?ApplyUpdatePlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEBUUpdatePlan@12@@Z @ 0x1800D2AEC
 * Callers:
 *     ?DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ @ 0x1800D33BC (-DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@45@Z @ 0x180003040 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U2@U3@@-$_tlgWriteTe.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::ApplyUpdatePlan(
        BluetoothControls::BluetoothVolumeAndMute *this,
        const struct BluetoothControls::BluetoothVolumeAndMute::UpdatePlan *a2)
{
  char *v4; // rdi
  __int64 v5; // rdx
  char v6; // cl
  int v7; // eax
  char v8; // al
  int v9; // xmm0_4
  __int64 v10; // r8
  __int64 v11; // r9
  int TargetedVolumeControl; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rdx
  int TargetedMuteControl; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  int v20; // [rsp+50h] [rbp-10h] BYREF
  int v21[2]; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF
  char v24; // [rsp+A0h] [rbp+40h] BYREF
  int v25; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (char *)a2 + 44;
  if ( *((_BYTE *)a2 + 20) || *v4 )
  {
    if ( **((_DWORD **)AudioSrvTelemetryProvider::Instance() + 1) > 4u )
    {
      v6 = *v4;
      if ( *v4 )
        v7 = *((_DWORD *)a2 + 6);
      else
        v7 = 0;
      v25 = v7;
      LOBYTE(v23) = v6;
      v8 = *((_BYTE *)a2 + 20);
      if ( v8 )
        v9 = *(_DWORD *)a2;
      else
        v9 = 0;
      v20 = v9;
      v24 = v8;
      *(_QWORD *)v21 = std::wstring::c_str((__int64)this + 48, v5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v10,
        (int)&unk_1801AB23B,
        v10,
        v11,
        (const WCHAR **)v21,
        (__int64)&v24,
        (__int64)&v20,
        (__int64)&v23,
        (__int64)&v25);
      v4 = (char *)a2 + 44;
    }
    if ( *((_BYTE *)a2 + 20) )
    {
      v23 = 0LL;
      TargetedVolumeControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(this, &v23);
      v14 = TargetedVolumeControl;
      if ( TargetedVolumeControl < 0 )
      {
        v15 = 1693LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)TargetedVolumeControl);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        return v14;
      }
      TargetedVolumeControl = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD))(*(_QWORD *)v23 + 120LL))(
                                v23,
                                v13,
                                (char *)a2 + 4,
                                0LL);
      v14 = TargetedVolumeControl;
      if ( TargetedVolumeControl < 0 )
      {
        v15 = 1695LL;
        goto LABEL_16;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    }
    if ( *v4 )
    {
      v23 = 0LL;
      TargetedMuteControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(this, &v23);
      v18 = TargetedMuteControl;
      if ( TargetedMuteControl < 0 )
      {
        v19 = 1701LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)TargetedMuteControl);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        return v18;
      }
      TargetedMuteControl = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD))(*(_QWORD *)v23 + 88LL))(
                              v23,
                              *((unsigned int *)a2 + 6),
                              (char *)a2 + 28,
                              0LL);
      v18 = TargetedMuteControl;
      if ( TargetedMuteControl < 0 )
      {
        v19 = 1703LL;
        goto LABEL_23;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    }
  }
  return 0LL;
}
