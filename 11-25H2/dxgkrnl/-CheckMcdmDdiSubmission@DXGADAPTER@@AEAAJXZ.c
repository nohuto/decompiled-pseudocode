/*
 * XREFs of ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x14007504C
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiSubmission(DXGADAPTER *this)
{
  int v2; // eax
  int v3; // r14d
  char v4; // r15
  char v5; // r12
  char v6; // r13
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v8; // rcx
  char v9; // r8
  __int64 v10; // r11
  unsigned __int16 *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  _BYTE *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rax

  if ( (*((_DWORD *)this + 744) & 8) == 0 )
    return 0LL;
  v2 = *((_DWORD *)this + 111);
  if ( (v2 & 8) != 0 || (v2 & 0x4000) != 0 )
    return 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  if ( NumDifferentPhysicalAdapters )
  {
    v11 = *(unsigned __int16 **)(v8 + 2992);
    v12 = NumDifferentPhysicalAdapters;
    do
    {
      v13 = *((_QWORD *)v11 + 4);
      if ( v13 )
      {
        if ( (unsigned __int16)v10 < *v11 )
        {
          v14 = (_BYTE *)(v13 + 73);
          v15 = *v11;
          do
          {
            if ( *(v14 - 1) == (_BYTE)v10 && *v14 == (_BYTE)v10 && (*((_DWORD *)v11 + 4) & 0xC0) == 0 )
            {
              v9 = 1;
            }
            else
            {
              v4 = 1;
              if ( (*(v14 - 5) & 1) != 0 )
                v5 = 1;
              if ( *v14 != (_BYTE)v10 )
                v6 = 1;
            }
            v14 += 74;
            --v15;
          }
          while ( v15 );
        }
      }
      else
      {
        v9 = 1;
      }
      v11 += 172;
      --v12;
    }
    while ( v12 );
  }
  v16 = *((_QWORD *)this + 65);
  if ( v9 )
  {
    if ( !v16 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 269;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"DxgkDdiPatch is required.", 269LL, 0LL, 0LL, 0LL, 0LL);
      v10 = 0LL;
      v3 = 1;
    }
    if ( *((_QWORD *)this + 92) == v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 270;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"DxgkDdiRender is required.", 270LL, 0LL, 0LL, 0LL, 0LL);
      ++v3;
      v10 = 0LL;
    }
    if ( *((_QWORD *)this + 66) == v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 271;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSubmitCommand is required.",
        271LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
  }
  else
  {
    if ( v16 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 275;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"DxgkDdiPatch is not used.", 275LL, 0LL, 0LL, 0LL, 0LL);
      v10 = 0LL;
    }
    if ( *((_QWORD *)this + 92) != v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 276;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"DxgkDdiRender is not used.", 276LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_SUBMITCOMMAND *))this + 66) != DXGADAPTER::DefaultDdiSubmitCommand )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 277;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSubmitCommand is not used.",
        277LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v17 = *((_QWORD *)this + 122);
  if ( v4 )
  {
    if ( !v17 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 282;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiCreateProcess is required.",
        282LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
    if ( !*((_QWORD *)this + 123) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 283;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiDestroyProcess is required.",
        283LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
    if ( !*((_QWORD *)this + 119) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 284;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiGetRootPageTableSize is required.",
        284LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
    if ( !*((_QWORD *)this + 118) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 285;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSetRootPageTable is required.",
        285LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
    if ( !*((_QWORD *)this + 117) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 286;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSubmitCommandVirtual is required.",
        286LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
  }
  else
  {
    if ( v17 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 292;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiCreateProcess is not used.",
        292LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 123) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 293;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiDestroyProcess is not used.",
        293LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 119) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 294;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiGetRootPageTableSize is not used.",
        294LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 118) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 295;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSetRootPageTable is not used.",
        295LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 117) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 296;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSubmitCommandVirtual is not used.",
        296LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 120) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 297;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiMapCpuHostAperture is not used.",
        297LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 121) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 298;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiUnmapCpuHostAperture is not used.",
        298LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 164) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 303;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiBeginExclusiveAccess is required.",
        303LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
    if ( !*((_QWORD *)this + 165) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 304;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiEndExclusiveAccess is required.",
        304LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++v3;
    }
  }
  if ( !v5 )
  {
    if ( *((_QWORD *)this + 138) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 309;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiCreateHwQueue is not used.",
        309LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 139) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 310;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiDestroyHwQueue is not used.",
        310LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 141) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 311;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiResetHwEngine is not used.",
        311LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 162) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 312;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiResumeContext is not used.",
        312LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 142) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 313;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiResumeHwEngine is not used.",
        313LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 160) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 314;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSetContextSchedulingProperties is not used.",
        314LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 157) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 315;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSetSchedulingLogBuffer is not used.",
        315LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 158) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 316;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSetupPriorityBands is not used.",
        316LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 168) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 317;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSignalMonitoredFence is not used.",
        317LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 140) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSubmitCommandToHwQueue is not used.",
        318LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 161) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 319;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkDdiSuspendContext is not used.",
        319LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !v3 )
    return 0LL;
  else
    return 3221225561LL;
}
