/*
 * XREFs of ?DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800E5660
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180074070 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A1D24 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800E45D8 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 */

__int64 __fastcall BluetoothBroadcastProvider::DeactivateMulticastSession(
        BluetoothBroadcastProvider *this,
        const struct _GUID *a2)
{
  unsigned int v3; // ebx
  struct AudioSrvTelemetryProvider *v4; // rax
  double TimeSec; // xmm0_8
  __int64 v6; // r10
  const struct _GUID *v8; // [rsp+30h] [rbp-49h] BYREF
  double v9; // [rsp+38h] [rbp-41h] BYREF
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  LARGE_INTEGER v11; // [rsp+48h] [rbp-31h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  const struct _GUID *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+9Ch] [rbp+23h]
  const struct _GUID **v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+ACh] [rbp+33h]
  double *v24; // [rsp+B0h] [rbp+37h]
  int v25; // [rsp+B8h] [rbp+3Fh]
  int v26; // [rsp+BCh] [rbp+43h]

  PerformanceCount.QuadPart = 0LL;
  v11.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v11);
  v8 = a2;
  v3 = lambda_23a707cc6c78406526adb642245a01c2_::operator()((_DWORD **)&v8);
  QueryPerformanceCounter(&PerformanceCount);
  v4 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 0x400000000000LL) )
  {
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v11);
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v17 = 0;
    v24 = &v9;
    v25 = 8;
    v21 = &v8;
    v15 = &v10;
    v16 = 8;
    v9 = TimeSec;
    LODWORD(v8) = v3;
    v10 = 50333696LL;
    v22 = 4;
    v18 = a2;
    v19 = 16;
    tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_1801ABBCA, 0LL, 0LL, 6, (__int64)v14);
  }
  return v3;
}
