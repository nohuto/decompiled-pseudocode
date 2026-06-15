/*
 * XREFs of ?SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ @ 0x14001F680
 * Callers:
 *     ?SignalWorkCompleted@CAudioPump@@AEAAXXZ @ 0x140021280 (-SignalWorkCompleted@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F9A0 (-UpdateProcessingStart@CAudioPump@@AEAA_JXZ.c)
 *     McTemplateU0pqit_EtwEventWriteTransfer @ 0x14001FF40 (McTemplateU0pqit_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

void __fastcall CAudioPump::SetDeadlineForNextProcessingPass(CAudioPump *this)
{
  __int64 v1; // rax
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 v5; // r15
  __int64 updated; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  double LowPart; // xmm0_8
  unsigned __int64 v10; // rcx
  double v11; // xmm0_8
  double v12; // xmm1_8
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // r14d
  void *v19; // rcx
  int v20; // ecx
  int v21; // [rsp+30h] [rbp-79h] BYREF
  int v22; // [rsp+38h] [rbp-71h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-69h] BYREF
  __int64 v24; // [rsp+48h] [rbp-61h] BYREF
  CAudioPump *v25; // [rsp+50h] [rbp-59h] BYREF
  __int64 v26; // [rsp+58h] [rbp-51h] BYREF
  __int64 v27; // [rsp+60h] [rbp-49h] BYREF
  char v28[16]; // [rsp+70h] [rbp-39h] BYREF
  CAudioPump **v29; // [rsp+80h] [rbp-29h]
  __int64 v30; // [rsp+88h] [rbp-21h]
  int *v31; // [rsp+90h] [rbp-19h]
  __int64 v32; // [rsp+98h] [rbp-11h]
  __int64 *v33; // [rsp+A0h] [rbp-9h]
  __int64 v34; // [rsp+A8h] [rbp-1h]
  __int64 *v35; // [rsp+B0h] [rbp+7h]
  __int64 v36; // [rsp+B8h] [rbp+Fh]
  int *v37; // [rsp+C0h] [rbp+17h]
  __int64 v38; // [rsp+C8h] [rbp+1Fh]

  v1 = *((_QWORD *)this + 13);
  v3 = (float)(int)v1;
  if ( CAudioPump::InputPumpWorkRoutine == *((__int64 (__fastcall **)(CAudioPump *))this + 27) )
  {
    v4 = v3 * 0.5;
    v5 = 20000LL;
  }
  else
  {
    v4 = v3 * 0.60000002;
    v5 = 50000LL;
  }
  updated = *((_QWORD *)this + 583);
  v7 = (unsigned int)(int)v4;
  if ( v1 < 1000000 )
    updated = CAudioPump::UpdateProcessingStart(this);
  v8 = updated + *((_QWORD *)this + 13);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v10 = g_u64QPCFrequency;
  v11 = LowPart * 10000000.0;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
  {
    v10 = g_u64QPCFrequency & 1;
    v12 = (double)(int)(v10 | (g_u64QPCFrequency >> 1)) + (double)(int)(v10 | (g_u64QPCFrequency >> 1));
  }
  else
  {
    v12 = (double)(int)g_u64QPCFrequency;
  }
  v13 = (unsigned int)(int)(v11 / v12);
  v14 = v7 - v13 + v8 - 20000;
  if ( v14 < 0 )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0pqit_EtwEventWriteTransfer(
        v10,
        &AudioCore_Pump_MissedDeadline,
        this,
        *((unsigned int *)this + 61),
        v14,
        1);
    v14 = 0LL;
  }
  v15 = *((unsigned int *)this + 60);
  v24 = 0LL;
  v16 = v14 - v5;
  if ( v14 - v5 <= 0 )
    v16 = 0LL;
  v18 = RtwqSetDeadline2(v15, v14 + v13, v16 + v13, &v24);
  if ( v18 >= 0 )
  {
    v19 = (void *)*((_QWORD *)this + 31);
    if ( v19 )
      RtwqCancelDeadline(v19);
  }
  v20 = v24;
  *((_QWORD *)this + 31) = v24;
  if ( (byte_1400C45C1 & 8) != 0 )
  {
    v27 = (unsigned int)v14;
    v26 = (unsigned int)v16;
    v21 = *((_DWORD *)this + 61);
    v29 = &v25;
    v31 = &v21;
    v33 = &v26;
    v35 = &v27;
    v37 = &v22;
    v22 = v18;
    v25 = this;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(v20, (unsigned int)&AudioCore_Pump_SetDeadline, v17, 6, (__int64)v28);
  }
}
