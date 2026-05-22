/*
 * XREFs of ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@IJ@Z @ 0x1800C5BAC
 * Callers:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C5EF4 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x180002E3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180011B6C (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        int a4,
        int a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+64h] [rbp-1Ch] BYREF
  int v15; // [rsp+68h] [rbp-18h] BYREF
  int v16; // [rsp+6Ch] [rbp-14h] BYREF
  int v17; // [rsp+70h] [rbp-10h] BYREF
  int PIDOfMPCTarget; // [rsp+74h] [rbp-Ch] BYREF
  struct IMPCTarget *v19; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = this;
  v8 = ISMTracing::Provider();
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1LL) )
  {
    v14 = *((_DWORD *)a3 + 18);
    v15 = *((_DWORD *)a3 + 2);
    v16 = *((_DWORD *)a3 + 1);
    v10 = *(_DWORD *)a3;
    LODWORD(v20) = a5;
    v17 = v10;
    v13 = a4;
    PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
    v19 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (__int64)&unk_180210EF0,
      v11,
      v12,
      (__int64)&v19,
      (__int64)&PIDOfMPCTarget,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v20);
  }
}
