/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02B9830
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027449C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0299914 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B7140 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B71B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02B7B44 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

HSURF __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  HSURF v2; // rdi
  UMPDOBJ *v3; // rbx
  int v4; // eax
  HSURF v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r10d
  _QWORD *v16; // rdx
  size_t Size; // [rsp+28h] [rbp-39h]
  int v18; // [rsp+48h] [rbp-19h] BYREF
  int v19; // [rsp+4Ch] [rbp-15h] BYREF
  HSURF v20; // [rsp+50h] [rbp-11h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v24; // [rsp+88h] [rbp+27h]
  _DWORD v25[2]; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+98h] [rbp+37h]
  __int64 v27; // [rsp+A0h] [rbp+3Fh]
  struct DHPDEV__ *v28; // [rsp+A8h] [rbp+47h]

  v2 = 0LL;
  v26 = 0LL;
  v20 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v3 = v22;
  v26 = 0LL;
  if ( !v22 )
    goto LABEL_37;
  v25[1] = 3;
  v25[0] = 32;
  v27 = *(_QWORD *)v22;
  v28 = a1;
  LODWORD(Size) = 8;
  v4 = UMPDOBJ::Thunk(v22, v25, 0x20u, &v20, Size);
  v5 = v20;
  if ( v4 == -1 )
    v5 = 0LL;
  if ( !v5 )
  {
LABEL_36:
    v2 = v5;
LABEL_37:
    XUMPDOBJ::~XUMPDOBJ(&v22);
    return v2;
  }
  SURFREF::SURFREF((SURFREF *)v23, v5);
  v6 = v24;
  if ( !v24 )
  {
    v5 = 0LL;
LABEL_33:
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
    goto LABEL_36;
  }
  if ( *(_QWORD *)(v24 + 48) )
  {
    v11 = *(unsigned int *)(v24 + 112);
    if ( (v11 & 0x40000) == 0 )
    {
      if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
      {
        LODWORD(v20) = 0;
        v21 = 0x1000000LL;
        v19 = 1;
        v18 = 71980;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v12,
          byte_1C031E89C,
          v13,
          v6,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v19,
          (__int64)&v20);
        v6 = v24;
      }
      if ( v6 )
        DEC_SHARE_REF_CNT(v6);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
      goto LABEL_37;
    }
    if ( *(_WORD *)(v24 + 100) == 1 && (v11 & 0x29) != 0x29 )
      v5 = 0LL;
    if ( (v11 & 0x4000000) != 0 )
    {
      if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
      {
        LODWORD(v20) = 0;
        v19 = v15;
        v21 = 0x1000000LL;
        v18 = 64770;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          byte_1C031E89C,
          v14,
          v6,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v19,
          (__int64)&v20);
        v6 = v24;
      }
      v5 = 0LL;
    }
    if ( *((_DWORD *)v3 + 110) )
    {
      v16 = (_QWORD *)(v6 + 24);
      if ( !v6 )
        v16 = 0LL;
      UMPDOBJ::vClient((UMPDOBJ *)v11, v16);
      v6 = v24;
    }
    if ( v5 )
    {
      INC_SHARE_REF_CNT(v6);
      v6 = v24;
    }
    goto LABEL_33;
  }
  if ( (unsigned int)dword_1C0354098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      v18 = 0;
      v19 = 1;
      v21 = 0x1000000LL;
      LODWORD(v20) = 73876;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_1C031E89C,
        v8,
        v9,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  SURFREF::~SURFREF((SURFREF *)v23);
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return 0LL;
}
