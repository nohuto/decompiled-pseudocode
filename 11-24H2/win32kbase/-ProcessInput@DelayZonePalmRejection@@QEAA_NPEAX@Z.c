/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C2D48 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1400C3A30 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D900C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x14020A744 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x14020F1F8 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x140211368 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x140211704 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140211894 (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x140211B48 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddd @ 0x140211DE4 (WPP_RECORDER_AND_TRACE_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x14021F900 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x14021F98C (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(
        DelayZonePalmRejection *this,
        const struct CPointerInputFrame *a2)
{
  BOOL v2; // esi
  LARGE_INTEGER v3; // rax
  const struct CPointerInputFrame *v4; // r12
  bool v5; // dl
  int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // edi
  DelayZonePalmRejection *v9; // r14
  char v10; // r15
  unsigned __int8 v11; // r13
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  bool v19; // si
  bool v20; // r12
  __int64 v21; // rbx
  int v22; // edi
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // esi
  bool v27; // r12
  __int64 v28; // rbx
  int v29; // edi
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rax
  int v34; // eax
  struct tagPOINT v35; // r9
  struct tagPOINT v36; // r8
  void *v37; // rdx
  bool v38; // dl
  bool v39; // r12
  int v40; // ebx
  __int64 v41; // rdi
  int v42; // esi
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  int v46; // esi
  bool v47; // r12
  __int64 v48; // rbx
  int v49; // edi
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  bool v53; // bl
  bool v54; // di
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  unsigned int v58; // ecx
  unsigned __int64 v59; // rsi
  bool v60; // bl
  bool v61; // di
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rax
  char v73; // di
  int v74; // ebx
  __int64 v75; // rax
  int v77; // [rsp+28h] [rbp-E0h]
  int v78; // [rsp+30h] [rbp-D8h]
  int v79; // [rsp+38h] [rbp-D0h]
  int v80; // [rsp+40h] [rbp-C8h]
  __int64 v81; // [rsp+48h] [rbp-C0h]
  __int64 v82; // [rsp+50h] [rbp-B8h]
  bool v83[4]; // [rsp+78h] [rbp-90h] BYREF
  bool v84; // [rsp+7Ch] [rbp-8Ch]
  char v85; // [rsp+7Dh] [rbp-8Bh]
  int v86; // [rsp+80h] [rbp-88h]
  bool v87; // [rsp+84h] [rbp-84h]
  BOOL v88; // [rsp+88h] [rbp-80h]
  BOOL v89; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v90; // [rsp+90h] [rbp-78h]
  const struct tagPOINTER_INFO *v91; // [rsp+98h] [rbp-70h]
  int v92; // [rsp+A0h] [rbp-68h]
  unsigned int v93; // [rsp+A4h] [rbp-64h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A8h] [rbp-60h]
  struct tagPOINTER_INFO *v95; // [rsp+B0h] [rbp-58h]
  const struct CPointerInputFrame *v96; // [rsp+B8h] [rbp-50h]
  __int128 v97; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v98; // [rsp+D8h] [rbp-30h]
  _OWORD v99[2]; // [rsp+E8h] [rbp-20h] BYREF

  v3.QuadPart = 0LL;
  v96 = a2;
  v95 = 0LL;
  v4 = a2;
  PerformanceCounter.QuadPart = 0LL;
  LOBYTE(v2) = 0;
  v83[3] = 0;
  v5 = 0;
  v88 = v2;
  v6 = 0;
  v83[0] = 0;
  v7 = *((_DWORD *)v4 + 12);
  v8 = 0;
  v85 = 0;
  v9 = this;
  v86 = 0;
  LOBYTE(this) = 0;
  v93 = v7;
  v83[1] = 0;
  v10 = 1;
  LOBYTE(v89) = 0;
  v11 = 1;
  v90 = 0;
  if ( v7 )
  {
    do
    {
      UserSessionState = W32GetUserSessionState(this);
      PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(UserSessionState + 3264), v4, v8);
      v91 = PointerInfo;
      v14 = PointerInfo;
      if ( PointerInfo )
      {
        v15 = *(_DWORD *)PointerInfo;
        if ( v15 == 3 )
        {
          v16 = *((_QWORD *)v9 + 4);
          if ( !v16 )
          {
            v16 = *((_QWORD *)v4 + 8);
            *((_QWORD *)v9 + 4) = v16;
          }
          if ( *((_QWORD *)v4 + 8) != v16 )
            goto LABEL_120;
          v83[0] = 1;
          *((LARGE_INTEGER *)v9 + 6) = KeQueryPerformanceCounter(0LL);
          v17 = *((_DWORD *)v14 + 3);
          if ( (v17 & 1) != 0 )
          {
            v18 = *((_DWORD *)v9 + 11);
            if ( !v18 )
            {
              v83[3] = 1;
              v95 = v14;
            }
            v92 = v18 + 1;
            *((_DWORD *)v9 + 11) = v18 + 1;
            v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v21 = *((_QWORD *)v9 + 4);
              v22 = *((_DWORD *)v14 + 1);
              v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v24) = v20;
              LOBYTE(v25) = v19;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v25,
                v24,
                *(_QWORD *)(v23 + 69400),
                4,
                v78,
                13,
                (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
                v22,
                v21,
                v92);
              v14 = v91;
              v6 = v86;
            }
            this = (DelayZonePalmRejection *)*((_QWORD *)v9 + 15);
            if ( this )
            {
              v97 = 0LL;
              v98 = 0LL;
              DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(this, 0xFFFFFFFFLL, &v97, v14, v6++);
              v86 = v6;
            }
          }
          else if ( (v17 & 2) == 0 )
          {
            v26 = *((_DWORD *)v9 + 11);
            if ( v26 )
              *((_DWORD *)v9 + 11) = --v26;
            this = WPP_GLOBAL_Control;
            v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v83[2] = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = *((_QWORD *)v9 + 4);
              v29 = *((_DWORD *)v14 + 1);
              v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v31) = v83[2];
              LOBYTE(v32) = v27;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v32,
                v31,
                *(_QWORD *)(v30 + 69400),
                4,
                v78,
                14,
                (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
                v29,
                v28,
                v26);
              v14 = v91;
              v6 = v86;
            }
          }
          if ( (*((_DWORD *)v14 + 3) & 0x8000) != 0 )
            v85 = 1;
        }
        else
        {
          if ( v15 != 2 )
            goto LABEL_120;
          v33 = *((_QWORD *)v9 + 2);
          if ( !v33 )
          {
            v33 = *((_QWORD *)v4 + 8);
            *((_QWORD *)v9 + 2) = v33;
          }
          if ( *((_QWORD *)v4 + 8) != v33 )
            goto LABEL_120;
          v83[1] = 1;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v34 = *((_DWORD *)v14 + 3);
          if ( (v34 & 0x10000) != 0 )
          {
            ++*((_DWORD *)v9 + 10);
            v35 = (struct tagPOINT)*((_QWORD *)v14 + 7);
            v36 = (struct tagPOINT)*((_QWORD *)v14 + 6);
            v37 = (void *)*((_QWORD *)v14 + 2);
            v83[2] = 0;
            v97 = 0LL;
            v98 = 0LL;
            v38 = DelayZonePalmRejection::HitTestRejectionRegion(
                    v9,
                    v37,
                    v36,
                    v35,
                    &v83[2],
                    (struct CDelayZonePanelTelemetryData *)&v97);
            v84 = v38;
            if ( !v89 )
              v89 = v38;
            if ( !v2 )
              v88 = !v38;
            v39 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v40 = *((_DWORD *)v9 + 10);
              v41 = *((_QWORD *)v9 + 2);
              v42 = *((_DWORD *)v91 + 1);
              v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v44) = v39;
              LOBYTE(v45) = v87;
              WPP_RECORDER_AND_TRACE_SF_dqddd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v44,
                v45,
                *(_QWORD *)(v43 + 69400),
                v77,
                v78,
                v79,
                v80,
                v42,
                v41,
                v40,
                v89,
                v88);
              v38 = v84;
              v14 = v91;
              v6 = v86;
            }
            this = (DelayZonePalmRejection *)*((_QWORD *)v9 + 15);
            if ( this && v38 )
            {
              v99[0] = v97;
              v99[1] = v98;
              DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(this, v83[2], v99, v14, v6++);
              v86 = v6;
            }
          }
          else if ( (v34 & 0x40000) != 0 )
          {
            v46 = *((_DWORD *)v9 + 10);
            if ( v46 )
              *((_DWORD *)v9 + 10) = --v46;
            this = WPP_GLOBAL_Control;
            v47 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v48 = *((_QWORD *)v9 + 2);
              v49 = *((_DWORD *)v14 + 1);
              v50 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v51) = v84;
              LOBYTE(v52) = v47;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v52,
                v51,
                *(_QWORD *)(v50 + 69400),
                4,
                v78,
                16,
                (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
                v49,
                v48,
                v46);
              v6 = v86;
            }
          }
        }
        v4 = v96;
        LOBYTE(v2) = v88;
      }
      v8 = v90 + 1;
      v90 = v8;
    }
    while ( v8 < v93 );
    v3 = PerformanceCounter;
    LOBYTE(this) = v83[1];
    v5 = v83[0];
  }
  if ( *(_BYTE *)v9 )
  {
    if ( (_BYTE)this )
    {
      v58 = *((_DWORD *)v9 + 27);
      if ( v58 )
      {
        v59 = (unsigned __int64)(1000 * (v3.QuadPart - *((_QWORD *)v9 + 6))) / gliQpcFreq.QuadPart;
        if ( (unsigned int)v59 > v58 )
        {
          *(_BYTE *)v9 = 0;
          v60 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v60 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v62 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v63) = v61;
            LOBYTE(v64) = v60;
            WPP_RECORDER_AND_TRACE_SF_L(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v64,
              v63,
              *(_QWORD *)(v62 + 69400),
              4,
              v78,
              18,
              (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
              v59);
          }
        }
      }
    }
  }
  else if ( v5 )
  {
    *(_BYTE *)v9 = 1;
    v53 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69400),
        4,
        4,
        17,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
    }
  }
  v65 = *((unsigned int *)v9 + 1);
  if ( !(_DWORD)v65 )
  {
    if ( *(_BYTE *)v9 )
    {
      if ( v83[0] && v83[3] )
      {
        v68 = *((_QWORD *)v9 + 15);
        v69 = 2LL;
        *((_DWORD *)v9 + 1) = 2;
        if ( !v68 )
          goto LABEL_120;
        goto LABEL_113;
      }
      if ( v83[1] && v89 )
      {
        v72 = W32GetUserSessionState(v65);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v72 + 16840), 0, *((_DWORD *)v9 + 25));
        *((_BYTE *)v9 + 8) = 1;
        *((_QWORD *)v9 + 7) = v4;
        *((_QWORD *)v9 + 8) = v4;
        DelayZonePalmRejection::LockTouchDeviceHandle(v9);
        v68 = *((_QWORD *)v9 + 15);
        v11 = 0;
        *((_DWORD *)v9 + 1) = 1;
        if ( !v68 )
          goto LABEL_120;
        v71 = 0LL;
        v69 = 1LL;
        goto LABEL_114;
      }
    }
    *((_DWORD *)v9 + 1) = 2;
    goto LABEL_120;
  }
  v66 = (unsigned int)(v65 - 1);
  if ( (_DWORD)v66 )
  {
    if ( (_DWORD)v66 == 1 && !*((_DWORD *)v9 + 11) && !*((_DWORD *)v9 + 10) && !v85 )
    {
      *((_QWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_DWORD *)v9 + 1) = 0;
    }
    goto LABEL_120;
  }
  if ( v83[0] && v83[3] )
  {
    if ( *((_BYTE *)v9 + 8) == 1 )
    {
      v67 = W32GetUserSessionState(v66);
      CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v67 + 16840), 1, 0);
      *((_BYTE *)v9 + 8) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts(
      v9,
      (const struct DEVICE_OUTPUT_CONFIG *)(*((_QWORD *)v4 + 32) + 156LL),
      v95);
    DelayZonePalmRejection::DispatchBufferedInputFrames(v9);
    v68 = *((_QWORD *)v9 + 15);
    if ( v68 )
    {
      v69 = *((unsigned int *)v9 + 1);
LABEL_113:
      v71 = 1LL;
      goto LABEL_114;
    }
  }
  else if ( v83[1] )
  {
    if ( v88 )
    {
      if ( *((_BYTE *)v9 + 8) == 1 )
      {
        v70 = W32GetUserSessionState(v66);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v70 + 16840), 1, 0);
        *((_BYTE *)v9 + 8) = 0;
      }
      DelayZonePalmRejection::DispatchBufferedInputFrames(v9);
    }
    else
    {
      *((_QWORD *)v9 + 8) = v4;
      v11 = 0;
    }
    v68 = *((_QWORD *)v9 + 15);
    if ( v68 )
    {
      v69 = *((unsigned int *)v9 + 1);
      v71 = 0LL;
LABEL_114:
      DelayZoneTelemetry::UpdateInputPalmRejectStateInfo(v68, v69, v71);
    }
  }
LABEL_120:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v10 = 0;
  }
  v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v74 = *((_DWORD *)v9 + 1);
    v75 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LODWORD(v82) = v11;
    LODWORD(v81) = v74;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v73,
      *(_QWORD *)(v75 + 69400),
      4u,
      4u,
      0x13u,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      v81,
      v82);
  }
  return v11;
}
