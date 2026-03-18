/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14008D700
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14008D04C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a8)
{
  __int64 DxgkWin32kInterface; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  struct _LUID v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v16 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  v11 = (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, struct _LUID *, unsigned int *))(DxgkWin32kInterface + 552))(
          &v16,
          v17,
          &v16,
          &v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 13076;
  }
  else
  {
    v13 = DxDdGetDxgkWin32kInterface();
    v14 = (*(__int64 (__fastcall **)(struct _LUID, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, enum _D3DKMT_DISPLAY_TARGET_USAGE *))(v13 + 568))(
            v16,
            v17,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    v12 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 13091;
    }
  }
  return v12;
}
