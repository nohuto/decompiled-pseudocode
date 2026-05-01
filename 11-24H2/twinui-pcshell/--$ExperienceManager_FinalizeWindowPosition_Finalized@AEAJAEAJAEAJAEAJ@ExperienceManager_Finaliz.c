/*
 * XREFs of ??$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x180396A8C
 * Callers:
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180399128 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1801A7B2C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18039A674 (-Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        int *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // edx
  int v15; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-10h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v9 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x200000000000LL);
    if ( (_BYTE)v9 )
    {
      v12 = *(_QWORD *)(a1 + 272);
      v15 = *a4;
      v13 = *a5;
      v16 = *a3;
      v17[0] = *a2;
      v18 = v13;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v11,
                     byte_1807EDE5B,
                     (const GUID *)(v12 + 8),
                     v10,
                     (__int64)v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v18);
    }
  }
  return (char)v9;
}
