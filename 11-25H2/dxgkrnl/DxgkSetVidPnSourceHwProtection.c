/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1401ADAB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct DXGPROCESS *Current; // rsi
  struct DXGADAPTER *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-E0h]
  char v27; // [rsp+60h] [rbp-D8h]
  DXGADAPTER *v28[2]; // [rsp+68h] [rbp-D0h] BYREF
  struct DXGADAPTER *v29; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v30[2]; // [rsp+80h] [rbp-B8h] BYREF
  int v31; // [rsp+88h] [rbp-B0h]
  _BYTE v32[144]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = (const void *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2130);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2130);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11374;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 11374LL, 0LL, 0LL, 0LL, 0LL);
LABEL_37:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v25);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v30 = 0LL;
  v31 = 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v30, v3, 0xCuLL);
  v29 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v28, v30[0], Current, &v29, 1);
  v5 = v29;
  if ( !v29 )
  {
    WdLogSingleEntry2(2LL, Current, v30[0]);
    WdLogGlobalForLineNumber = 11398;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v30[0],
      0LL,
      0LL,
      0LL);
LABEL_36:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v6);
    goto LABEL_37;
  }
  if ( !*((_QWORD *)v29 + 390) )
  {
    WdLogSingleEntry2(3LL, v29, -1073741811LL);
    WdLogGlobalForLineNumber = 11407;
    goto LABEL_36;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v29, 0LL);
  v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v32, v7 + 1, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( v30[1] >= *(_DWORD *)(*((_QWORD *)v5 + 390) + 96LL) )
    {
      WdLogSingleEntry2(3LL, v30[1], -1073741811LL);
      WdLogGlobalForLineNumber = 11427;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      goto LABEL_36;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0 )
    {
      *(_BYTE *)(3984LL * v30[1] + *(_QWORD *)(*((_QWORD *)v5 + 390) + 128LL) + 1124) = v31 != 0;
      v17 = *((_QWORD *)v5 + 390);
      if ( v31 )
      {
        *(_BYTE *)(v17 + 468) = 1;
      }
      else
      {
        *(_BYTE *)(v17 + 468) = 0;
        v18 = 0;
        v19 = *((_QWORD *)v5 + 390);
        while ( v18 < *(_DWORD *)(v19 + 96) )
        {
          if ( *(_BYTE *)(3984LL * v18 + *(_QWORD *)(v19 + 128) + 1124) )
          {
            *(_BYTE *)(v19 + 468) = 1;
            break;
          }
          ++v18;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v25);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741790LL);
      WdLogGlobalForLineNumber = 11434;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v25);
      return 3221225506LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 11418;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v25);
    return (unsigned int)v9;
  }
}
