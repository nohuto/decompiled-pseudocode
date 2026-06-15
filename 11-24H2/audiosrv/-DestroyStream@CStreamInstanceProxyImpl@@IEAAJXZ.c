/*
 * XREFs of ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x1800249AC
 * Callers:
 *     ?DestroyStream@CStreamInstanceProxy@@UEAAJXZ @ 0x18006EF40 (-DestroyStream@CStreamInstanceProxy@@UEAAJXZ.c)
 *     ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x18007440C (--1CBridgeStreamInstanceProxy@@UEAA@XZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstanceProxyImpl::DestroyStream(CStreamInstanceProxyImpl *this)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-E0h]
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  CStreamInstanceProxyImpl *v9; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v13; // [rsp+150h] [rbp+50h]
  int v14; // [rsp+158h] [rbp+58h]
  int v15; // [rsp+15Ch] [rbp+5Ch]
  void *v16; // [rsp+160h] [rbp+60h]
  int v17; // [rsp+168h] [rbp+68h]
  int v18; // [rsp+16Ch] [rbp+6Ch]
  CStreamInstanceProxyImpl **v19; // [rsp+170h] [rbp+70h]
  int v20; // [rsp+178h] [rbp+78h]
  int v21; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v22; // [rsp+180h] [rbp+80h]
  int v23; // [rsp+188h] [rbp+88h]
  int v24; // [rsp+18Ch] [rbp+8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v2 + 1),
    "StreamInstance_Destroy",
    0LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF76,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = this;
    v22 = &v8;
    v23 = 8;
    v24 = 0;
    v19 = &v9;
    v20 = 8;
    v21 = 0;
    v10[0] = 184549376;
    v10[1] = 4;
    v11 = 512LL;
    v13 = *(unsigned __int16 **)(v5 + 8);
    v14 = *v13;
    v15 = 2;
    v16 = &unk_1801AC32B;
    v17 = 43;
    v18 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v10, 0LL, 0LL);
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return 0LL;
}
