/*
 * XREFs of ?GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14008FBD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085664 (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetDevicePosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v7; // esi
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h] BYREF
  __int64 v19; // [rsp+50h] [rbp-29h] BYREF
  _OWORD v20[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21; // [rsp+78h] [rbp-1h]
  _OWORD v22[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+27h]

  PerformanceCount.QuadPart = 0LL;
  if ( *((_BYTE *)this - 1248) )
  {
    if ( a2 )
    {
      if ( a3 )
        *a3 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v23 = 0LL;
      v21 = 0LL;
      v8 = (__int64 *)((char *)this - 1344);
      memset(v22, 0, sizeof(v22));
      v9 = *v8;
      memset(v20, 0, sizeof(v20));
      v7 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, _OWORD *, __int64 *, __int64 *))(v9 + 96))(
             v8,
             v22,
             v20,
             &v19,
             &v18);
      if ( v7 >= 0 )
      {
        if ( HIDWORD(v21) )
        {
          v10 = *(_QWORD *)&v20[0];
        }
        else
        {
          v10 = *((_QWORD *)this - 150);
          v7 = -2005139375;
        }
        *a2 = v10;
      }
    }
    else
    {
      v7 = -2147467261;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  if ( a3 && !*a3 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
              + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCount.LowPart;
    v12 = LowPart * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v13 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v13 = (double)(int)g_u64QPCFrequency;
    *a3 = (unsigned int)(int)(v12 / v13);
  }
  if ( (byte_1400C4541 & 4) != 0 )
  {
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    if ( a2 )
      v15 = *a2;
    else
      LOBYTE(v15) = 0;
    McTemplateU0pqxxxx_EventWriteTransfer(v14, (__int64)a2, (__int64)this - 1344, 7, 0, v15, 0, v14);
  }
  if ( a2 )
    *((_QWORD *)this - 150) = *a2;
  if ( v7 < 0 )
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetDevicePosition",
      594,
      (unsigned int)v7,
      a4);
  return (unsigned int)v7;
}
