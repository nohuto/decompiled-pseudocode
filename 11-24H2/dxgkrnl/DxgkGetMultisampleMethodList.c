/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1401C9940
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1402587FC (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGADAPTER *Current; // r15
  __int64 CurrentProcess; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _D3DDDI_MULTISAMPLINGMETHOD *v10; // r14
  const void *v11; // rdx
  unsigned __int64 v12; // rax
  struct DXGADAPTER *v13; // rsi
  int PairingAdapters; // eax
  struct DXGADAPTER *v15; // rsi
  int v16; // eax
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  _QWORD *v18; // rdx
  __int64 v19; // r10
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+50h] [rbp-148h]
  unsigned int v25[4]; // [rsp+58h] [rbp-140h] BYREF
  enum _D3DDDIFORMAT v26[4]; // [rsp+68h] [rbp-130h]
  unsigned __int64 v27; // [rsp+78h] [rbp-120h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v28; // [rsp+80h] [rbp-118h]
  unsigned __int64 v29; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-108h]
  int v31; // [rsp+98h] [rbp-100h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-F8h]
  char v33; // [rsp+A8h] [rbp-F0h]
  struct DXGADAPTER *v34; // [rsp+B0h] [rbp-E8h] BYREF
  struct DXGADAPTER *v35[2]; // [rsp+B8h] [rbp-E0h] BYREF
  unsigned __int64 v36; // [rsp+C8h] [rbp-D0h] BYREF
  DXGADAPTER *v37[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v38[144]; // [rsp+E0h] [rbp-B8h] BYREF

  v29 = a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2019);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2019);
  Current = DXGPROCESS::GetCurrent();
  v35[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 6249;
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
    goto LABEL_44;
  }
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  v7 = 0;
  v10 = 0LL;
  v28 = 0LL;
  v11 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v25, v11, 0x28uLL);
  if ( *(_QWORD *)&v26[2] && (_DWORD)v27 )
  {
    v12 = 8LL * (unsigned int)v27;
    if ( !is_mul_ok((unsigned int)v27, 8uLL) )
      v12 = -1LL;
    v10 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v12, 0x4B677844u, 256LL);
    v28 = v10;
    if ( !v10 )
    {
      v7 = -1073741801;
      WdLogSingleEntry4(6LL, -1073741801LL, v25[0], v25[1], (unsigned int)v27);
      WdLogGlobalForLineNumber = 6268;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"0x%I64x 0x%I64x 0x%I64x fails to allocate array of 0x%I64d D3DDDI_MULTISAMPLINGMETHOD",
        -1073741801LL,
        v25[0],
        v25[1],
        (unsigned int)v27,
        0LL);
    }
  }
  if ( v7 >= 0 )
  {
    v34 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v37, v25[0], (struct _KTHREAD **)Current, &v34, 1);
    v29 = 0LL;
    v13 = v34;
    if ( v34 )
    {
      v35[0] = 0LL;
      v36 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v34, v25[1], 0LL, 0LL, v35, &v36, 0);
      v7 = PairingAdapters;
      v24 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v15 = v35[0];
        if ( !v35[0] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6300;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pDisplayAdapter != NULL",
            6300LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v15, 0LL);
        DXGADAPTER::ReleaseReference(v15);
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
        v7 = v16;
        v24 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry4(7LL, v16, Current, v25[0], v15);
          WdLogGlobalForLineNumber = 6359;
        }
        else
        {
          if ( *(_DWORD *)(*((_QWORD *)v15 + 390) + 96LL) > v25[1] )
          {
            if ( *((_QWORD *)v15 + 391) )
            {
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v15,
                                                              v25[1],
                                                              v25[2],
                                                              v25[3],
                                                              v26[0],
                                                              (unsigned int)v27,
                                                              v10,
                                                              &v29);
              v7 = MultisamplingMethodSetFromClientVidPnSource;
              v24 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                WdLogSingleEntry4(3LL, (unsigned int)v27, v25[1], v15, MultisamplingMethodSetFromClientVidPnSource);
                WdLogGlobalForLineNumber = 6345;
                WdLogSingleEntry5(3LL, v25[1], v15, v25[2], v25[3], v26[0]);
                WdLogGlobalForLineNumber = 6352;
              }
              goto LABEL_29;
            }
            v7 = -1073741637;
            WdLogSingleEntry2(7LL, v15, -1073741637LL);
            WdLogGlobalForLineNumber = 6324;
          }
          else
          {
            v7 = -1073741811;
            WdLogSingleEntry3(3LL, -1073741811LL, v15, v25[1]);
            WdLogGlobalForLineNumber = 6316;
          }
          v24 = v7;
        }
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
        goto LABEL_32;
      }
      WdLogSingleEntry3(3LL, v13, v25[1], PairingAdapters);
      WdLogGlobalForLineNumber = 6367;
    }
    else
    {
      v7 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v25[0]);
      WdLogGlobalForLineNumber = 6373;
      v24 = -1073741811;
    }
LABEL_32:
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v29 >> 3;
      if ( v10 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        v20 = 0;
        v30 = 0;
        v10 = v28;
        while ( v20 < (unsigned int)v27 )
        {
          v18 = (_QWORD *)(v19 + 12LL * v20);
          if ( (unsigned __int64)(v18 + 1) > MmUserProbeAddress || v18 + 1 <= v18 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v18 = v10[v20++];
          v30 = v20;
        }
        v7 = v24;
      }
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, (unsigned __int64)v18);
  }
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v31);
  return (unsigned int)v7;
}
