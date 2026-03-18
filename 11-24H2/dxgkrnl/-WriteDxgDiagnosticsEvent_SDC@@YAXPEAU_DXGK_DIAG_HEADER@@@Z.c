/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140059EB8
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14002479C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x14003FEA8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SDC(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdx
  struct _DXGK_DIAG_HEADER *v7; // [rsp+40h] [rbp-10h] BYREF
  __int16 v8; // [rsp+48h] [rbp-8h]
  int v9; // [rsp+68h] [rbp+18h] BYREF
  int v10; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304880) )
  {
    if ( (unsigned int)dword_14015E5E0 > 1
      && tlgKeywordOn((__int64)&dword_14015E5E0, 0x200000000001LL)
      && tlgKeywordOn((__int64)&dword_14015E5E0, v2) )
    {
      v6 = &unk_14013DC9C;
LABEL_11:
      v8 = *((_WORD *)a1 + 2);
      v9 = *((_DWORD *)a1 + 10);
      v7 = a1;
      v10 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v3,
        (__int64)v6,
        v4,
        v5,
        (__int64)&v10,
        (__int64)&v9,
        (__int64 *)&v7);
    }
  }
  else if ( (unsigned int)dword_14015E5E0 > 4
         && (qword_14015E5F0 & 0x200000000001LL) != 0
         && (qword_14015E5F8 & 0x200000000001LL) == qword_14015E5F8
         && tlgKeywordOn((__int64)&dword_14015E5E0, 0x200000000001LL) )
  {
    v6 = &unk_14013DCC8;
    goto LABEL_11;
  }
}
