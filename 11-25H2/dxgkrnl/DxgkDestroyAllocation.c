/*
 * XREFs of DxgkDestroyAllocation @ 0x14033FD00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403403A8 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(const void *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // rsi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+50h] [rbp-68h] BYREF
  __int64 v12; // [rsp+58h] [rbp-60h]
  char v13; // [rsp+60h] [rbp-58h]
  unsigned __int8 v14[8]; // [rsp+68h] [rbp-50h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v15; // [rsp+70h] [rbp-48h] BYREF
  unsigned int *v16[2]; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v17[2]; // [rsp+88h] [rbp-30h]
  GUID v18; // [rsp+90h] [rbp-28h] BYREF

  v14[0] = 0;
  v18 = 0LL;
  EtwActivityIdControl(3u, &v18);
  DisplayScenarioContextEnsureAndAssociate(&v18, 0x33u, 0, &v15, v14);
  v4 = v15;
  v11 = -1;
  v12 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2006);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2006);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)v17 = 0LL;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v16, a1, 0x18uLL);
    v7 = DxgkDestroyAllocationHelper(Current, (unsigned int)v16[0], HIDWORD(v16[0]), v16[1], v17[0], 0, v4, 1);
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10527;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v11);
  if ( v14[0] )
    DisplayScenarioContextDissociate(&v15);
  return v7;
}
