/*
 * XREFs of ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001DE10 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14001E984 (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     ?SignalWorkStarted@CAudioPump@@AEAAXXZ @ 0x14001E9FC (-SignalWorkStarted@CAudioPump@@AEAAXXZ.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EB60 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14001FD60 (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x14001FDD0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x1400209C0 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?SignalWorkCompleted@CAudioPump@@AEAAXXZ @ 0x140020F80 (-SignalWorkCompleted@CAudioPump@@AEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140021494 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140021538 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x140021644 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x1400487E8 (-AERTUnlockCurrentThread@@YAJXZ.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAXK@Z @ 0x140056340 (-ResetEngineThreadPriority@@YAJPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::InputPumpWorkRoutine(CAudioPump *this)
{
  __int64 v2; // rcx
  void *v3; // rdx
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, HANDLE, char *); // rbx
  HANDLE CurrentThread; // rax
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  bool v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  unsigned __int64 v20; // rcx
  double v21; // xmm0_8
  double v22; // xmm0_8
  int v23; // ecx
  double v24; // xmm1_8
  double v25; // xmm0_8
  __int64 v26; // rbx
  int v27; // ecx
  int v28; // r8d
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rcx
  bool v33; // cl
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  CAudioPump *v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  CAudioPump *v42; // [rsp+78h] [rbp-88h] BYREF
  CAudioPump *v43; // [rsp+80h] [rbp-80h] BYREF
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int128 v47; // [rsp+B0h] [rbp-50h]
  __int128 v48; // [rsp+C0h] [rbp-40h] BYREF
  char v49[16]; // [rsp+D0h] [rbp-30h] BYREF
  CAudioPump **v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int64 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int64 *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  char v56[16]; // [rsp+110h] [rbp+10h] BYREF
  CAudioPump **v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  int *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  char v61[16]; // [rsp+140h] [rbp+40h] BYREF
  CAudioPump **v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]

  v47 = *((_OWORD *)this + 294);
  v48 = v47;
  EtwEventActivityIdControl(4LL, &v48);
  v34 = 0LL;
  v37 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v2, &AudioCore_Pump_Process_Start, this, 0LL);
  CAudioPump::AttachToMMCSS(this);
  v4 = *((_QWORD *)this + 586);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(__int64, HANDLE, char *))(*(_QWORD *)v4 + 40LL);
    CurrentThread = GetCurrentThread();
    v5(v4, CurrentThread, (char *)this + 4696);
  }
  wil::details::SetEvent(*((wil::details **)this + 33), v3);
  v7 = (int)AERTLockCurrentThread() >= 0;
  v8 = *((_QWORD *)this + 584);
  v35 = v8;
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v8, &AudioCore_Pump_Process_Stop, this);
  CAudioPump::Yield(this, &v35);
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v9, &AudioCore_Pump_Process_Start, this, 1LL);
  while ( !*((_BYTE *)this + 76) )
  {
    v10 = 0LL;
    v11 = *((_BYTE *)this + 4680) == 0;
    CAudioPump::CheckForPause(this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(**((_QWORD **)this + 26) + 24LL))(
        *((_QWORD *)this + 26),
        &v34,
        &v44);
      v15 = v34;
      if ( v34 <= 0 )
      {
        if ( (byte_1400C4541 & 4) != 0 )
        {
          McTemplateU0pi_EtwEventWriteTransfer(v13, v12, this, v34);
          v15 = v34;
        }
      }
      else
      {
        CAudioPump::SignalWorkStarted(this, v12, v14);
        v15 = v34;
        v10 = v34;
      }
      if ( v15 > 0 )
      {
        while ( !*((_BYTE *)this + 76) )
        {
          v11 = 1;
          v16 = v34;
          if ( v34 > 0 )
          {
            while ( !*((_BYTE *)this + 76) )
            {
              v17 = v34;
              if ( v34 > *((_QWORD *)this + 13) )
                v17 = *((_QWORD *)this + 13);
              v37 = v17;
              (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(**((_QWORD **)this + 10) + 32LL))(
                *((_QWORD *)this + 10),
                &v37,
                &v44);
              v18 = (unsigned int)(int)(*((float *)this + 28) * (double)(int)v37 / 10000000.0 + 0.5);
              *((_QWORD *)&v44 + 1) += v18;
              *(_QWORD *)&v45 = v45 - v18;
              v16 = v34 - v37;
              v34 = v16;
              if ( v16 < *((_QWORD *)this + 13) / 2LL )
              {
                v16 = 0LL;
                v34 = 0LL;
                goto LABEL_23;
              }
              if ( v16 <= 0 )
                goto LABEL_23;
            }
            v16 = v34;
          }
LABEL_23:
          if ( !*((_QWORD *)this + 39) )
          {
            (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(**((_QWORD **)this + 26) + 24LL))(
              *((_QWORD *)this + 26),
              &v34,
              &v44);
            v16 = v34;
            if ( v34 < *((_QWORD *)this + 13) / 2LL )
            {
              v34 = 0LL;
              break;
            }
          }
          if ( v16 <= 0 )
            break;
        }
      }
    }
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v20 = PerformanceCount.QuadPart - v35;
    if ( PerformanceCount.QuadPart - v35 < 0 )
      v21 = (double)(int)(v20 & 1 | (v20 >> 1)) + (double)(int)(v20 & 1 | (v20 >> 1));
    else
      v21 = (double)(int)v20;
    v22 = v21 * 10000000.0;
    v23 = g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    {
      v23 = g_u64QPCFrequency & 1;
      v24 = (double)(int)(v23 | (g_u64QPCFrequency >> 1)) + (double)(int)(v23 | (g_u64QPCFrequency >> 1));
    }
    else
    {
      v24 = (double)(int)g_u64QPCFrequency;
    }
    v25 = v22 / v24;
    v26 = (unsigned int)(int)v25;
    *((_QWORD *)this + 45) = v26;
    *((_QWORD *)this + 49) += v26;
    ++*((_DWORD *)this + 100);
    if ( (byte_1400C4541 & 8) != 0 )
    {
      v41 = *((_QWORD *)this + 44);
      v40 = (unsigned int)(int)v25;
      v39 = this;
      v50 = &v39;
      v51 = 8LL;
      v52 = &v40;
      v53 = 8LL;
      v54 = &v41;
      v55 = 8LL;
      McGenEventWrite_EtwEventWriteTransfer(v23, (unsigned int)&AudioCore_Pump_ProcPassDuration, v19, 4, (__int64)v49);
    }
    if ( v26 > *((_QWORD *)this + 44) && _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
      *((_QWORD *)this + 48) = _InterlockedIncrement64((volatile signed __int64 *)this + 48);
    else
      _InterlockedExchange64((volatile __int64 *)this + 48, 0LL);
    if ( v10 )
      CAudioPump::SignalWorkCompleted(this);
    if ( *((_BYTE *)this + 4680) )
    {
      if ( *((_BYTE *)this + 4760) )
      {
        _InterlockedExchange((volatile __int32 *)this + 1189, 2);
        WakeByAddressAll((char *)this + 4756);
        *((_BYTE *)this + 4760) = 0;
      }
      v33 = 0;
      if ( *((_DWORD *)this + 1189) == 1 )
        v33 = v11;
      *((_BYTE *)this + 4681) = v33;
    }
    (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), v11);
    if ( (byte_1400C4541 & 8) != 0 )
    {
      v42 = this;
      v62 = &v42;
      v63 = 8LL;
      McGenEventWrite_EtwEventWriteTransfer(v27, (unsigned int)&AudioCore_Pump_Process_Stop, v28, 2, (__int64)v61);
    }
    CAudioPump::Yield(this, &v35);
    v35 = *((_QWORD *)this + 584);
    if ( (byte_1400C4541 & 8) != 0 )
    {
      v36 = 2;
      v43 = this;
      v57 = &v43;
      v58 = 8LL;
      v59 = &v36;
      v60 = 4LL;
      McGenEventWrite_EtwEventWriteTransfer(v29, (unsigned int)&AudioCore_Pump_Process_Start, v30, 3, (__int64)v56);
    }
  }
  CAudioPump::CancelDeadline(this);
  ResetEngineThreadPriority((void **)this + 29, *((_DWORD *)this + 61));
  *((_DWORD *)this + 61) = 0;
  if ( v7 )
    AERTUnlockCurrentThread();
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v31, &AudioCore_Pump_Process_Stop, this);
  EtwEventActivityIdControl(4LL, &v48);
  return 0LL;
}
