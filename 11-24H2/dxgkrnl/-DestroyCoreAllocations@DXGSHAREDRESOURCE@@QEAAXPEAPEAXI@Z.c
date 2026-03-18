/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x140352D08
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140352CD4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x14000D078 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A138 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x140325C3C (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  UINT v3; // r14d
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD **Global; // rax
  struct DXGPROCESS *Current; // rax
  int v9; // ecx
  DXGPROCESS *v10; // rcx
  _QWORD *v11; // rax
  unsigned int v12; // r15d
  _QWORD *v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  void *v16; // rdx
  const HANDLE *v17; // rax
  ADAPTER_RENDER *v18; // rcx
  int v19; // [rsp+40h] [rbp-140h]
  int v20; // [rsp+48h] [rbp-138h]
  int v21; // [rsp+50h] [rbp-130h]
  int v22; // [rsp+58h] [rbp-128h]
  int v23; // [rsp+60h] [rbp-120h]
  int v24; // [rsp+68h] [rbp-118h]
  int v25; // [rsp+70h] [rbp-110h]
  int v26; // [rsp+78h] [rbp-108h]
  int v27; // [rsp+88h] [rbp-F8h]
  int v28; // [rsp+90h] [rbp-F0h]
  int v29; // [rsp+98h] [rbp-E8h]
  int v30; // [rsp+A0h] [rbp-E0h]
  int v31; // [rsp+A8h] [rbp-D8h]
  int v32; // [rsp+B0h] [rbp-D0h]
  int v33; // [rsp+B8h] [rbp-C8h]
  int v34; // [rsp+C0h] [rbp-C0h]
  int v35; // [rsp+C8h] [rbp-B8h]
  int v36; // [rsp+D0h] [rbp-B0h]
  int v37; // [rsp+D8h] [rbp-A8h]
  int v38; // [rsp+E0h] [rbp-A0h]
  int v39; // [rsp+E8h] [rbp-98h]
  _BYTE v40[16]; // [rsp+100h] [rbp-80h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v41; // [rsp+110h] [rbp-70h] BYREF
  unsigned int v42; // [rsp+160h] [rbp-20h]
  void **v43; // [rsp+168h] [rbp-18h]
  _QWORD *v44; // [rsp+178h] [rbp-8h]

  v3 = 0;
  v43 = (void **)*((_QWORD *)this + 21);
  if ( a2 && a3 >= *((_DWORD *)this + 33) )
  {
    v43 = a2;
  }
  else if ( !*((_QWORD *)this + 21) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12916;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDestructionBuffer is NULL!", 12916LL, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
  if ( *((_DWORD *)this + 6) )
  {
    if ( (*((_DWORD *)this + 3) & 8) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12924;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_NtSecuritySharing", 12924LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)this + 3) & 0x2000) != 0 )
    {
      Current = DXGPROCESS::GetCurrent(v5);
      if ( Current )
      {
        v9 = *((_DWORD *)Current + 102);
        if ( (v9 & 0x180) != 0 )
        {
          if ( (v9 & 0x100) != 0 )
            v10 = (DXGPROCESS *)*((_QWORD *)Current + 74);
          else
            v10 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v9 & 0x80u) != 0));
          DXGPROCESS::FreeHandleSafe(v10, *((_DWORD *)this + 6));
        }
      }
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v40);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
      Global = (struct _KTHREAD **)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
    }
    *((_DWORD *)this + 6) = 0;
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12949;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_hHostGlobalHandle", 12949LL, 0LL, 0LL, 0LL, 0LL);
  }
  LOBYTE(v6) = 0;
  v11 = (_QWORD *)*((_QWORD *)this + 17);
  v12 = 0;
  LOBYTE(v42) = 0;
  v44 = v11;
  if ( !*((_DWORD *)this + 33) )
  {
LABEL_36:
    if ( *((_QWORD *)this + 2) )
      goto LABEL_37;
    goto LABEL_40;
  }
  do
  {
    v13 = (_QWORD *)*((_QWORD *)this + 10);
    v14 = v11 - 6;
    v15 = v13[2];
    if ( *(_BYTE *)(v15 + 209) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) == 0 )
        goto LABEL_28;
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        v15,
        (const EVENT_DESCRIPTOR *)"\"",
        v6,
        0LL,
        0,
        v15,
        0,
        v14[14],
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        (char)v14,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        (*((_DWORD *)v14 + 1) >> 21) & 0x3F,
        0);
    }
    else
    {
      if ( !v14[1] )
        goto LABEL_28;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v13[95] + 8LL) + 112LL))(0LL, v13[96], v14[1]);
      v14[1] = 0LL;
    }
    LOBYTE(v6) = v42;
LABEL_28:
    v6 = (unsigned __int8)v6;
    if ( (*((_BYTE *)v14 + 4) & 2) != 0 )
      v6 = 1LL;
    v42 = v6;
    v43[v12] = (void *)v14[2];
    if ( v14[2] )
    {
      if ( v3 != v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13023;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NumDriverHandles == i", 13023LL, 0LL, 0LL, 0LL, 0LL);
        v6 = v42;
      }
      ++v3;
    }
    ++v12;
    v14[2] = 0LL;
    v11 = (_QWORD *)*v44;
    v44 = (_QWORD *)*v44;
  }
  while ( v12 < *((_DWORD *)this + 33) );
  if ( !v3 )
    goto LABEL_36;
LABEL_37:
  v16 = (void *)*((_QWORD *)this + 2);
  *(_QWORD *)(&v41.NumAllocations + 1) = 0LL;
  HIDWORD(v41.pAllocationList) = 0;
  *((_DWORD *)&v41.Flags + 1) = 0;
  v41.hResource = v16;
  v41.NumAllocations = v3;
  v17 = 0LL;
  v41.Flags.Value = v16 != 0LL;
  v18 = (ADAPTER_RENDER *)*((_QWORD *)this + 10);
  if ( v3 )
    v17 = v43;
  v41.pAllocationList = v17;
  ADAPTER_RENDER::DdiDestroyAllocation(v18, &v41, v6);
  *((_QWORD *)this + 2) = 0LL;
LABEL_40:
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
  KeLeaveCriticalRegion();
}
