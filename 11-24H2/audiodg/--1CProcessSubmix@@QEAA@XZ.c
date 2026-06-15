/*
 * XREFs of ??1CProcessSubmix@@QEAA@XZ @ 0x14002AC24
 * Callers:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x140041DCC (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14006C9A4 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B30 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

void __fastcall CProcessSubmix::~CProcessSubmix(CProcessSubmix *this)
{
  const struct _tlgProvider_t *v2; // rax
  CProcessSubmix *v3; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v4[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v5; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v6; // [rsp+50h] [rbp+17h] BYREF
  int v7; // [rsp+58h] [rbp+1Fh]
  int v8; // [rsp+5Ch] [rbp+23h]
  void *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  CProcessSubmix **v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v2 = AudioDgTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u )
  {
    v14 = 0;
    v5 = 0LL;
    v12 = &v3;
    v6 = (unsigned __int16 *)*((_QWORD *)v2 + 1);
    v4[1] = 4;
    v3 = this;
    v13 = 8;
    v4[0] = 184549376;
    v7 = *v6;
    v9 = &unk_1400B0835;
    v8 = 2;
    v10 = 50;
    v11 = 1;
    ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int, CProcessSubmix *))EtwEventWriteTransfer)(
      *((_QWORD *)v2 + 4),
      v4,
      0LL,
      0LL,
      3,
      &v6,
      (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata,
      this);
  }
  CSubmixImpl::~CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CProcessSubmix *)((char *)this + 344));
}
