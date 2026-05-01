/*
 * XREFs of ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x1805A40FC
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18002C0C8 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000F6CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18008A064 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800B8E20 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSnapComponentTelemetry::InvalidAppInEnumeration_(
        CSnapComponentTelemetry *this,
        enum _TABLETMODESTATE *a2,
        struct IApplicationViewPosition *a3)
{
  __int64 v5; // rax
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD v10[6]; // [rsp+60h] [rbp+17h] BYREF
  const unsigned __int16 *v11; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+80h] [rbp+37h] BYREF
  unsigned __int16 *v13[2]; // [rsp+88h] [rbp+3Fh] BYREF

  v10[0] = 0;
  TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)v10, a2);
  v5 = *(_QWORD *)a3;
  *(_OWORD *)v13 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewPosition *, unsigned __int16 **))(v5 + 24))(a3, v13);
  v6 = WindowManagementLogging::Provider();
  v7 = (__int64)v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    if ( tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v10[3] = v13[1];
      v10[4] = HIDWORD(v13[0]);
      v10[1] = v10[0];
      v10[5] = v13[0];
      v10[2] = HIDWORD(v13[1]);
      v11 = SQM::CensorAppID((LPCWSTR)a2, (const unsigned __int16 *)HIDWORD(v13[1]));
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        (__int64)&unk_18081479E,
        v8,
        v9,
        (__int64)&v12,
        &v11);
    }
  }
}
