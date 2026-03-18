/*
 * XREFs of ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003FA78
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023FEC (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1400404B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_QDC(struct _DXGK_DIAG_HEADER *a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  void *v5; // rdx
  __int64 v6; // rdx
  struct _DXGK_DIAG_HEADER *v7; // [rsp+40h] [rbp-10h] BYREF
  __int16 v8; // [rsp+48h] [rbp-8h]
  int v9; // [rsp+68h] [rbp+18h] BYREF
  int v10; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) )
  {
    if ( (unsigned int)dword_14015B5F0 > 1
      && (unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x200000000001LL)
      && (unsigned __int8)tlgKeywordOn(&dword_14015B5F0, v6) )
    {
      v5 = &unk_14013AAB0;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)dword_14015B5F0 > 4
         && (qword_14015B600 & 0x200000000001LL) != 0
         && (qword_14015B608 & 0x200000000001LL) == qword_14015B608 )
  {
    v5 = &unk_14013AADC;
LABEL_7:
    v8 = *((_WORD *)a1 + 2);
    v9 = *((_DWORD *)a1 + 10);
    v7 = a1;
    v10 = 8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v2,
      (_DWORD)v5,
      v3,
      v4,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v7);
  }
}
