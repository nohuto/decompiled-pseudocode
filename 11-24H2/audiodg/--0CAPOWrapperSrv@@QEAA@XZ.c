/*
 * XREFs of ??0CAPOWrapperSrv@@QEAA@XZ @ 0x140005D28
 * Callers:
 *     ??0?$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x140005CCC (--0-$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CA44 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

CAPOWrapperSrv *__fastcall CAPOWrapperSrv::CAPOWrapperSrv(CAPOWrapperSrv *this)
{
  const struct _tlgProvider_t *v2; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *(_OWORD *)((char *)this + 140) = 0LL;
  *(_OWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 43) = 0;
  *((_WORD *)this + 88) = 0;
  *((_BYTE *)this + 178) = 0;
  v2 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v2, "SrvSystemEffect_CoCreate", 0LL);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return this;
}
