/*
 * XREFs of ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14001DDA4 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001DE10 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14001E6A8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ @ 0x14001E8D0 (-UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14001E984 (McTemplateU0pi_EtwEventWriteTransfer.c)
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

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioPump::OutputPumpWorkRoutine(CAudioPump *this)
{
  int v2; // ecx
  void *v3; // rdx
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, HANDLE, char *); // rbx
  HANDLE CurrentThread; // rax
  bool v7; // r12
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r15d
  DWORD LastError; // ebx
  signed __int32 v12; // eax
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, __int64); // rax
  void *v25; // rdx
  int v26; // r8d
  unsigned __int64 v27; // rcx
  double v28; // xmm0_8
  double v29; // xmm0_8
  int v30; // ecx
  double v31; // xmm1_8
  double v32; // xmm0_8
  __int64 v33; // rbx
  int v34; // ecx
  int v35; // r8d
  int v36; // ecx
  int v37; // r8d
  int v38; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  CAudioPump *v44; // rcx
  void *v45; // rdx
  wil::details *v46; // rcx
  __int64 v47; // rcx
  void *v48; // rax
  wil::details *v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  const char *v52; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  int v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+48h] [rbp-B8h] BYREF
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-88h] BYREF
  char *v63; // [rsp+80h] [rbp-80h]
  CAudioPump *v64; // [rsp+88h] [rbp-78h] BYREF
  CAudioPump *v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  CAudioPump *v68; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  CAudioPump *v70; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-40h] BYREF
  CAudioPump *v72; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-28h] BYREF
  CAudioPump *v75; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v76[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v77; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  __int128 v80; // [rsp+120h] [rbp+20h]
  __int128 v81; // [rsp+130h] [rbp+30h] BYREF
  char v82; // [rsp+140h] [rbp+40h] BYREF
  CAudioPump **v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  int *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  __int64 *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  int *v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  char v91; // [rsp+190h] [rbp+90h] BYREF
  CAudioPump **v92; // [rsp+1A0h] [rbp+A0h]
  __int64 v93; // [rsp+1A8h] [rbp+A8h]
  int *v94; // [rsp+1B0h] [rbp+B0h]
  __int64 v95; // [rsp+1B8h] [rbp+B8h]
  __int64 *v96; // [rsp+1C0h] [rbp+C0h]
  __int64 v97; // [rsp+1C8h] [rbp+C8h]
  int *v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  char v100[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  CAudioPump **v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  __int64 *v103; // [rsp+200h] [rbp+100h]
  __int64 v104; // [rsp+208h] [rbp+108h]
  __int64 *v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h]
  char v107[16]; // [rsp+220h] [rbp+120h] BYREF
  CAudioPump **v108; // [rsp+230h] [rbp+130h]
  __int64 v109; // [rsp+238h] [rbp+138h]
  __int64 *v110; // [rsp+240h] [rbp+140h]
  __int64 v111; // [rsp+248h] [rbp+148h]
  __int64 *v112; // [rsp+250h] [rbp+150h]
  __int64 v113; // [rsp+258h] [rbp+158h]
  char v114[16]; // [rsp+260h] [rbp+160h] BYREF
  _QWORD *v115; // [rsp+270h] [rbp+170h]
  __int64 v116; // [rsp+278h] [rbp+178h]
  int *v117; // [rsp+280h] [rbp+180h]
  __int64 v118; // [rsp+288h] [rbp+188h]
  char v119[16]; // [rsp+290h] [rbp+190h] BYREF
  CAudioPump **v120; // [rsp+2A0h] [rbp+1A0h]
  __int64 v121; // [rsp+2A8h] [rbp+1A8h]
  char v122[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  CAudioPump **v123; // [rsp+2C0h] [rbp+1C0h]
  __int64 v124; // [rsp+2C8h] [rbp+1C8h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v80 = *((_OWORD *)this + 294);
  v81 = v80;
  EtwEventActivityIdControl(4LL, &v81);
  v53 = 0LL;
  v61 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v2, (int)&AudioCore_Pump_Process_Start, (__int64)this, 3);
  *((_DWORD *)this + 85) = 40;
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
  v60 = v7;
  v8 = *((_QWORD *)this + 584);
  v54 = v8;
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v8, (int)&AudioCore_Pump_Process_Stop, (__int64)this);
  v10 = CAudioPump::Yield(this, &v54);
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v9, (int)&AudioCore_Pump_Process_Start, (__int64)this, 4);
  if ( !*((_BYTE *)this + 76) )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)this + 4680) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
        v63 = (char *)this + 168;
        if ( *((_BYTE *)this + 76) )
        {
          if ( this != (CAudioPump *)-168LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
          v76[1] = (char *)this + 128;
          if ( this != (CAudioPump *)-168LL )
          {
            LastError = GetLastError();
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
            SetLastError(LastError);
          }
          v63 = 0LL;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              *((_DWORD *)this + 85) = 40;
          }
          else
          {
            v40 = *((_DWORD *)this + 85);
            if ( v40 && (v41 = v40 - 1, (*((_DWORD *)this + 85) = v41) == 0)
              || CAudioPump::InputPumpWorkRoutine == *((__int64 (__fastcall **)(CAudioPump *))this + 27)
              || *((_BYTE *)this + 4680) )
            {
              *((_DWORD *)this + 85) = 40;
              v42 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 40LL))(*((_QWORD *)this + 26));
              v43 = 0;
              if ( v42 != -2147418113 )
                v43 = v42;
              wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0x2D1,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                (const char *)(unsigned int)v43,
                (__int64)"SetPinInactive failed",
                v52);
              if ( v43 >= 0 )
              {
                _InterlockedExchange((volatile __int32 *)this + 84, 0);
                CAudioPump::CancelTimer(v44, *((void **)this + 37));
                CAudioPump::CancelDeadline(this);
                v50 = *((_QWORD *)this + 41);
                if ( v50 )
                {
                  v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 24LL))(v50);
                  if ( v51 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x2E1,
                      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                      (const char *)(unsigned int)v51);
                }
              }
              else
              {
                CAudioPump::CancelTimer(v44, *((void **)this + 37));
                CAudioPump::CancelDeadline(this);
              }
              v46 = (wil::details *)*((_QWORD *)this + 54);
              if ( v46 )
                wil::details::SetEvent(v46, v45);
            }
          }
          if ( this != (CAudioPump *)-128LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
        }
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
      switch ( v10 )
      {
        case 2:
          if ( *((_BYTE *)this + 4680) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 1LL);
            goto LABEL_48;
          }
          break;
        case 32:
          if ( *((_BYTE *)this + 4680) )
          {
            CAudioPump::UpdatePresentationTimestamp(this);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 0LL);
LABEL_98:
            v49 = (wil::details *)*((_QWORD *)this + 54);
            if ( v49 )
              wil::details::SetEvent(v49, v25);
            goto LABEL_48;
          }
          break;
        case 16:
          if ( *((_BYTE *)this + 4680) )
          {
            CAudioPump::UpdatePresentationTimestamp(this);
            CAudioPump::CheckForPause(this);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), 0LL);
            goto LABEL_48;
          }
          break;
        default:
          if ( *((_BYTE *)this + 4680) )
            goto LABEL_26;
          break;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
        goto LABEL_46;
LABEL_26:
      if ( (byte_1400C4541 & 8) != 0 )
      {
        v64 = this;
        v120 = &v64;
        v121 = 8LL;
        McGenEventWrite_EtwEventWriteTransfer(
          v13,
          (unsigned int)&AudioCore_Pump_GetCurrentPaddingStart,
          v14,
          2,
          (__int64)v119);
      }
      (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(**((_QWORD **)this + 26) + 24LL))(
        *((_QWORD *)this + 26),
        &v53,
        &v77);
      if ( HIDWORD(v79) )
      {
        v16 = *((_QWORD *)this + 13);
        if ( *((_QWORD *)this + 39) )
        {
          if ( v53 )
          {
            v18 = 0LL;
            if ( v16 + *((_QWORD *)this + 28) - v53 > 0 )
              v18 = *((_QWORD *)this + 13);
          }
          else
          {
            v18 = 2 * v16;
          }
        }
        else
        {
          v18 = v16 + *((_QWORD *)this + 28) - v53;
          v15 = v18 % v16;
          if ( v18 % v16 )
          {
            v16 -= v15;
            v18 += v16;
          }
        }
      }
      else
      {
        v53 = 0LL;
        v18 = 0LL;
      }
      if ( (byte_1400C4541 & 8) != 0 )
      {
        v67 = v18;
        v66 = v53;
        v65 = this;
        v101 = &v65;
        v102 = 8LL;
        v103 = &v66;
        v104 = 8LL;
        v105 = &v67;
        v106 = 8LL;
        McGenEventWrite_EtwEventWriteTransfer(
          v16,
          (unsigned int)&AudioCore_Pump_GetCurrentPaddingStop,
          v17,
          4,
          (__int64)v100);
      }
      if ( !v18 )
        goto LABEL_67;
      *((_BYTE *)this + 74) = 1;
      v16 = *((_QWORD *)this + 46);
      if ( v16 && v16 < 10000 )
      {
        if ( (byte_1400C4541 & 8) != 0 )
        {
          v56 = *((unsigned __int8 *)this + 75);
          v69 = v16;
          v55 = *((_DWORD *)this + 61);
          v68 = this;
          v83 = &v68;
          v84 = 8LL;
          v85 = &v55;
          v86 = 4LL;
          v87 = &v69;
          v88 = 8LL;
          v89 = &v56;
          v90 = 4LL;
          v19 = &v82;
          v20 = &AudioCore_Pump_MMBufferingSkippedStart;
LABEL_40:
          McGenEventWrite_EtwEventWriteTransfer(v16, (_DWORD)v20, v17, 5, (__int64)v19);
        }
      }
      else if ( !*((_BYTE *)this + 75) )
      {
        RtwqSetLongRunning(*((_DWORD *)this + 60), 1);
        *((_BYTE *)this + 75) = 1;
        if ( (byte_1400C4541 & 8) != 0 )
        {
          v58 = 1;
          v71 = *((_QWORD *)this + 46);
          v57 = *((_DWORD *)this + 61);
          v70 = this;
          v92 = &v70;
          v93 = 8LL;
          v94 = &v57;
          v95 = 4LL;
          v96 = &v71;
          v97 = 8LL;
          v98 = &v58;
          v99 = 4LL;
          v19 = &v91;
          v20 = &AudioCore_Pump_MMBufferingStart;
          goto LABEL_40;
        }
      }
      if ( v18 > 0 && (int)(*((float *)this + 28) * (double)(int)v18 / 10000000.0 + 0.5) )
      {
        do
        {
          v21 = *((_QWORD *)this + 13);
          if ( v18 <= v21 )
            v21 = v18;
          v61 = v21;
          (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(**((_QWORD **)this + 10) + 32LL))(
            *((_QWORD *)this + 10),
            &v61,
            &v77);
          v22 = (unsigned int)(int)(*((float *)this + 28) * (double)(int)v61 / 10000000.0 + 0.5);
          *(_QWORD *)&v78 = v22 + v78;
          *((_QWORD *)&v77 + 1) += v22;
          v18 -= v61;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 32LL))(*((_QWORD *)this + 26));
        }
        while ( (int)(*((float *)this + 28) * (double)(int)v18 / 10000000.0 + 0.5) );
        goto LABEL_46;
      }
LABEL_67:
      if ( (byte_1400C4541 & 4) != 0 )
        McTemplateU0pi_EtwEventWriteTransfer(v16, v15, this, v18);
      if ( !*((_QWORD *)this + 39) && v53 > 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 32LL))(*((_QWORD *)this + 26));
LABEL_46:
      v23 = *((_QWORD *)this + 10);
      v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL);
      if ( v10 == 4 )
      {
        v24(v23, 0LL);
        v47 = *((_QWORD *)this + 53);
        if ( v47 )
        {
          v48 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 24LL))(v47);
          SetEvent(v48);
        }
        goto LABEL_48;
      }
      v24(v23, 1LL);
      if ( v10 == 32 )
        goto LABEL_98;
LABEL_48:
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v27 = PerformanceCount.QuadPart - v54;
      if ( PerformanceCount.QuadPart - v54 < 0 )
        v28 = (double)(int)(v27 & 1 | (v27 >> 1)) + (double)(int)(v27 & 1 | (v27 >> 1));
      else
        v28 = (double)(int)v27;
      v29 = v28 * 10000000.0;
      v30 = g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      {
        v30 = g_u64QPCFrequency & 1;
        v31 = (double)(int)(v30 | (g_u64QPCFrequency >> 1)) + (double)(int)(v30 | (g_u64QPCFrequency >> 1));
      }
      else
      {
        v31 = (double)(int)g_u64QPCFrequency;
      }
      v32 = v29 / v31;
      v33 = (unsigned int)(int)v32;
      *((_QWORD *)this + 45) = v33;
      *((_QWORD *)this + 49) += v33;
      ++*((_DWORD *)this + 100);
      if ( (byte_1400C4541 & 8) != 0 )
      {
        v74 = *((_QWORD *)this + 44);
        v73 = (unsigned int)(int)v32;
        v72 = this;
        v108 = &v72;
        v109 = 8LL;
        v110 = &v73;
        v111 = 8LL;
        v112 = &v74;
        v113 = 8LL;
        McGenEventWrite_EtwEventWriteTransfer(
          v30,
          (unsigned int)&AudioCore_Pump_ProcPassDuration,
          v26,
          4,
          (__int64)v107);
      }
      if ( v33 > *((_QWORD *)this + 44) && _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
        *((_QWORD *)this + 48) = _InterlockedIncrement64((volatile signed __int64 *)this + 48);
      else
        _InterlockedExchange64((volatile __int64 *)this + 48, 0LL);
      CAudioPump::SignalWorkCompleted(this);
      if ( (byte_1400C4541 & 8) != 0 )
      {
        v75 = this;
        v123 = &v75;
        v124 = 8LL;
        McGenEventWrite_EtwEventWriteTransfer(v34, (unsigned int)&AudioCore_Pump_Process_Stop, v35, 2, (__int64)v122);
      }
      v10 = CAudioPump::Yield(this, &v54);
      v54 = *((_QWORD *)this + 584);
      if ( (byte_1400C4541 & 8) != 0 )
      {
        v59 = 5;
        v76[0] = this;
        v115 = v76;
        v116 = 8LL;
        v117 = &v59;
        v118 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(v36, (unsigned int)&AudioCore_Pump_Process_Start, v37, 3, (__int64)v114);
      }
      if ( *((_BYTE *)this + 76) )
      {
        v7 = v60;
        break;
      }
    }
  }
  CAudioPump::CancelDeadline(this);
  ResetEngineThreadPriority((void **)this + 29, *((_DWORD *)this + 61));
  *((_DWORD *)this + 61) = 0;
  if ( v7 )
    AERTUnlockCurrentThread();
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v38, (int)&AudioCore_Pump_Process_Stop, (__int64)this);
  EtwEventActivityIdControl(4LL, &v81);
  return 0LL;
}
