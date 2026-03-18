/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1401C46F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1402519C4 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  struct DXGADAPTER *v14; // rsi
  int PairingAdapters; // eax
  struct DXGADAPTER *v16; // rsi
  int v17; // eax
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  _QWORD *v19; // rdx
  __int64 v20; // r10
  unsigned int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+50h] [rbp-148h]
  unsigned int v26[4]; // [rsp+58h] [rbp-140h] BYREF
  enum _D3DDDIFORMAT v27[4]; // [rsp+68h] [rbp-130h]
  unsigned __int64 v28; // [rsp+78h] [rbp-120h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v29; // [rsp+80h] [rbp-118h]
  unsigned __int64 v30; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v31; // [rsp+90h] [rbp-108h]
  int v32; // [rsp+98h] [rbp-100h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-F8h]
  char v34; // [rsp+A8h] [rbp-F0h]
  struct DXGADAPTER *v35; // [rsp+B0h] [rbp-E8h] BYREF
  struct DXGADAPTER *v36[2]; // [rsp+B8h] [rbp-E0h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp-D0h] BYREF
  DXGADAPTER *v38[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v39[144]; // [rsp+E0h] [rbp-B8h] BYREF

  v30 = a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2019);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2019);
  Current = DXGPROCESS::GetCurrent();
  v36[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 6117;
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v9,
      0LL,
      0LL,
      0LL);
    goto LABEL_44;
  }
  *(_OWORD *)v26 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  v7 = 0;
  v10 = 0LL;
  v29 = 0LL;
  v11 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v26, v11, 0x28uLL);
  if ( *(_QWORD *)&v27[2] && (_DWORD)v28 )
  {
    v13 = 8LL * (unsigned int)v28;
    if ( !is_mul_ok((unsigned int)v28, 8uLL) )
      v13 = -1LL;
    v10 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v13, 0x4B677844u, 256LL, v12);
    v29 = v10;
    if ( !v10 )
    {
      v7 = -1073741801;
      WdLogSingleEntry4(6LL, -1073741801LL, v26[0], v26[1], (unsigned int)v28);
      WdLogGlobalForLineNumber = 6136;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"0x%I64x 0x%I64x 0x%I64x fails to allocate array of 0x%I64d D3DDDI_MULTISAMPLINGMETHOD",
        -1073741801LL,
        v26[0],
        v26[1],
        (unsigned int)v28,
        0LL);
    }
  }
  if ( v7 >= 0 )
  {
    v35 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v38, v26[0], Current, &v35, 1);
    v30 = 0LL;
    v14 = v35;
    if ( v35 )
    {
      v36[0] = 0LL;
      v37 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v35, v26[1], 0LL, 0LL, v36, &v37, 0);
      v7 = PairingAdapters;
      v25 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v16 = v36[0];
        if ( !v36[0] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6168;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 6168LL, 0LL, 0LL, 0LL, 0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v16, 0LL);
        DXGADAPTER::ReleaseReference(v16);
        v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
        v7 = v17;
        v25 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry4(7LL, v17, Current, v26[0], v16);
          WdLogGlobalForLineNumber = 6227;
        }
        else
        {
          if ( *(_DWORD *)(*((_QWORD *)v16 + 390) + 96LL) > v26[1] )
          {
            if ( *((_QWORD *)v16 + 391) )
            {
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v16,
                                                              v26[1],
                                                              v26[2],
                                                              v26[3],
                                                              v27[0],
                                                              (unsigned int)v28,
                                                              v10,
                                                              &v30);
              v7 = MultisamplingMethodSetFromClientVidPnSource;
              v25 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                WdLogSingleEntry4(3LL, (unsigned int)v28, v26[1], v16, MultisamplingMethodSetFromClientVidPnSource);
                WdLogGlobalForLineNumber = 6213;
                WdLogSingleEntry5(3LL, v26[1], v16, v26[2], v26[3], v27[0]);
                WdLogGlobalForLineNumber = 6220;
              }
              goto LABEL_29;
            }
            v7 = -1073741637;
            WdLogSingleEntry2(7LL, v16, -1073741637LL);
            WdLogGlobalForLineNumber = 6192;
          }
          else
          {
            v7 = -1073741811;
            WdLogSingleEntry3(3LL, -1073741811LL, v16, v26[1]);
            WdLogGlobalForLineNumber = 6184;
          }
          v25 = v7;
        }
LABEL_29:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
        goto LABEL_32;
      }
      WdLogSingleEntry3(3LL, v14, v26[1], PairingAdapters);
      WdLogGlobalForLineNumber = 6235;
    }
    else
    {
      v7 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v26[0]);
      WdLogGlobalForLineNumber = 6241;
      v25 = -1073741811;
    }
LABEL_32:
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v30 >> 3;
      if ( v10 )
      {
        v20 = *(_QWORD *)(a1 + 24);
        v21 = 0;
        v31 = 0;
        v10 = v29;
        while ( v21 < (unsigned int)v28 )
        {
          v19 = (_QWORD *)(v20 + 12LL * v21);
          if ( (unsigned __int64)(v19 + 1) > MmUserProbeAddress || v19 + 1 <= v19 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v19 = v10[v21++];
          v31 = v21;
        }
        v7 = v25;
      }
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v38, (unsigned __int64)v19);
  }
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v32);
  return (unsigned int)v7;
}
