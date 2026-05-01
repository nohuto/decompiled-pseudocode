/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800CB9C4
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x18009D9E8 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800B8E20 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800CBB30 (-Instance@WindowManagementLogging@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x1800CBBF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0331_0005@@@Z @ 0x1804EC52C (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, __int64 *a2, int a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rax
  const struct _tlgProvider_t *v7; // rdi
  char HaveQuirk; // al
  const unsigned __int16 *v9; // rdx
  const WCHAR *v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+50h] [rbp-30h] BYREF
  const unsigned __int16 *v14; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  char v18; // [rsp+B8h] [rbp+38h] BYREF

  v17 = a1;
  v5 = (_DWORD *)*((_QWORD *)WindowManagementLogging::Instance() + 1);
  if ( v5 && *v5 )
  {
    pv[0] = 0LL;
    v6 = *a2;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    (*(void (__fastcall **)(__int64 *, LPVOID *))(v6 + 136))(a2, pv);
    v7 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v7 > 5u
      && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
    {
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 0LL)
        || (HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 5LL)) != 0 )
      {
        HaveQuirk = 1;
      }
      LOBYTE(v17) = HaveQuirk;
      v18 = ShellPositionerTelemetry::DoesAppHaveQuirk(a2, 4LL);
      v13 = a3;
      v10 = &pvData;
      if ( pv[0] )
        v10 = (const WCHAR *)pv[0];
      v14 = SQM::CensorAppID(v10, v9);
      v15 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (_DWORD)v7,
        (unsigned int)&unk_180806C65,
        v11,
        v12,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v18,
        (__int64)&v17);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
}
