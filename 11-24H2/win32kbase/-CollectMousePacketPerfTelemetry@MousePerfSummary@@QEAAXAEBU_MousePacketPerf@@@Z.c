/*
 * XREFs of ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1400BDB18
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?LogMousePacketLatencyData@MousePerfSummary@@AEAAXAEBU_MousePacketPerf@@@Z @ 0x1400BDE80 (-LogMousePacketLatencyData@MousePerfSummary@@AEAAXAEBU_MousePacketPerf@@@Z.c)
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1400BDFC4 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 */

void __fastcall MousePerfSummary::CollectMousePacketPerfTelemetry(
        LARGE_INTEGER *this,
        const struct _MousePacketPerf *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 QuadPart; // rax
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rax
  DWORD LowPart; // ecx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  LARGE_INTEGER v20; // rcx
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER v22; // rax
  LARGE_INTEGER v23; // rax
  DWORD v24; // ecx
  unsigned __int64 v25; // rcx
  LARGE_INTEGER v26; // rcx
  LARGE_INTEGER v27; // rax
  LARGE_INTEGER v28; // rax
  LARGE_INTEGER v29; // rax
  DWORD v30; // ecx
  unsigned __int64 v31; // rcx
  LARGE_INTEGER v32; // rcx
  LARGE_INTEGER v33; // rax
  LARGE_INTEGER v34; // rax
  LARGE_INTEGER v35; // rax
  DWORD v36; // ecx
  unsigned __int64 v37; // rcx

  this[61].LowPart = *((_DWORD *)a2 + 12);
  this[60].LowPart = *((_DWORD *)a2 + 13);
  v4 = *((_QWORD *)a2 + 5);
  if ( v4 && (v5 = *((_QWORD *)a2 + 4)) != 0 )
    v6 = (unsigned __int64)(1000000 * (v4 - v5)) / gliQpcFreq.QuadPart;
  else
    v6 = 0LL;
  this[53].QuadPart = v6;
  v7 = (_QWORD *)((char *)a2 + 16);
  v8 = *((_QWORD *)a2 + 3);
  if ( v8 && *v7 )
    v9 = (unsigned __int64)(1000000 * (v8 - *v7)) / gliQpcFreq.QuadPart;
  else
    v9 = 0LL;
  this[54].QuadPart = v9;
  v10 = *((_QWORD *)a2 + 1);
  if ( v10 && *(_QWORD *)a2 )
    v11 = (unsigned __int64)(1000000 * (v10 - *(_QWORD *)a2)) / gliQpcFreq.QuadPart;
  else
    v11 = 0LL;
  this[55].QuadPart = v11;
  if ( *v7 && *(_QWORD *)a2 )
    v12 = (unsigned __int64)(1000000LL * (*v7 - *(_QWORD *)a2)) / gliQpcFreq.QuadPart;
  else
    v12 = 0LL;
  this[56].QuadPart = v12;
  if ( this[61].LowPart - 2 > 1 )
  {
    if ( v6 )
    {
      QuadPart = this[30].QuadPart;
      v14.QuadPart = v6;
      if ( QuadPart <= v6 )
        QuadPart = v6;
      this[30].QuadPart = QuadPart;
      if ( this[31].QuadPart < v6 )
        v14 = this[31];
      v15 = this[33];
      this[31] = v14;
      v16.QuadPart = v6 + v15.QuadPart;
      LowPart = this[34].LowPart;
      v18 = LowPart == -1;
      v19 = LowPart + 1;
      this[33] = v16;
      this[34].LowPart = v19;
      if ( v18 )
        this[32].QuadPart = 0LL;
      else
        this[32].QuadPart = v16.QuadPart / v19;
    }
    v20 = this[54];
    if ( v20.QuadPart )
    {
      v21 = this[35];
      if ( v21.QuadPart <= (unsigned __int64)v20.QuadPart )
        v21 = this[54];
      this[35] = v21;
      v22 = this[36];
      if ( v22.QuadPart >= (unsigned __int64)v20.QuadPart )
        v22 = v20;
      this[36] = v22;
      v23.QuadPart = v20.QuadPart + this[38].QuadPart;
      v24 = this[39].LowPart;
      v18 = v24 == -1;
      v25 = v24 + 1;
      this[38] = v23;
      this[39].LowPart = v25;
      if ( v18 )
        this[37].QuadPart = 0LL;
      else
        this[37].QuadPart = v23.QuadPart / v25;
    }
    v26 = this[55];
    if ( v26.QuadPart )
    {
      v27 = this[40];
      if ( v27.QuadPart <= (unsigned __int64)v26.QuadPart )
        v27 = this[55];
      this[40] = v27;
      v28 = this[41];
      if ( v28.QuadPart >= (unsigned __int64)v26.QuadPart )
        v28 = v26;
      this[41] = v28;
      v29.QuadPart = v26.QuadPart + this[43].QuadPart;
      v30 = this[44].LowPart;
      v18 = v30 == -1;
      v31 = v30 + 1;
      this[43] = v29;
      this[44].LowPart = v31;
      if ( v18 )
        this[42].QuadPart = 0LL;
      else
        this[42].QuadPart = v29.QuadPart / v31;
    }
    v32 = this[56];
    if ( v32.QuadPart )
    {
      v33 = this[45];
      if ( v33.QuadPart <= (unsigned __int64)v32.QuadPart )
        v33 = this[56];
      this[45] = v33;
      v34 = this[46];
      if ( v34.QuadPart >= (unsigned __int64)v32.QuadPart )
        v34 = v32;
      this[46] = v34;
      v35.QuadPart = v32.QuadPart + this[48].QuadPart;
      v36 = this[49].LowPart;
      v18 = v36 == -1;
      v37 = v36 + 1;
      this[48] = v35;
      this[49].LowPart = v37;
      if ( v18 )
        this[47].QuadPart = 0LL;
      else
        this[47].QuadPart = v35.QuadPart / v37;
    }
  }
  if ( !this[62].QuadPart )
    this[62] = KeQueryPerformanceCounter(0LL);
  if ( !this[63].QuadPart )
    this[63] = KeQueryPerformanceCounter(0LL);
  MousePerfSummary::LogMousePacketLatencyData((MousePerfSummary *)this, a2);
  MousePerfSummary::SampleRandomPickStart((MousePerfSummary *)this);
}
