/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003F8E0
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14002479C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140003854 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x14003EE40 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x14003FCA8 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x14003FD0C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x14003FDC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r10d
  __int64 v5; // r9
  void *v6; // rdx
  int *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  void *v10; // rdx
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int *v16; // [rsp+28h] [rbp-58h]
  int v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  struct _DXGK_DIAG_HEADER *v20; // [rsp+70h] [rbp-10h] BYREF
  __int16 v21; // [rsp+78h] [rbp-8h]
  int v22; // [rsp+A0h] [rbp+20h] BYREF
  int v23; // [rsp+A8h] [rbp+28h] BYREF
  int v24; // [rsp+B0h] [rbp+30h] BYREF
  int v25; // [rsp+B8h] [rbp+38h] BYREF

  if ( !(unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_14015E5E0 <= 4 )
      goto LABEL_4;
    v2 = 16;
    if ( (qword_14015E5F0 & 0x200000000010LL) == 0 )
      goto LABEL_4;
    v5 = qword_14015E5F8;
    if ( (qword_14015E5F8 & 0x200000000010LL) != qword_14015E5F8 )
      goto LABEL_5;
    v6 = &unk_14013D8C0;
    v21 = *((_WORD *)a1 + 2);
    v22 = *((_DWORD *)a1 + 15);
    v23 = *((_DWORD *)a1 + 14);
    v24 = *((_DWORD *)a1 + 13);
    v18 = *((_DWORD *)a1 + 10);
    v16 = &v18;
    v7 = &v17;
    v17 = 8;
    goto LABEL_12;
  }
  if ( (unsigned int)dword_14015E5E0 <= 4 || (qword_14015E5F0 & 0x10) == 0 )
    goto LABEL_4;
  v5 = qword_14015E5F8;
  if ( (qword_14015E5F8 & 0x10) == qword_14015E5F8 && (unsigned __int8)tlgKeywordOn(&dword_14015E5E0, 16LL) )
  {
    v6 = &unk_14013D9CB;
    v21 = *((_WORD *)a1 + 2);
    v22 = *((_DWORD *)a1 + 15);
    v23 = *((_DWORD *)a1 + 14);
    v24 = *((_DWORD *)a1 + 13);
    v17 = *((_DWORD *)a1 + 10);
    v16 = &v17;
    v7 = &v18;
    v18 = 8;
LABEL_12:
    v20 = a1;
    v25 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v2,
      (_DWORD)v6,
      v3,
      v5,
      (__int64)v7,
      (__int64)v16,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v20);
LABEL_4:
    v5 = qword_14015E5F8;
  }
LABEL_5:
  if ( (unsigned int)dword_14015E5E0 > 4 && (qword_14015E5F0 & 0x400000000010LL) != 0 )
  {
    v8 = v5 & 0x400000000010LL;
    if ( (v5 & 0x400000000010LL) == v5 )
    {
      v9 = *((_DWORD *)a1 + 12);
      switch ( v9 )
      {
        case 'X':
          if ( v8 == v5 )
          {
            v10 = &unk_14013D91A;
            goto LABEL_26;
          }
          break;
        case 'D':
          v11 = (*((_DWORD *)a1 + 13) & 0x40000000) != 0;
          v12 = *((_DWORD *)a1 + 13) >> 31;
          if ( *((int *)a1 + 13) < 0 != v11 && v8 == v5 )
          {
            v23 = v11;
            v24 = (unsigned __int8)v12;
            v25 = *((_DWORD *)a1 + 15);
            v18 = *((_DWORD *)a1 + 14);
            LOBYTE(v22) = *((_BYTE *)a1 + 52);
            v20 = (struct _DXGK_DIAG_HEADER *)*((_QWORD *)a1 + 8);
            v17 = *((_DWORD *)a1 + 10);
            LODWORD(v19) = 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v12,
              (__int64)&unk_14013D6E0,
              v8,
              v5,
              (__int64)&v19,
              (__int64)&v17,
              (__int64)&v20,
              (__int64)&v22,
              (__int64)&v18,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23);
          }
          break;
        case '`':
          if ( (unsigned __int8)tlgKeywordOn(&dword_14015E5E0, 0x400000000010LL) )
          {
            v10 = &unk_14013D7D2;
            goto LABEL_26;
          }
          break;
        case 'b':
          if ( *((int *)a1 + 14) < 0 && (unsigned __int8)tlgKeywordOn(&dword_14015E5E0, 0x400000000010LL) )
          {
            v23 = *((_DWORD *)a1 + 13);
            v19 = *((_QWORD *)a1 + 8);
            v24 = *((_DWORD *)a1 + 10);
            v22 = v15;
            v25 = 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v13,
              (__int64)&unk_14013D842,
              v14,
              v15,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v19,
              (__int64)&v23,
              (__int64)&v22);
          }
          break;
        default:
          if ( v9 == 104 && (unsigned __int8)tlgKeywordOn(&dword_14015E5E0, 0x400000000010LL) )
          {
            v10 = &unk_14013D771;
LABEL_26:
            v22 = *((_DWORD *)a1 + 15);
            v23 = *((_DWORD *)a1 + 14);
            v24 = *((_DWORD *)a1 + 13);
            v19 = *((_QWORD *)a1 + 8);
            v25 = *((_DWORD *)a1 + 10);
            v18 = 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v2,
              (_DWORD)v10,
              v8,
              v5,
              (__int64)&v18,
              (__int64)&v25,
              (__int64)&v19,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22);
          }
          break;
      }
    }
  }
}
