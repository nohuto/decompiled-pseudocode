/*
 * XREFs of ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z @ 0x1800C5CA0
 * Callers:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C4B28 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180002F14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U-$_tlgWrap.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x180011B6C (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        char a4,
        unsigned int a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  const WCHAR *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+68h] [rbp+Fh] BYREF
  int v15; // [rsp+6Ch] [rbp+13h] BYREF
  int v16; // [rsp+70h] [rbp+17h] BYREF
  int v17; // [rsp+74h] [rbp+1Bh] BYREF
  int PIDOfMPCTarget; // [rsp+78h] [rbp+1Fh] BYREF
  const WCHAR *v19; // [rsp+80h] [rbp+27h] BYREF
  struct IMPCTarget *v20; // [rsp+88h] [rbp+2Fh] BYREF
  ISMTracing *v21; // [rsp+B8h] [rbp+5Fh] BYREF

  v21 = this;
  v8 = ISMTracing::Provider();
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1LL) )
  {
    v10 = *(_DWORD *)a3 == 512;
    v15 = *((_DWORD *)a3 + 18);
    v16 = *((_DWORD *)a3 + 2);
    v17 = *((_DWORD *)a3 + 1);
    v14 = a5;
    LOBYTE(v21) = a4;
    if ( v10 )
    {
      v11 = L"Hand";
    }
    else if ( *(_DWORD *)a3 == 1024 )
    {
      v11 = L"Clicker";
    }
    else if ( *(_DWORD *)a3 == 0x2000 )
    {
      v11 = L"6dof";
    }
    else
    {
      v11 = &WindowName;
      if ( *(_DWORD *)a3 == 0x40000 )
        v11 = L"Voice";
    }
    v19 = v11;
    PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
    v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v9,
      (__int64)&unk_180210F82,
      v12,
      v13,
      (__int64)&v20,
      (__int64)&PIDOfMPCTarget,
      &v19,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v21,
      (__int64)&v14);
  }
}
