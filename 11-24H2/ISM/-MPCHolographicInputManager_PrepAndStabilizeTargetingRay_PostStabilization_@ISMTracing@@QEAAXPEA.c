/*
 * XREFs of ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800111D0
 * Callers:
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180012948 (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 * Callees:
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x18006A0F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  int v7; // [rsp+60h] [rbp-10h] BYREF
  int v8; // [rsp+64h] [rbp-Ch] BYREF
  int v9; // [rsp+68h] [rbp-8h] BYREF
  int v10; // [rsp+6Ch] [rbp-4h] BYREF
  ISMTracing *v11; // [rsp+80h] [rbp+10h] BYREF
  int v12; // [rsp+90h] [rbp+20h] BYREF
  int v13; // [rsp+98h] [rbp+28h] BYREF

  v11 = this;
  v3 = ISMTracing::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v3, 1LL, v3) )
    {
      v6 = *((_DWORD *)a2 + 35);
      v13 = *((_DWORD *)a2 + 33);
      v7 = *((_DWORD *)a2 + 32);
      v8 = *((_DWORD *)a2 + 31);
      v9 = *((_DWORD *)a2 + 30);
      v10 = *((_DWORD *)a2 + 20);
      LODWORD(v11) = v6;
      v12 = *((_DWORD *)a2 + 34);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_180210742,
        v4,
        v5,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
