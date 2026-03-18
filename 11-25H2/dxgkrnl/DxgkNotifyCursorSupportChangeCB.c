/*
 * XREFs of DxgkNotifyCursorSupportChangeCB @ 0x1401E4EA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 */

__int64 __fastcall DxgkNotifyCursorSupportChangeCB(__int64 *a1)
{
  __int64 v2; // rax
  const wchar_t *v3; // r9
  __int64 DxgAdapter; // rax
  struct _LUID *v6; // rdx
  DXGADAPTER *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r8
  _OWORD v11[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2225;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2225LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    v2 = 2229LL;
    v3 = L"pArgs(NULL) in DxgkNotifyCursorSupportChangeCB function";
    WdLogGlobalForLineNumber = 2229;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v3, v2, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(*a1);
  v7 = (DXGADAPTER *)DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, *a1);
    v2 = *a1;
    v3 = L"Invalid hAdapter(0x%I64x) in DxgkNotifyCursorSupportChangeCB function.";
    WdLogGlobalForLineNumber = 2236;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(DxgAdapter + 3120);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 2242;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Non-display adapter (0x%I64x) in DxgkNotifyCursorSupportChangeCB function",
      (__int64)v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v9 = *((_DWORD *)a1 + 2);
  if ( v9 >= *(_DWORD *)(v8 + 96) )
  {
    WdLogSingleEntry1(2LL, v9);
    v2 = *((unsigned int *)a1 + 2);
    v3 = L"Invalid VidPnSourceId : (0x%I64x) in DxgkNotifyCursorSupportChangeCB function.";
    WdLogGlobalForLineNumber = 2248;
    goto LABEL_5;
  }
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[0]) = 13;
  DXGADAPTER::IsAdapterSessionized(v7, v6, 0LL, &v12);
  return SMgrGdiCallout(v11, v12, v10, 0LL, 0LL, 0LL);
}
