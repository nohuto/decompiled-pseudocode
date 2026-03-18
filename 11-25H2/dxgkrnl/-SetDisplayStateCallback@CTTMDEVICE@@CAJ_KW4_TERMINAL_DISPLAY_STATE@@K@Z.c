/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1401F4D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x14024676C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  void *v4; // r13
  __int64 v6; // r14
  DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  struct DXGSESSIONDATA *v9; // rsi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rax
  const wchar_t *v12; // r9
  unsigned int v14; // eax
  __int64 v15; // r9
  int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  __int16 v20; // ax
  __int64 v21; // rcx
  struct _EX_RUNDOWN_REF **v22; // rdi
  unsigned __int64 v23; // r15
  unsigned int v24; // ecx
  struct _DEVICE_OBJECT *Count; // rbx
  unsigned int v26; // edx
  __int64 v27; // r12
  struct _EX_RUNDOWN_REF **v28; // rax
  struct _EX_RUNDOWN_REF *v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  struct _EX_RUNDOWN_REF *v32; // rax
  struct _EX_RUNDOWN_REF *v33; // r8
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  int v38; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *v39; // rcx
  unsigned int *v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  struct _EX_RUNDOWN_REF *v44; // r9
  __int64 v45; // r8
  __int64 v46; // [rsp+20h] [rbp-99h]
  __int64 v47; // [rsp+20h] [rbp-99h]
  __int64 v48; // [rsp+28h] [rbp-91h]
  __int64 v49; // [rsp+30h] [rbp-89h]
  unsigned int v50; // [rsp+50h] [rbp-69h]
  struct _EX_RUNDOWN_REF *v51; // [rsp+58h] [rbp-61h]
  struct _EX_RUNDOWN_REF *v52; // [rsp+58h] [rbp-61h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+58h] [rbp-61h]
  struct _EX_RUNDOWN_REF **v54; // [rsp+58h] [rbp-61h]
  int v55; // [rsp+60h] [rbp-59h]
  unsigned int v56; // [rsp+64h] [rbp-55h]
  unsigned int v57; // [rsp+64h] [rbp-55h]
  struct _EX_RUNDOWN_REF **v58; // [rsp+68h] [rbp-51h]
  __int64 v59; // [rsp+70h] [rbp-49h]
  unsigned int *v60; // [rsp+78h] [rbp-41h]
  struct _EX_RUNDOWN_REF *v61; // [rsp+80h] [rbp-39h]
  unsigned int *v62; // [rsp+80h] [rbp-39h]
  __int64 v63; // [rsp+80h] [rbp-39h]
  struct _EX_RUNDOWN_REF *v64; // [rsp+88h] [rbp-31h] BYREF
  int v65; // [rsp+90h] [rbp-29h] BYREF
  int v66; // [rsp+94h] [rbp-25h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v67[2]; // [rsp+98h] [rbp-21h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v68[2]; // [rsp+A8h] [rbp-11h] BYREF
  struct DXGSESSIONDATA *SessionData; // [rsp+B8h] [rbp-1h]
  _BYTE v70[16]; // [rsp+C0h] [rbp+7h] BYREF

  v3 = a3;
  LOWORD(v4) = 0;
  v60 = (unsigned int *)v70;
  v64 = 0LL;
  v6 = a2;
  v55 = 4;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v9 = SessionData;
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6687;
    v11 = (unsigned int)PsGetCurrentProcessSessionId();
    v12 = L"Cannot find the session data for current session 0x%I64x, returning 0x%I64x.";
    v49 = 0LL;
    v48 = -1073741811LL;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v12, v11, v48, v49, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1 == (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    v36 = *((_DWORD *)SessionData + 4658);
    if ( v36 != (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, v36, v3);
      v46 = *((unsigned int *)SessionData + 4658);
      WdLogGlobalForLineNumber = 6839;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Batch sequence numbers are not match (0x%I64x : 0x%I64x).",
        v46,
        v3,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)SessionData + 4659) != (_DWORD)v6 )
    {
      WdLogSingleEntry2(2LL, *((int *)SessionData + 4659), v6);
      v47 = *((int *)SessionData + 4659);
      WdLogGlobalForLineNumber = 6850;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The display state from batch is not same as the one from flush (0x%I64x : 0x%I64x).",
        v47,
        v6,
        0LL,
        0LL,
        0LL);
      LODWORD(v6) = *((_DWORD *)SessionData + 4659);
    }
    goto LABEL_49;
  }
  if ( *((_WORD *)SessionData + 9321) )
  {
    v14 = *((_DWORD *)SessionData + 4658);
    if ( v14 != (_DWORD)v3 )
    {
      WdLogSingleEntry3(2LL, v14, v3, -1073741811LL);
      v11 = *((unsigned int *)SessionData + 4658);
      v12 = L"Batch sequence numbers are not match (0x%I64x : 0x%I64x), returning 0x%I64x.";
      WdLogGlobalForLineNumber = 6714;
      v49 = -1073741811LL;
      v48 = v3;
      goto LABEL_3;
    }
    if ( *((_DWORD *)SessionData + 4659) != (_DWORD)v6 )
    {
      WdLogSingleEntry3(2LL, *((int *)SessionData + 4659), v6, -1073741811LL);
      v11 = *((int *)SessionData + 4659);
      v12 = L"Batch does not share same display state (0x%I64x : 0x%I64x), returning 0x%I64x.";
      WdLogGlobalForLineNumber = 6728;
      v49 = -1073741811LL;
      v48 = v6;
      goto LABEL_3;
    }
  }
  else
  {
    *((_DWORD *)SessionData + 4658) = v3;
    *((_DWORD *)v9 + 4659) = v6;
  }
  v64 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6734;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pThis != NULL", 6734LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ExAcquireRundownProtection(a1 + 6) )
    return 3221226166LL;
  v16 = *((unsigned __int16 *)v9 + 9321);
  v17 = *((unsigned __int16 *)v9 + 9320);
  if ( v17 > v16 + 1 )
  {
LABEL_24:
    *(_QWORD *)(*((_QWORD *)v9 + 2331) + 8LL * (unsigned __int16)v16) = a1;
    ++*((_WORD *)v9 + 9321);
    return 0LL;
  }
  v18 = v17 + 4;
  if ( v18 >= 0xFFFF )
  {
    WdLogSingleEntry1(3LL, v18);
    WdLogGlobalForLineNumber = 6778;
    goto LABEL_26;
  }
  v19 = 8LL * v18;
  if ( !is_mul_ok(v18, 8uLL) )
    v19 = -1LL;
  v4 = (void *)operator new[](v19, 0x4B677844u, 256LL, v15);
  if ( v4 )
  {
    v20 = *((_WORD *)v9 + 9321);
    if ( v20 )
    {
      memmove(v4, *((const void **)v9 + 2331), 8LL * *((unsigned __int16 *)v9 + 9321));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)v9 + 2331));
      v20 = *((_WORD *)v9 + 9321);
    }
    *((_WORD *)v9 + 9320) = v18;
    LOWORD(v16) = v20;
    *((_QWORD *)v9 + 2331) = v4;
    goto LABEL_24;
  }
  WdLogSingleEntry1(6LL, v18);
  WdLogGlobalForLineNumber = 6769;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v18,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_26:
  v21 = *((_QWORD *)v9 + 2331);
  if ( !v21 )
  {
    v22 = &v64;
    LODWORD(v23) = 1;
LABEL_28:
    v24 = 4;
    goto LABEL_29;
  }
  *(_QWORD *)(v21 + 8LL * (unsigned __int16)(*((_WORD *)v9 + 9321))++) = a1;
LABEL_49:
  v22 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)v9 + 2331);
  v23 = *((unsigned __int16 *)v9 + 9321);
  if ( (unsigned int)v23 <= 4 )
    goto LABEL_28;
  v37 = 4 * v23;
  if ( !is_mul_ok(v23, 4uLL) )
    v37 = -1LL;
  v60 = (unsigned int *)operator new[](v37, 0x4B677844u, 256LL, v8);
  if ( !v60 )
  {
    WdLogSingleEntry1(6LL, (unsigned int)v23);
    WdLogGlobalForLineNumber = 6876;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate new batch buffer, size = 0x%I64x.",
      (unsigned int)v23,
      0LL,
      0LL,
      0LL,
      0LL);
    v60 = (unsigned int *)v70;
    goto LABEL_28;
  }
  v24 = v23;
  v55 = v23;
LABEL_29:
  v56 = 0;
  Count = 0LL;
  v59 = 0LL;
  v26 = 0;
  v50 = 0;
  LODWORD(v27) = -1073741637;
  if ( !(_DWORD)v23 )
    goto LABEL_86;
  while ( 1 )
  {
    v28 = v22;
    v58 = v22;
    do
    {
      if ( v26 >= v24 )
        break;
      v29 = *v28;
      v64 = v29;
      if ( v29 && (!Count || (struct _DEVICE_OBJECT *)v29[9].Count == Count) )
      {
        v30 = _InterlockedExchangeAdd((volatile signed __int32 *)&v29[78], 1u) & 0x1F;
        v31 = (unsigned int)v30;
        HIDWORD(v29[v30 + 78].Ptr) = v6;
        v32 = v64 + 111;
        LODWORD(v29[v31 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        v51 = v32;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v51, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        v33 = v64;
        v34 = v50;
        v51[1].Count = (ULONG_PTR)KeGetCurrentThread();
        v35 = 0;
        v61 = v33;
        if ( v50 )
        {
          do
          {
            if ( v60[v35] == LODWORD(v33[10].Count) )
              break;
            ++v35;
          }
          while ( v35 < v50 );
          Count = (struct _DEVICE_OBJECT *)v59;
        }
        if ( LOBYTE(v33[114].Count) || v35 < v50 )
        {
          v53 = v33 + 111;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          v53[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v53, 0LL);
          KeLeaveCriticalRegion();
          ExReleaseRundownProtection(v61 + 6);
          v28 = v58;
          *v58 = 0LL;
        }
        else
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v33[9].Count;
            v59 = (__int64)Count;
            ObfReferenceObject(Count);
            v34 = v50;
            v33 = v61;
          }
          HIDWORD(v33[114].Ptr) = v6;
          v50 = v34 + 1;
          v60[v34] = v33[10].Count;
          v52 = v33 + 111;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          v52[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v52, 0LL);
          KeLeaveCriticalRegion();
          v28 = v58;
        }
        v24 = v55;
        v26 = v50;
      }
      v58 = ++v28;
      ++v56;
    }
    while ( v56 < (unsigned int)v23 );
    v54 = v22;
    if ( !Count )
      break;
    if ( (unsigned int)v6 < 2 )
    {
      LOBYTE(v68[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v68, 0LL, 0x36u, 0);
      v66 = 4;
      v42 = DxgkPowerOnOffMonitor((int)Count, v50, (int)v60, (int)&v66, 0, v68[1]);
      v27 = v42;
      if ( v42 < 0 )
      {
        WdLogSingleEntry2(2LL, v59, v42);
        Count = (struct _DEVICE_OBJECT *)v59;
        WdLogGlobalForLineNumber = 7015;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to power off monitors on device 0x%I64x, (Status = 0x%I64x).",
          v59,
          v27,
          0LL,
          0LL,
          0LL);
      }
      v39 = v68;
      goto LABEL_75;
    }
    if ( (_DWORD)v6 != 2 )
    {
      if ( (_DWORD)v6 != 3 )
      {
        LODWORD(v27) = -1073741811;
        WdLogSingleEntry2(2LL, (int)v6, -1073741811LL);
        WdLogGlobalForLineNumber = 7070;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Receieved unknown TTM display State 0x%I64x, returning 0x%I64x.",
          (int)v6,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        Count = (struct _DEVICE_OBJECT *)v59;
LABEL_76:
        v26 = v50;
        goto LABEL_77;
      }
      LOBYTE(v67[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v67, 0LL, 0x37u, 0);
      v65 = 1;
      v38 = DxgkPowerOnOffMonitor((int)Count, v50, (int)v60, (int)&v65, 0, v67[1]);
      v27 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry2(2LL, v59, v38);
        Count = (struct _DEVICE_OBJECT *)v59;
        WdLogGlobalForLineNumber = 7058;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to power on monitors on device 0x%I64x, (Status = 0x%I64x).",
          v59,
          v27,
          0LL,
          0LL,
          0LL);
      }
      v39 = v67;
LABEL_75:
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v39);
      goto LABEL_76;
    }
    v57 = 0;
    if ( v26 )
    {
      v40 = v60;
      v62 = v60;
      while ( 1 )
      {
        v41 = DpiBrightnessNotifyMonitorDimming(Count, *v40, 0);
        v27 = v41;
        if ( v41 < 0 )
          break;
        v26 = v50;
        v40 = v62 + 1;
        ++v57;
        ++v62;
        if ( v57 >= v50 )
          goto LABEL_77;
      }
      WdLogSingleEntry3(2LL, v60[v57], v59, v41);
      WdLogGlobalForLineNumber = 7034;
      Count = (struct _DEVICE_OBJECT *)v59;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to notify brightness dimming on target 0x%I64x from device 0x%I64x, (Status = 0x%I64x).",
        v60[v57],
        v59,
        v27,
        0LL,
        0LL);
      goto LABEL_76;
    }
LABEL_77:
    v43 = (unsigned int)v23;
    v63 = (unsigned int)v23;
    do
    {
      v44 = *v22;
      if ( *v22 && (struct _DEVICE_OBJECT *)v44[9].Count == Count )
      {
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)&v44[78], 1u) & 0x1F;
        HIDWORD(v44[v45 + 78].Ptr) = v6 | 0x80000000;
        LODWORD(v44[v45 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        ExReleaseRundownProtection(*v22 + 6);
        v43 = v63;
        v26 = v50 - 1;
        *v22 = 0LL;
        --v50;
      }
      ++v22;
      v63 = --v43;
    }
    while ( v43 );
    v22 = v54;
    if ( v26 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7093;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"j == 0", 7093LL, 0LL, 0LL, 0LL, 0LL);
    }
    ObfDereferenceObject(Count);
    Count = 0LL;
    v59 = 0LL;
    v56 = 0;
    v26 = 0;
    v50 = 0;
    v24 = v55;
  }
  v9 = SessionData;
  LOWORD(v4) = 0;
LABEL_86:
  if ( v60 != (unsigned int *)v70 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v60);
  *((_WORD *)v9 + 9321) = (_WORD)v4;
  return (unsigned int)v27;
}
