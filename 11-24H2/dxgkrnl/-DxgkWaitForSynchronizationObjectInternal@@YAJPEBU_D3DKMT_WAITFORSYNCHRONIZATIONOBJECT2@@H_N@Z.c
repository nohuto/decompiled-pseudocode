/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x14029E0BC
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x14039A9B0 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1403C23D0 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x14029F130 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  bool v3; // r15
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  D3DKMT_HANDLE *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // [rsp+60h] [rbp-128h] BYREF
  __int64 v24; // [rsp+68h] [rbp-120h]
  char v25; // [rsp+70h] [rbp-118h]
  struct DXGPROCESS *v26; // [rsp+78h] [rbp-110h]
  unsigned int v27[52]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a3;
  v5 = a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2043);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2043);
  Current = DXGPROCESS::GetCurrent(v6);
  v26 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1045;
    v22 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v23);
    return (unsigned int)v14;
  }
  memset(v27, 0, 0xC8uLL);
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v27, v5, 0xC8uLL);
    if ( !v27[1] )
    {
      WdLogSingleEntry2(2LL, v27[0], -1073741811LL);
      WdLogGlobalForLineNumber = 1062;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
        v27[0],
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v23);
      return 3221225485LL;
    }
    if ( v27[1] > 0x20 )
    {
      WdLogSingleEntry3(2LL, v27[0], v27[1], -1073741811LL);
      WdLogGlobalForLineNumber = 1071;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"hContext 0x%I64x waiting on too many objects %I64d, returning 0x%I64x",
        v27[0],
        v27[1],
        -1073741811LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v23);
      }
      return 3221225485LL;
    }
  }
  else
  {
    *(_OWORD *)v27 = *(_OWORD *)&v5->hContext;
    *(_OWORD *)&v27[4] = *(_OWORD *)&v5->ObjectHandleArray[2];
    *(_OWORD *)&v27[8] = *(_OWORD *)&v5->ObjectHandleArray[6];
    *(_OWORD *)&v27[12] = *(_OWORD *)&v5->ObjectHandleArray[10];
    *(_OWORD *)&v27[16] = *(_OWORD *)&v5->ObjectHandleArray[14];
    *(_OWORD *)&v27[20] = *(_OWORD *)&v5->ObjectHandleArray[18];
    *(_OWORD *)&v27[24] = *(_OWORD *)&v5->ObjectHandleArray[22];
    *(_OWORD *)&v27[28] = *(_OWORD *)&v5->ObjectHandleArray[26];
    v17 = &v5->ObjectHandleArray[30];
    *(_OWORD *)&v27[32] = *(_OWORD *)v17;
    *(_OWORD *)&v27[36] = *((_OWORD *)v17 + 1);
    *(_OWORD *)&v27[40] = *((_OWORD *)v17 + 2);
    *(_OWORD *)&v27[44] = *((_OWORD *)v17 + 3);
    *(_QWORD *)&v27[48] = *((_QWORD *)v17 + 8);
  }
  v14 = WaitForSynchronizationObjectFromGpu(
          v27[1],
          &v27[2],
          0LL,
          *(unsigned __int64 *)&v27[34],
          v27[0],
          Current,
          a2 != 0,
          0,
          0,
          0,
          v3);
  if ( v14 < 0 )
    goto LABEL_18;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v23);
  return 0LL;
}
