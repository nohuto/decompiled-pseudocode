/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1401FB5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x14024D59C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  void *v4; // r13
  __int64 v6; // r12
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v8; // rsi
  unsigned int CurrentProcessSessionId; // eax
  const wchar_t *v10; // r9
  __int64 v11; // rax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // r15d
  unsigned int v16; // r15d
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  __int64 v19; // rcx
  struct _EX_RUNDOWN_REF **v20; // rcx
  unsigned int v21; // eax
  struct _EX_RUNDOWN_REF **v22; // r14
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ebx
  struct _DEVICE_OBJECT *Count; // r15
  unsigned int v28; // esi
  struct _EX_RUNDOWN_REF **v29; // rax
  struct _EX_RUNDOWN_REF *v30; // r9
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rbx
  unsigned int v33; // ecx
  struct _EX_RUNDOWN_REF *v34; // rbx
  __int64 v35; // rcx
  struct _EX_RUNDOWN_REF *v36; // rcx
  int v37; // eax
  __int64 v38; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *v39; // rcx
  unsigned int *v40; // rcx
  int v41; // eax
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rbx
  struct _EX_RUNDOWN_REF **v45; // rbx
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // r9
  __int64 v48; // r8
  __int64 v49; // [rsp+20h] [rbp-89h]
  __int64 v50; // [rsp+20h] [rbp-89h]
  __int64 v51; // [rsp+28h] [rbp-81h]
  __int64 v52; // [rsp+30h] [rbp-79h]
  int v53; // [rsp+50h] [rbp-59h]
  int v54; // [rsp+54h] [rbp-55h]
  unsigned int v55; // [rsp+58h] [rbp-51h]
  unsigned int v56; // [rsp+58h] [rbp-51h]
  int v57; // [rsp+5Ch] [rbp-4Dh]
  unsigned int *v58; // [rsp+60h] [rbp-49h]
  struct _EX_RUNDOWN_REF **v59; // [rsp+68h] [rbp-41h]
  unsigned int *v60; // [rsp+68h] [rbp-41h]
  __int64 v61; // [rsp+68h] [rbp-41h]
  struct _EX_RUNDOWN_REF **v62; // [rsp+70h] [rbp-39h]
  struct _EX_RUNDOWN_REF *v63; // [rsp+78h] [rbp-31h] BYREF
  int v64; // [rsp+80h] [rbp-29h] BYREF
  int v65; // [rsp+84h] [rbp-25h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v66[2]; // [rsp+88h] [rbp-21h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v67[2]; // [rsp+98h] [rbp-11h] BYREF
  struct DXGSESSIONDATA *SessionData; // [rsp+A8h] [rbp-1h]
  _BYTE v69[16]; // [rsp+B0h] [rbp+7h] BYREF

  v3 = a3;
  LODWORD(v4) = 0;
  v58 = (unsigned int *)v69;
  v63 = 0LL;
  v6 = a2;
  v54 = 4;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v8 = SessionData;
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6739;
    LODWORD(v11) = PsGetCurrentProcessSessionId();
    v10 = L"Cannot find the session data for current session 0x%I64x, returning 0x%I64x.";
    v52 = 0LL;
    v51 = -1073741811LL;
    v11 = (unsigned int)v11;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v11, v51, v52, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1 == (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    v21 = *((_DWORD *)SessionData + 4658);
    if ( v21 != (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, v21, v3);
      v49 = *((unsigned int *)SessionData + 4658);
      WdLogGlobalForLineNumber = 6891;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Batch sequence numbers are not match (0x%I64x : 0x%I64x).",
        v49,
        v3,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)SessionData + 4659) != (_DWORD)v6 )
    {
      WdLogSingleEntry2(2LL, *((int *)SessionData + 4659), v6);
      v50 = *((int *)SessionData + 4659);
      WdLogGlobalForLineNumber = 6902;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The display state from batch is not same as the one from flush (0x%I64x : 0x%I64x).",
        v50,
        v6,
        0LL,
        0LL,
        0LL);
      LODWORD(v6) = *((_DWORD *)SessionData + 4659);
    }
    goto LABEL_33;
  }
  if ( *((_WORD *)SessionData + 9321) )
  {
    v13 = *((_DWORD *)SessionData + 4658);
    if ( v13 != (_DWORD)v3 )
    {
      WdLogSingleEntry3(2LL, v13, v3, -1073741811LL);
      v11 = *((unsigned int *)SessionData + 4658);
      v10 = L"Batch sequence numbers are not match (0x%I64x : 0x%I64x), returning 0x%I64x.";
      v52 = -1073741811LL;
      v51 = v3;
      WdLogGlobalForLineNumber = 6766;
      goto LABEL_3;
    }
    if ( *((_DWORD *)SessionData + 4659) != (_DWORD)v6 )
    {
      WdLogSingleEntry3(2LL, *((int *)SessionData + 4659), v6, -1073741811LL);
      v11 = *((int *)SessionData + 4659);
      v10 = L"Batch does not share same display state (0x%I64x : 0x%I64x), returning 0x%I64x.";
      v52 = -1073741811LL;
      v51 = v6;
      WdLogGlobalForLineNumber = 6780;
      goto LABEL_3;
    }
  }
  else
  {
    *((_DWORD *)SessionData + 4658) = v3;
    *((_DWORD *)v8 + 4659) = v6;
  }
  v63 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6786;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pThis != NULL", 6786LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ExAcquireRundownProtection(a1 + 6) )
    return 3221226166LL;
  v14 = *((unsigned __int16 *)v8 + 9321);
  v15 = *((unsigned __int16 *)v8 + 9320);
  if ( v15 > v14 + 1 )
  {
LABEL_24:
    *(_QWORD *)(*((_QWORD *)v8 + 2331) + 8LL * (unsigned __int16)v14) = a1;
    ++*((_WORD *)v8 + 9321);
    return 0LL;
  }
  v16 = v15 + 4;
  if ( v16 >= 0xFFFF )
  {
    WdLogSingleEntry1(3LL, v16);
    WdLogGlobalForLineNumber = 6830;
    goto LABEL_26;
  }
  v17 = 8LL * v16;
  if ( !is_mul_ok(v16, 8uLL) )
    v17 = -1LL;
  v4 = (void *)operator new[](v17, 0x4B677844u, 256LL);
  if ( v4 )
  {
    v18 = *((_WORD *)v8 + 9321);
    if ( v18 )
    {
      memmove(v4, *((const void **)v8 + 2331), 8LL * *((unsigned __int16 *)v8 + 9321));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)v8 + 2331));
      v18 = *((_WORD *)v8 + 9321);
    }
    *((_WORD *)v8 + 9320) = v16;
    LOWORD(v14) = v18;
    *((_QWORD *)v8 + 2331) = v4;
    goto LABEL_24;
  }
  WdLogSingleEntry1(6LL, v16);
  WdLogGlobalForLineNumber = 6821;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v16,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_26:
  v19 = *((_QWORD *)v8 + 2331);
  if ( !v19 )
  {
    v20 = &v63;
    v53 = 1;
    v62 = &v63;
    goto LABEL_39;
  }
  *(_QWORD *)(v19 + 8LL * (unsigned __int16)(*((_WORD *)v8 + 9321))++) = a1;
LABEL_33:
  v22 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)v8 + 2331);
  v23 = *((unsigned __int16 *)v8 + 9321);
  v62 = v22;
  v53 = v23;
  if ( (unsigned int)v23 > 4 )
  {
    v24 = 4 * v23;
    if ( !is_mul_ok(v23, 4uLL) )
      v24 = -1LL;
    v58 = (unsigned int *)operator new[](v24, 0x4B677844u, 256LL);
    if ( v58 )
    {
      v25 = v23;
      v53 = v23;
      v54 = v23;
      v20 = v22;
      v62 = v22;
      goto LABEL_40;
    }
    WdLogSingleEntry1(6LL, (unsigned int)v23);
    WdLogGlobalForLineNumber = 6928;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate new batch buffer, size = 0x%I64x.",
      (unsigned int)v23,
      0LL,
      0LL,
      0LL,
      0LL);
    v53 = v23;
    v58 = (unsigned int *)v69;
    v62 = v22;
  }
  v20 = v22;
LABEL_39:
  v25 = 4;
LABEL_40:
  v55 = 0;
  v26 = -1073741637;
  Count = 0LL;
  v57 = -1073741637;
  if ( !v53 )
    goto LABEL_87;
  v28 = v53;
  while ( 1 )
  {
    v59 = v20;
    v29 = v20;
    do
    {
      if ( (unsigned int)v4 >= v25 )
        break;
      v30 = *v29;
      v63 = v30;
      if ( v30 && (!Count || (struct _DEVICE_OBJECT *)v30[9].Count == Count) )
      {
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)&v30[78], 1u) & 0x1F;
        HIDWORD(v30[v31 + 78].Ptr) = v6;
        v32 = v63;
        LODWORD(v30[(unsigned int)v31 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(&v32[111], 0LL);
        v32[112].Count = (ULONG_PTR)KeGetCurrentThread();
        v33 = 0;
        v34 = v63;
        if ( (_DWORD)v4 )
        {
          do
          {
            if ( v58[v33] == LODWORD(v63[10].Count) )
              break;
            ++v33;
          }
          while ( v33 < (unsigned int)v4 );
          v28 = v53;
        }
        if ( LOBYTE(v63[114].Count) || v33 < (unsigned int)v4 )
        {
          v36 = v63 + 111;
          v63[112].Count = 0LL;
          ExReleasePushLockExclusiveEx(v36, 0LL);
          KeLeaveCriticalRegion();
          ExReleaseRundownProtection(v34 + 6);
          v29 = v59;
          *v59 = 0LL;
        }
        else
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v63[9].Count;
            ObfReferenceObject(Count);
          }
          HIDWORD(v34[114].Ptr) = v6;
          v35 = (unsigned int)v4;
          LODWORD(v4) = (_DWORD)v4 + 1;
          v58[v35] = v34[10].Count;
          v34[112].Count = 0LL;
          ExReleasePushLockExclusiveEx(&v34[111], 0LL);
          KeLeaveCriticalRegion();
          v29 = v59;
        }
        v25 = v54;
      }
      v59 = ++v29;
      ++v55;
    }
    while ( v55 < v28 );
    if ( !Count )
      break;
    if ( (unsigned int)v6 < 2 )
    {
      LOBYTE(v67[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v67, 0LL, 0x36u, 0);
      v65 = 4;
      v43 = DxgkPowerOnOffMonitor((int)Count, (int)v4, (int)v58, (int)&v65, 0, v67[1]);
      v44 = v43;
      v57 = v43;
      if ( v43 < 0 )
      {
        WdLogSingleEntry2(2LL, Count, v43);
        WdLogGlobalForLineNumber = 7067;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to power off monitors on device 0x%I64x, (Status = 0x%I64x).",
          (__int64)Count,
          v44,
          0LL,
          0LL,
          0LL);
      }
      v39 = v67;
      goto LABEL_77;
    }
    if ( (_DWORD)v6 == 2 )
    {
      v56 = 0;
      if ( (_DWORD)v4 )
      {
        v40 = v58;
        v60 = v58;
        while ( 1 )
        {
          v41 = DpiBrightnessNotifyMonitorDimming(Count, *v40, 0);
          v42 = v41;
          v57 = v41;
          if ( v41 < 0 )
            break;
          v40 = v60 + 1;
          ++v56;
          ++v60;
          if ( v56 >= (unsigned int)v4 )
            goto LABEL_78;
        }
        WdLogSingleEntry3(2LL, v58[v56], Count, v41);
        WdLogGlobalForLineNumber = 7086;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to notify brightness dimming on target 0x%I64x from device 0x%I64x, (Status = 0x%I64x).",
          v58[v56],
          (__int64)Count,
          v42,
          0LL,
          0LL);
      }
    }
    else
    {
      if ( (_DWORD)v6 == 3 )
      {
        LOBYTE(v66[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v66, 0LL, 0x37u, 0);
        v64 = 1;
        v37 = DxgkPowerOnOffMonitor((int)Count, (int)v4, (int)v58, (int)&v64, 0, v66[1]);
        v38 = v37;
        v57 = v37;
        if ( v37 < 0 )
        {
          WdLogSingleEntry2(2LL, Count, v37);
          WdLogGlobalForLineNumber = 7110;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to power on monitors on device 0x%I64x, (Status = 0x%I64x).",
            (__int64)Count,
            v38,
            0LL,
            0LL,
            0LL);
        }
        v39 = v66;
LABEL_77:
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v39);
        goto LABEL_78;
      }
      v57 = -1073741811;
      WdLogSingleEntry2(2LL, (int)v6, -1073741811LL);
      WdLogGlobalForLineNumber = 7122;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Receieved unknown TTM display State 0x%I64x, returning 0x%I64x.",
        (int)v6,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_78:
    v45 = v62;
    v46 = v28;
    v61 = v28;
    do
    {
      v47 = *v45;
      if ( *v45 && (struct _DEVICE_OBJECT *)v47[9].Count == Count )
      {
        v48 = _InterlockedExchangeAdd((volatile signed __int32 *)&v47[78], 1u) & 0x1F;
        HIDWORD(v47[v48 + 78].Ptr) = v6 | 0x80000000;
        LODWORD(v47[v48 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        ExReleaseRundownProtection(*v45 + 6);
        v46 = v61;
        *v45 = 0LL;
        LODWORD(v4) = (_DWORD)v4 - 1;
      }
      ++v45;
      v61 = --v46;
    }
    while ( v46 );
    v28 = v53;
    if ( (_DWORD)v4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7145;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"j == 0", 7145LL, 0LL, 0LL, 0LL, 0LL);
    }
    ObfDereferenceObject(Count);
    v20 = v62;
    v25 = v54;
    Count = 0LL;
    v55 = 0;
    LODWORD(v4) = 0;
  }
  v8 = SessionData;
  v26 = v57;
LABEL_87:
  if ( v58 != (unsigned int *)v69 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v58);
  *((_WORD *)v8 + 9321) = 0;
  return v26;
}
