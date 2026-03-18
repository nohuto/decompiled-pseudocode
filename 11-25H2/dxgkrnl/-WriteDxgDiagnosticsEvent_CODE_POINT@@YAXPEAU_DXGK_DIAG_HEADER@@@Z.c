/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003FB60
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023FEC (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x14000131C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1400036E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU_tlgWrapperBinary@@@Z @ 0x140003780 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1400402B8 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x1400403D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  void *v8; // rdx
  int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // [rsp+28h] [rbp-21h]
  int v19; // [rsp+60h] [rbp+17h] BYREF
  int v20; // [rsp+64h] [rbp+1Bh] BYREF
  struct _DXGK_DIAG_HEADER *v21; // [rsp+68h] [rbp+1Fh] BYREF
  __int16 v22; // [rsp+70h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+67h] BYREF
  int v24; // [rsp+B8h] [rbp+6Fh] BYREF
  int v25; // [rsp+C0h] [rbp+77h] BYREF
  int v26; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( !(unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) )
    {
      if ( (unsigned int)dword_14015B5F0 <= 1
        || !(unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x200000000010LL)
        || !(unsigned __int8)tlgKeywordOn(&dword_14015B5F0, v10) )
      {
        goto LABEL_4;
      }
      v8 = &unk_14013AF44;
    }
    else
    {
      if ( (unsigned int)dword_14015B5F0 <= 4 )
        return;
      if ( (qword_14015B600 & 0x200000000010LL) == 0 || (qword_14015B608 & 0x200000000010LL) != qword_14015B608 )
        goto LABEL_4;
      v8 = &unk_14013ACE8;
    }
    v22 = *((_WORD *)a1 + 2);
    v23 = *((_DWORD *)a1 + 15);
    v24 = *((_DWORD *)a1 + 14);
    v25 = *((_DWORD *)a1 + 13);
    v26 = *((_DWORD *)a1 + 12);
    v20 = *((_DWORD *)a1 + 10);
    v18 = &v20;
    v9 = &v19;
    v19 = 8;
    goto LABEL_23;
  }
  if ( (unsigned int)dword_14015B5F0 <= 4 )
    return;
  if ( (qword_14015B600 & 0x10) != 0
    && (qword_14015B608 & 0x10) == qword_14015B608
    && (unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 16LL) )
  {
    v8 = &unk_14013ADF3;
    v22 = *((_WORD *)a1 + 2);
    v23 = *((_DWORD *)a1 + 15);
    v24 = *((_DWORD *)a1 + 14);
    v25 = *((_DWORD *)a1 + 13);
    v19 = *((_DWORD *)a1 + 10);
    v18 = &v19;
    v9 = &v20;
    v26 = v7;
    v20 = 8;
LABEL_23:
    v21 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v5,
      (_DWORD)v8,
      v6,
      v7,
      (__int64)v9,
      (__int64)v18,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v21);
  }
LABEL_4:
  if ( (unsigned int)dword_14015B5F0 <= 4
    || (qword_14015B600 & 0x400000000010LL) == 0
    || (qword_14015B608 & 0x400000000010LL) != qword_14015B608 )
  {
    return;
  }
  if ( *((_DWORD *)a1 + 12) != 88 )
  {
    if ( *((_DWORD *)a1 + 12) == 94 )
    {
      if ( !(unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x400000000010LL) )
        return;
      v14 = &unk_14013AE4D;
    }
    else
    {
      if ( *((_DWORD *)a1 + 12) != 111 )
      {
        if ( *((_DWORD *)a1 + 12) == 129 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x400000000010LL) )
          {
            v23 = *((_DWORD *)a1 + 14);
            v24 = *((_DWORD *)a1 + 10);
            v25 = 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v2,
              (__int64)&unk_14013ADA5,
              v3,
              v4,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23);
          }
        }
        return;
      }
      if ( !(unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x400000000010LL) )
        return;
      v14 = &unk_14013AE8F;
    }
    v23 = *((_DWORD *)a1 + 14);
    v24 = *((_DWORD *)a1 + 13);
    v25 = *((_DWORD *)a1 + 10);
    v26 = 8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)v14,
      v12,
      v13,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
    return;
  }
  if ( (unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x400000000010LL) )
  {
    v22 = *((_WORD *)a1 + 2);
    v23 = *((_DWORD *)a1 + 15);
    v24 = *((_DWORD *)a1 + 14);
    v25 = *((_DWORD *)a1 + 13);
    v26 = *((_DWORD *)a1 + 10);
    v21 = a1;
    v20 = 8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v15,
      (__int64)&unk_14013AEE8,
      v16,
      v17,
      (__int64)&v20,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64 *)&v21);
  }
}
