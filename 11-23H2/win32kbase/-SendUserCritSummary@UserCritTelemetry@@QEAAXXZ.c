/*
 * XREFs of ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C00541B0
 * Callers:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0053EC0 (EtwTraceAcquiredExclusiveUserCrit.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333@Z @ 0x1C00012C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x1C00D0EDC (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0138208 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 */

void __fastcall UserCritTelemetry::SendUserCritSummary(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  unsigned __int64 v3; // rdi
  int v4; // r8d
  int v5; // r9d
  __int64 *v6; // r15
  LARGE_INTEGER *v7; // r14
  unsigned __int64 *p_QuadPart; // r12
  __int64 v9; // r9
  LARGE_INTEGER v10; // r8
  unsigned __int64 QuadPart; // rax
  LARGE_INTEGER v12; // rcx
  unsigned __int64 v13; // rax
  LARGE_INTEGER v14; // r8
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  LARGE_INTEGER *v21; // [rsp+80h] [rbp-39h] BYREF
  __int16 v22; // [rsp+88h] [rbp-31h]
  LARGE_INTEGER *v23; // [rsp+90h] [rbp-29h] BYREF
  __int16 v24; // [rsp+98h] [rbp-21h]
  LARGE_INTEGER *v25; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v26; // [rsp+A8h] [rbp-11h]
  LARGE_INTEGER v27; // [rsp+B0h] [rbp-9h] BYREF
  LARGE_INTEGER v28; // [rsp+B8h] [rbp-1h] BYREF
  LARGE_INTEGER v29; // [rsp+C0h] [rbp+7h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v31[8]; // [rsp+D0h] [rbp+17h] BYREF
  LARGE_INTEGER v32; // [rsp+120h] [rbp+67h] BYREF
  __int64 v33; // [rsp+128h] [rbp+6Fh] BYREF
  LARGE_INTEGER v34; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+138h] [rbp+7Fh] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = 0LL;
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[604].QuadPart)) / gliQpcFreq.QuadPart > 0x6B49D200 )
  {
    if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
    {
      v32.LowPart = 1;
      v26 = 15;
      v25 = this + 580;
      v24 = 15;
      v23 = this + 565;
      v21 = this + 550;
      v22 = 15;
      v33 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
        15,
        (unsigned int)&unk_1C0256045,
        v4,
        v5,
        (__int64)&v33,
        (__int64)&v21,
        (__int64)&v23,
        (__int64)&v25,
        (__int64)&v32);
    }
    memset(&this[550], 0, 0x168uLL);
    this[604] = PerformanceCounter;
  }
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart)) / gliQpcFreq.QuadPart > 0xF4240 )
  {
    v6 = (__int64 *)&this[598];
    v7 = this + 595;
    p_QuadPart = (unsigned __int64 *)&this[601].QuadPart;
    UserCritTelemetry::TelemetryBuffer::Update(
      (UserCritTelemetry::TelemetryBuffer *)this,
      (const unsigned __int64 *const)&this[601].QuadPart,
      (const unsigned __int64 *const)&this[595].QuadPart,
      (const unsigned __int64 *const)&this[598].QuadPart);
    if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x10000000LL) )
    {
      v10 = this[603];
      QuadPart = this[597].QuadPart;
      v12 = this[600];
      v32 = v10;
      v33 = QuadPart;
      v34 = v12;
      if ( v10.QuadPart )
        v13 = QuadPart / v10.QuadPart;
      else
        v13 = 0LL;
      v14 = this[602];
      v15 = this[599];
      v35 = v13;
      v16 = this[596];
      v28 = v16;
      v27 = v14;
      v29 = v15;
      if ( v14.QuadPart )
        v17 = v16.QuadPart / (unsigned __int64)v14.QuadPart;
      else
        v17 = 0LL;
      v18 = *p_QuadPart;
      v19 = *v6;
      v30 = v17;
      v20 = v7->QuadPart;
      v21 = (LARGE_INTEGER *)v7->QuadPart;
      v31[0] = v18;
      v23 = (LARGE_INTEGER *)v19;
      if ( v18 )
        v3 = v20 / v18;
      v25 = (LARGE_INTEGER *)v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v19,
        (int)&unk_1C0255F36,
        v18,
        v9,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
    *(_OWORD *)&v7->LowPart = 0LL;
    this[597].QuadPart = 0LL;
    *(_OWORD *)v6 = 0LL;
    this[600].QuadPart = 0LL;
    *(_OWORD *)p_QuadPart = 0LL;
    this[603].QuadPart = 0LL;
    this[605] = PerformanceCounter;
  }
}
