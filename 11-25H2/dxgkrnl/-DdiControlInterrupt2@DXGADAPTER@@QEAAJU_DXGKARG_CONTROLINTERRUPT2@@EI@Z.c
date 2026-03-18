/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14002FAE8
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x14006C1E0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x140387360 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x14038F090 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x140037024 (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1400371D4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x14004DA60 (McTemplateK0qqx_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLINTERRUPT2 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  char v5; // r12
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v9; // rbx
  int v10; // eax
  __int64 HighPart; // r13
  int v12; // eax
  __int64 i; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // r15d
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rcx
  LARGE_INTEGER v20; // r8
  unsigned __int64 v21; // r10
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int128 v25; // rtt
  unsigned __int64 v26; // r9
  unsigned __int128 v27; // rax
  unsigned __int64 v28; // r10
  unsigned __int128 v29; // rtt
  unsigned __int64 v30; // r9
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // r10
  unsigned __int128 v33; // rtt
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGTHREAD *v38; // rbx
  struct DXGTHREAD *v39; // rax
  int v40; // r12d
  __int64 v41; // r15
  KIRQL v42; // al
  __int64 v43; // rcx
  signed __int64 v44; // rdi
  int v45; // edx
  int v46; // ecx
  __int64 v47; // r8
  struct DXGTHREAD *v48; // rbx
  struct DXGTHREAD *v49; // rax
  int v50; // r12d
  struct DXGGLOBAL *Global; // rdi
  int v52; // ecx
  struct DXGPROCESS *v53; // rax
  int v54; // ecx
  DXGGLOBAL *v55; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v57; // rcx
  KIRQL v58; // al
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // r8d
  unsigned int j; // edx
  __int64 v68; // rcx
  unsigned int k; // edx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // r8d
  signed __int64 v76; // rcx
  unsigned int v77; // r9d
  unsigned int v78; // eax
  unsigned int v79; // eax
  LARGE_INTEGER v80; // rbx
  unsigned int v81; // r12d
  struct _KDPC *v82; // r8
  struct _KTIMER *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // r8
  KIRQL CurrentIrql; // [rsp+60h] [rbp-A0h]
  KIRQL v88; // [rsp+60h] [rbp-A0h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  int v91; // [rsp+70h] [rbp-90h] BYREF
  struct DXGTHREAD *v92; // [rsp+78h] [rbp-88h]
  char v93; // [rsp+80h] [rbp-80h]
  __int64 v94; // [rsp+88h] [rbp-78h]
  __int64 v95; // [rsp+90h] [rbp-70h]
  __int64 v96; // [rsp+98h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v98[4]; // [rsp+B8h] [rbp-48h] BYREF
  char v99; // [rsp+C8h] [rbp-38h]
  struct _KAPC_STATE v100; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v101[8]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF

  v91 = -1;
  v4 = a4;
  v92 = 0LL;
  v5 = a3;
  PerformanceFrequency = (union _LARGE_INTEGER)a2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v93 = 1;
    v91 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5054);
  }
  else
  {
    v93 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v92 = Current;
    v9 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 203;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 203LL, 0LL, 0LL, 0LL, 0LL);
      }
      v10 = *((_DWORD *)v9 + 13);
      if ( !v10 )
        *((_DWORD *)v9 + 14) = 5054;
      *((_DWORD *)v9 + 13) = v10 + 1;
    }
  }
  HighPart = PerformanceFrequency.HighPart;
  v12 = *((_DWORD *)this + 744) & 0x10;
  if ( !v12 || v4 != -3 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v14 = v12 != 0 ? v4 : 0;
    v15 = *((_QWORD *)this + 551);
    v16 = 112LL * v14;
    v17 = *(_DWORD *)(*((_QWORD *)this + 538) + 4LL * v14);
    v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v20 = v18;
    if ( !(_DWORD)HighPart )
    {
      v19.LowPart = v17 - 1;
      if ( (unsigned int)(v17 - 1) <= 1 )
      {
        v21 = v18.QuadPart - *(_QWORD *)(v16 + v15);
        v22 = v21 * (unsigned __int128)0x3E8uLL;
        v94 = *((_QWORD *)&v22 + 1);
        if ( is_mul_ok(v21, 0x3E8uLL) )
        {
          v25 = v22;
          v23 = v22 % (unsigned __int64)PerformanceFrequency.QuadPart;
          v24 = v25 / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v23 = v21 % PerformanceFrequency.QuadPart;
          v19.QuadPart = 1000 * (v21 / PerformanceFrequency.QuadPart);
          v24 = v19.QuadPart + 1000 * (v21 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        }
        if ( v17 == 1 )
          *(_QWORD *)(v16 + v15 + 24) += v24;
        else
          *(_QWORD *)(v16 + v15 + 32) += v24;
        goto LABEL_37;
      }
LABEL_39:
      v4 = a4;
      goto LABEL_40;
    }
    if ( (_DWORD)HighPart == 1 )
    {
      if ( v17 )
        goto LABEL_39;
      v26 = v18.QuadPart - *(_QWORD *)(v16 + v15);
      v27 = v26 * (unsigned __int128)0x3E8uLL;
      v95 = *((_QWORD *)&v27 + 1);
      if ( is_mul_ok(v26, 0x3E8uLL) )
      {
        v29 = v27;
        v23 = v27 % (unsigned __int64)PerformanceFrequency.QuadPart;
        v28 = v29 / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v23 = v26 % PerformanceFrequency.QuadPart;
        v19.QuadPart = 1000 * (v26 / PerformanceFrequency.QuadPart);
        v28 = v19.QuadPart + 1000 * (v26 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      }
      *(_QWORD *)(v16 + v15 + 16) += v28;
    }
    else
    {
      if ( (_DWORD)HighPart != 2 || v17 != 1 )
        goto LABEL_39;
      v30 = v18.QuadPart - *(_QWORD *)(v16 + v15);
      v31 = v30 * (unsigned __int128)0x3E8uLL;
      v96 = *((_QWORD *)&v31 + 1);
      if ( is_mul_ok(v30, 0x3E8uLL) )
      {
        v33 = v31;
        v23 = v31 % (unsigned __int64)PerformanceFrequency.QuadPart;
        v32 = v33 / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v23 = v30 % PerformanceFrequency.QuadPart;
        v19.QuadPart = 1000 * (v30 / PerformanceFrequency.QuadPart);
        v32 = v19.QuadPart + 1000 * (v30 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      }
      *(_QWORD *)(v16 + v15 + 24) += v32;
    }
LABEL_37:
    *(LARGE_INTEGER *)(v16 + v15) = v20;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v19.LowPart,
        v23,
        v20.LowPart,
        HighPart,
        *(_QWORD *)(v16 + v15 + 16),
        *(_QWORD *)(v16 + v15 + 24),
        *(_QWORD *)(v16 + v15 + 32));
    goto LABEL_39;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 464); i = (unsigned int)(i + 1) )
    VSYNC_TIME_STATS::VSyncStateChange(
      (VSYNC_TIME_STATS *)(*((_QWORD *)this + 551) + 112LL * (unsigned int)i),
      *(enum _DXGK_CRTC_VSYNC_STATE *)(*((_QWORD *)this + 538) + 4 * i),
      (enum _DXGK_CRTC_VSYNC_STATE)PerformanceFrequency.HighPart);
LABEL_40:
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v5 )
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 4352));
  v34 = *((_QWORD *)this + 391);
  if ( !v34
    || (v35 = *(_QWORD *)(v34 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v34 + 736) + 8LL) + 72LL))(v35)
    && *((struct _KTHREAD **)this + 392) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 256)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventBlockThread, v37, 73);
      KeWaitForSingleObject((char *)this + 256, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 35), 1u);
  }
  if ( *((int *)this + 751) >= 2700 && *((_QWORD *)this + 175) )
  {
    v98[0] = a2.InterruptType;
    v98[1] = HighPart;
    v98[2] = v4;
    _InterlockedIncrement((volatile signed __int32 *)this + 1201);
    v38 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && (v39 = DXGTHREAD::GetCurrent(), (v38 = v39) != 0LL) )
      v40 = *((_DWORD *)v39 + 12);
    else
      v40 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v101, this);
    v41 = (*((int (__fastcall **)(_QWORD, _DWORD *))this + 175))(*((_QWORD *)this + 36), v98);
    if ( v101[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v42 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v42);
      WdLogGlobalForLineNumber = 1880;
    }
    if ( v38 )
    {
      v43 = *((int *)v38 + 12);
      if ( (_DWORD)v43 != v40 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v43, v40, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1201);
    LOBYTE(v44) = 0;
    if ( (unsigned int)(v41 + 0x3FFFFFFF) > 1 && (_DWORD)v41 )
    {
      WdLogSingleEntry1(2LL, v41);
      WdLogGlobalForLineNumber = 1882;
LABEL_96:
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v46,
          v45,
          v47,
          0LL,
          0,
          -1,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v41,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1201);
    v48 = 0LL;
    v88 = KeGetCurrentIrql();
    if ( v88 < 2u && (v49 = DXGTHREAD::GetCurrent(), (v48 = v49) != 0LL) )
      v50 = *((_DWORD *)v49 + 12);
    else
      v50 = 0;
    v99 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( *((_DWORD *)Global + 405) )
      {
        v52 = *((_DWORD *)this + 111);
        if ( (v52 & 0x20) == 0 && (v52 & 4) == 0 )
        {
          v53 = DXGPROCESS::GetCurrent();
          if ( v53 )
          {
            if ( (*((_BYTE *)v53 + 408) & 1) == 0 && (*((_DWORD *)v53 + 102) & 2) == 0 )
            {
              v54 = *((_DWORD *)Global + 405);
              if ( v54 == 2 || v54 == 1 && *((_BYTE *)v53 + 573) )
              {
                v55 = DXGGLOBAL::GetGlobal();
                SessionData = DXGGLOBAL::GetSessionData(v55);
                if ( SessionData )
                {
                  v57 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                  if ( v57 )
                  {
                    KeStackAttachProcess(v57, &v100);
                    v99 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v41 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 112))(*((_QWORD *)this + 36), a2);
    if ( v99 )
      KeUnstackDetachProcess(&v100);
    if ( v88 != KeGetCurrentIrql() )
    {
      v58 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v88, v58);
      WdLogGlobalForLineNumber = 1892;
    }
    if ( v48 )
    {
      v59 = *((int *)v48 + 12);
      if ( (_DWORD)v59 != v50 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v59, v50, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1201);
    LOBYTE(v44) = 0;
    if ( (unsigned int)(v41 + 0x3FFFFFFF) > 1 && (_DWORD)v41 )
    {
      WdLogSingleEntry1(2LL, v41);
      WdLogGlobalForLineNumber = 1894;
      goto LABEL_96;
    }
  }
  v60 = *((_QWORD *)this + 391);
  if ( !v60
    || (v61 = *(_QWORD *)(v60 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v60 + 736) + 8LL) + 72LL))(v61)
    && *((struct _KTHREAD **)this + 392) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 35));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v41 >= 0 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 548, &LockHandle);
      if ( (*((_DWORD *)this + 744) & 0x10) != 0 )
      {
        v66 = a4;
        if ( a4 == -3 )
        {
          for ( j = 0; j < *((_DWORD *)this + 464); *(_DWORD *)(*((_QWORD *)this + 538) + 4 * v68) = HighPart )
            v68 = j++;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 538) + 4LL * a4) = HighPart;
        }
      }
      else
      {
        v66 = a4;
        **((_DWORD **)this + 538) = HighPart;
      }
      if ( (_DWORD)HighPart == 1 )
      {
        if ( (*((_DWORD *)this + 744) & 0x10) != 0 )
        {
          if ( v66 == -3 )
          {
            for ( k = 0; k < *((_DWORD *)this + 464); *(_QWORD *)(*((_QWORD *)this + 549) + 8 * v70) = 0LL )
              v70 = k++;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 549) + 8LL * v66) = 0LL;
          }
        }
        else
        {
          **((_QWORD **)this + 549) = 0LL;
        }
      }
      v71 = *((_QWORD *)this + 390);
      if ( v71 && !(_DWORD)HighPart && *(_QWORD *)(v71 + 1024) )
        *(_BYTE *)(v71 + 968) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_DWORD)HighPart != 2 )
      {
        LOBYTE(v72) = (_DWORD)HighPart == 0;
        PoNotifyVSyncChange(v72);
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 545) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 4352, 0LL);
    KeLeaveCriticalRegion();
  }
  v73 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v62, v64, v65);
  v73[3] = (int)v41;
  LODWORD(v76) = a2.InterruptType;
  v73[4] = a2.InterruptType;
  v73[5] = HighPart;
  WdLogGlobalForLineNumber = 1985;
  if ( (int)v41 < 0 || a2.InterruptType != DXGK_INTERRUPT_CRTC_VSYNC || (_DWORD)HighPart != 1 )
    goto LABEL_146;
  v77 = a4;
  if ( a4 == -3 || (*((_DWORD *)this + 744) & 0x10) == 0 )
    v78 = 0;
  else
    v78 = a4;
  v74 = *((_QWORD *)this + 550);
  v75 = v78;
  v76 = *(_QWORD *)(v74 + 8LL * v78);
  v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 8LL * v78), v76, v76);
  v79 = *((_DWORD *)this + 1104);
  if ( v44 )
    v80.QuadPart = -(v44 * v79);
  else
    v80.QuadPart = -166667 * v79;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  if ( (*((_DWORD *)this + 744) & 0x10) == 0 )
  {
    v82 = (struct _KDPC *)*((_QWORD *)this + 540);
    v83 = (struct _KTIMER *)*((_QWORD *)this + 539);
    goto LABEL_145;
  }
  if ( a4 != -3 )
  {
    v82 = (struct _KDPC *)(((unsigned __int64)a4 << 6) + *((_QWORD *)this + 540));
    v83 = (struct _KTIMER *)(*((_QWORD *)this + 539) + ((unsigned __int64)a4 << 6));
LABEL_145:
    KeSetTimer(v83, v80, v82);
LABEL_146:
    v77 = a4;
    goto LABEL_147;
  }
  v81 = 0;
  if ( *((_DWORD *)this + 464) )
  {
    do
    {
      KeSetTimer(
        (PKTIMER)(*((_QWORD *)this + 539) + ((unsigned __int64)v81 << 6)),
        v80,
        (PKDPC)(((unsigned __int64)v81 << 6) + *((_QWORD *)this + 540)));
      ++v81;
    }
    while ( v81 < *((_DWORD *)this + 464) );
    goto LABEL_146;
  }
LABEL_147:
  if ( bTracingEnabled
    && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0qqx_EtwWriteTransfer(v76, v74, v75, v77, HighPart, v44);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
  if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v84, (__int64)&EventProfilerExit, v85, v91);
  return (unsigned int)v41;
}
