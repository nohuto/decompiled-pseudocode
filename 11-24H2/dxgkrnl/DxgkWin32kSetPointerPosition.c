/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1403C0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x140296DA0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  unsigned int v3; // r14d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // rsi
  __int64 v9; // rax
  unsigned int Value; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 HighPart; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-50h]
  __int64 v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-50h]
  __int64 LowPart; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-48h]
  __int64 VidPnSourceId; // [rsp+30h] [rbp-40h]
  int v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  char v29; // [rsp+60h] [rbp-10h]
  unsigned __int64 v30; // [rsp+90h] [rbp+20h] BYREF

  v27 = -1;
  v3 = a3;
  v28 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2128);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2128);
  v30 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v30);
  v8 = v7;
  if ( v7 )
  {
    v9 = *((_QWORD *)v7 + 390);
    if ( !v9 )
    {
      WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
      LowPart = a1->LowPart;
      HighPart = a1->HighPart;
      WdLogGlobalForLineNumber = 2189;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Adapter LUID (0x%I64x%08I64x) passed to DxgkWin32kSetPointerPosition is not a display adapter",
        HighPart,
        LowPart,
        0LL,
        0LL,
        0LL);
LABEL_11:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v27);
      return 3221225485LL;
    }
    if ( a2->VidPnSourceId < *(_DWORD *)(v9 + 96) )
    {
      Value = a2->Flags.Value;
      if ( Value < 4 && (Value & 2) == 0 )
      {
        v11 = DxgkSetPointerPosition(v8, a2, v3, 1, 1);
        DXGADAPTER::ReleaseReference(v8);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v27);
        }
        return v11;
      }
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
      VidPnSourceId = a2->VidPnSourceId;
      v24 = a1->LowPart;
      v20 = a1->HighPart;
      WdLogGlobalForLineNumber = 2203;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkWin32kSetPointerPosition function: Adapter LUID: (0x%I64x%08I64"
         "x) VidpnSourceId: (0x%I64x).",
        v20,
        v24,
        VidPnSourceId,
        0LL,
        0LL);
      goto LABEL_11;
    }
    WdLogSingleEntry1(2LL, a2->VidPnSourceId);
    v22 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 2197;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VidPn source id (0x%I64x) is invalid",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v25 = a1->LowPart;
    v21 = a1->HighPart;
    WdLogGlobalForLineNumber = 2182;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkWin32kSetPointerPosition function.",
      v21,
      v25,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v27);
  return 3223192359LL;
}
