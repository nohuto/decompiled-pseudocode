/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1401CA050
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x140259430 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(const void *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r14
  __int64 v5; // rcx
  struct DXGADAPTER *Current; // rdi
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGADAPTER *v17; // rdi
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v25; // r8
  const void *v26; // rdx
  char *v27; // rcx
  unsigned int active; // esi
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // [rsp+28h] [rbp-150h]
  int v33; // [rsp+50h] [rbp-128h] BYREF
  __int64 v34; // [rsp+58h] [rbp-120h]
  char v35; // [rsp+60h] [rbp-118h]
  DXGADAPTER *v36[2]; // [rsp+68h] [rbp-110h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-100h] BYREF
  size_t Size; // [rsp+88h] [rbp-F0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v39[2]; // [rsp+90h] [rbp-E8h] BYREF
  struct DXGADAPTER *v40[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v41[144]; // [rsp+C0h] [rbp-B8h] BYREF

  LOBYTE(v39[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v39, 0LL, 0x2Cu, 0);
  v4 = v39[1];
  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2037);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2037);
  Current = DXGPROCESS::GetCurrent();
  v40[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 6820;
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v9,
      0LL,
      0LL,
      0LL);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v33);
    }
    v14 = -1073741811;
LABEL_28:
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v39);
    return (unsigned int)v14;
  }
  *(_OWORD *)Src = 0LL;
  Size = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, a1, 0x18uLL);
  v40[0] = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v36,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    v40,
    1);
  v10 = (int *)v40[0];
  if ( !v40[0] )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, Current, LODWORD(Src[0]));
    WdLogGlobalForLineNumber = 6845;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Status=0x%I64x DXGPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      (__int64)Current,
      LODWORD(Src[0]),
      0LL,
      0LL);
LABEL_18:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v11);
    goto LABEL_19;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v40[0], 0LL);
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
  if ( v14 < 0 )
  {
LABEL_25:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v33);
    goto LABEL_28;
  }
  if ( v10[751] > 1000 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = v10;
    WdLogGlobalForLineNumber = 6866;
LABEL_17:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    goto LABEL_18;
  }
  v17 = 0LL;
  v18 = Size;
  if ( (_DWORD)Size )
  {
    if ( !Src[1] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 6878;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver data size is not zero for a NULL driver data buffer.",
        6878LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_17;
    }
    v17 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, 256LL);
    v40[2] = v17;
    if ( !v17 )
    {
      v14 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 6892;
      goto LABEL_25;
    }
    v25 = (unsigned int)Size;
    v26 = Src[1];
    v27 = (char *)Src[1] + (unsigned int)Size;
    if ( v27 < Src[1] || (unsigned __int64)v27 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, v26, v25);
    v18 = Size;
  }
  active = DmmInvalidateActiveVidPn((DXGADAPTER *)v10, DXGK_AVIR_USERMODE, v17, v18, v4, v32);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v33);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v39);
  return active;
}
