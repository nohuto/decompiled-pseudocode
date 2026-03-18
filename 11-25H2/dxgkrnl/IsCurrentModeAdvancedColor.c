/*
 * XREFs of IsCurrentModeAdvancedColor @ 0x1402D5268
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402D57C8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402D5E6C (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 */

__int64 __fastcall IsCurrentModeAdvancedColor(
        int *a1,
        unsigned int a2,
        _DWORD *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4,
        char *a5,
        bool *a6)
{
  char *v6; // r15
  char v7; // si
  bool *v8; // r12
  __int64 v10; // r14
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v14; // r13
  __int64 v15; // r13
  int CurrentWireFormatAndColorSpace; // eax
  __int64 v17; // rbx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v19; // eax
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v24; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-34h]

  v6 = a5;
  v7 = 0;
  v8 = a6;
  v10 = a2;
  LODWORD(a6) = 0;
  *a5 = 0;
  *v8 = 0;
  v24 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
  LODWORD(a5) = 0;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, (unsigned int *)&a5);
  v14 = SourceConnectedToTargetInClientVidPn;
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    WdLogSingleEntry4(2LL, a1[104], (unsigned int)a1[103], v10, SourceConnectedToTargetInClientVidPn);
    v23 = (unsigned int)a1[103];
    v21 = a1[104];
    WdLogGlobalForLineNumber = 4910;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DmmGetSourceConnectedToTargetInClientVidPn() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
      v21,
      v23,
      v10,
      v14,
      0LL);
    return (unsigned int)v14;
  }
  else
  {
    v15 = (unsigned int)a5;
    CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                       a1,
                                       (unsigned int)a5,
                                       v10,
                                       (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)&a6,
                                       &v24);
    v25 = CurrentWireFormatAndColorSpace;
    if ( CurrentWireFormatAndColorSpace >= 0 )
    {
      if ( a3 )
        *a3 = (_DWORD)a6;
      v19 = v24;
      if ( a4 )
        *a4 = v24;
      if ( v19 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS
        || v19 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020 )
      {
        v7 = 1;
      }
      *v6 = v7;
      *v8 = v19 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG;
      return 0LL;
    }
    else
    {
      v17 = CurrentWireFormatAndColorSpace;
      WdLogSingleEntry5(2LL, a1[104], (unsigned int)a1[103], (unsigned int)v15, v10, CurrentWireFormatAndColorSpace);
      v22 = (unsigned int)a1[103];
      v20 = a1[104];
      WdLogGlobalForLineNumber = 4923;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DmmGetCurrentWireFormatAndColorSpace() failed on adapter:0x%I64x%08I64x source:0x%I64x target:0x%I64x (Status = 0x%I64x).",
        v20,
        v22,
        v15,
        v10,
        v17);
      return v25;
    }
  }
}
