/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x14036D9B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v13; // rdx
  char *v14; // rdx
  _QWORD *v15; // rdx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+20h] [rbp-20h] BYREF
  __int64 v32; // [rsp+28h] [rbp-18h]
  char v33; // [rsp+30h] [rbp-10h]

  v31 = -1;
  v5 = (unsigned int)a2;
  v32 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7043);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 7043);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = v5;
  v12[5] = a3;
  v12[6] = a4;
  WdLogGlobalForLineNumber = 3379;
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, v5, this);
    WdLogGlobalForLineNumber = 3387;
    goto LABEL_35;
  }
  if ( !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v5, this);
    WdLogGlobalForLineNumber = 3396;
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v31);
    return 3221225485LL;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    v13 = this[15];
    if ( v13 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) || (v14 = (char *)v13 - 8) == 0LL )
    {
LABEL_28:
      WdLogSingleEntry2(2LL, v5, this);
      WdLogGlobalForLineNumber = 3429;
    }
    else
    {
      while ( *(_DWORD *)(*((_QWORD *)v14 + 11) + 24LL) != (_DWORD)v5 )
      {
        v26 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 1);
        v14 = (char *)v26 - 8;
        if ( v26 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_28;
      }
    }
    v15 = (_QWORD *)((char *)this[38] + 24);
    v16 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)*((_QWORD *)this[6] + 54);
    if ( (_QWORD *)*v15 != v15 )
    {
      v17 = *v15 - 8LL;
      if ( *v15 != 8LL )
      {
        while ( *(_DWORD *)(v17 + 24) != (_DWORD)v5 )
        {
          v25 = *(_QWORD **)(v17 + 8);
          v17 = (__int64)(v25 - 1);
          if ( v25 == v15 )
            v17 = 0LL;
          if ( !v17 )
            goto LABEL_17;
        }
        v18 = *(_QWORD *)(v17 + 104);
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
          v19 = *(_QWORD *)(v17 + 104);
          if ( v19 )
          {
LABEL_15:
            *a3 = v19 & -(__int64)(v19 != -137);
            *a4 = v16;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
            if ( v33 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v31);
            }
            return 0LL;
          }
        }
        else
        {
          v19 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3465;
        goto LABEL_15;
      }
    }
LABEL_17:
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 3456;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v31);
    return 3223192324LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 3417;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v31);
    return 3223192323LL;
  }
}
