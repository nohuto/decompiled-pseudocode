/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1403C9760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B9E28 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // rdi
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v5; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT **p_pType; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v12; // rdx
  const void *pVidPnSourceId; // rdx
  const void *p_VidPnSourceCount; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // [rsp+50h] [rbp-68h] BYREF
  int v20; // [rsp+58h] [rbp-60h] BYREF
  __int64 v21; // [rsp+60h] [rbp-58h]
  char v22; // [rsp+68h] [rbp-50h]
  _D3DKMT_VIDPNSOURCEOWNER_FLAGS v23; // [rsp+70h] [rbp-48h] BYREF
  int v24; // [rsp+74h] [rbp-44h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v26; // [rsp+80h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v27[2]; // [rsp+88h] [rbp-30h] BYREF
  GUID v28; // [rsp+98h] [rbp-20h] BYREF

  LOBYTE(v26) = 0;
  v28 = 0LL;
  EtwActivityIdControl(3u, &v28);
  DisplayScenarioContextEnsureAndAssociate(&v28, 0x2Fu, 0, v27, (unsigned __int8 *)&v26);
  v4 = v27[0];
  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2077;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2077);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2077);
  v23.0 = 0;
  v5 = a1 + 1;
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v5 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v23, v5, 4uLL);
  p_pType = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&a1[1].pType;
  if ( (unsigned __int64)&a1[1].pType >= MmUserProbeAddress )
    p_pType = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)MmUserProbeAddress;
  v7 = *p_pType;
  v27[1] = *p_pType;
  if ( (*(_BYTE *)&v23.0 & 2) != 0 )
  {
    v19 = 0;
    v25 = 0;
    v24 = 0;
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v19, v12, 4uLL);
    pVidPnSourceId = a1->pVidPnSourceId;
    if ( (unsigned __int64)pVidPnSourceId >= MmUserProbeAddress )
      pVidPnSourceId = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v25, pVidPnSourceId, 4uLL);
    p_VidPnSourceCount = &a1->VidPnSourceCount;
    if ( (unsigned __int64)&a1->VidPnSourceCount >= MmUserProbeAddress )
      p_VidPnSourceCount = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v24, p_VidPnSourceCount, 4uLL);
    if ( v24 == 1 )
    {
      v8 = DisableDWMVirtualModeOnVidPnSource(v19, v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v20);
    }
    else
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 3723;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DisableDWMVirtualMode can only be used with a single VidPn source",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v20);
      v8 = -1073741811;
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v26);
  }
  else
  {
    v8 = SetVidPnSourceOwnerInternal(a1, v23, (void *const *)v7, v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v20);
    if ( (_BYTE)v26 )
      DisplayScenarioContextDissociate(v27);
  }
  return v8;
}
