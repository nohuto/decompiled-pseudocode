/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1403E4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x140292040 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  DXGADAPTER *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int Value; // eax
  const wchar_t *v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 HighPart; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 VidPnSourceId; // [rsp+20h] [rbp-50h]
  __int64 LowPart; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-48h]
  int v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  char v29; // [rsp+60h] [rbp-10h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+40h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2129);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2129);
  if ( !a3 )
    goto LABEL_26;
  v30 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v30);
  v10 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 1747;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkWin32kSetPointerShape function.",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v27);
    }
    return 3223192359LL;
  }
  v11 = *((_QWORD *)v9 + 390);
  if ( !v11 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v26 = a1->LowPart;
    v23 = a1->HighPart;
    WdLogGlobalForLineNumber = 1754;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Adapter LUID (0x%I64x%08I64x) passed to DxgkWin32kSetPointerShape is not a display adapter",
      v23,
      v26,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  if ( a2->VidPnSourceId >= *(_DWORD *)(v11 + 96) )
  {
    WdLogSingleEntry1(2LL, a2->VidPnSourceId);
    VidPnSourceId = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 1762;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VidPn source id (0x%I64x) is invalid",
      VidPnSourceId,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_12;
  }
  Value = a2->Flags.Value;
  if ( Value >= 4 || (Value & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
    v16 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkWin32kSetPointerShape function: Adapter LUID: (0x%I64x%08I64x"
           ") VidpnSourceId: (0x%I64x).";
    WdLogGlobalForLineNumber = 1768;
    goto LABEL_25;
  }
  if ( (Value & 1) == 0 )
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
    v16 = L"Cannot send shape if cursor is not visible: Adapter LUID: (0x%I64x%08I64x) VidpnSourceId: (0x%I64x).";
    WdLogGlobalForLineNumber = 1774;
LABEL_25:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      v16,
      a1->HighPart,
      a1->LowPart,
      a2->VidPnSourceId,
      0LL,
      0LL);
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v27);
    return 3221225485LL;
  }
  v17 = DxgkSetPointerShape(v10, a2, a3, a3->Width, a3->Height, a4, 1, 1);
  DXGADAPTER::ReleaseReference(v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v27);
  return v17;
}
