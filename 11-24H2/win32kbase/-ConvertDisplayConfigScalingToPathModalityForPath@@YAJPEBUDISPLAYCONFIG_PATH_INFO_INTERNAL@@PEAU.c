/*
 * XREFs of ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x14008D810
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14008D04C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14015C734 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ConvertDisplayConfigScalingToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        bool *a3)
{
  _DWORD *v6; // rdi
  __int64 DxgkWin32kInterface; // rax

  if ( (*(_DWORD *)a1 & 0x10000LL) == 0 )
    return 0LL;
  v6 = (_DWORD *)((char *)a2 + 140);
  if ( *((_DWORD *)a1 + 28) == 128 )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      *v6 = 255;
    }
    else
    {
      *v6 = 253;
      if ( a3 )
        *a3 = 1;
    }
    goto LABEL_4;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  if ( (*(int (__fastcall **)(_QWORD, char *, _DWORD *))(DxgkWin32kInterface + 320))(
         *((unsigned int *)a1 + 28),
         (char *)a2 + 16,
         v6) >= 0 )
  {
LABEL_4:
    *((_DWORD *)a2 + 34) = *v6;
    *(_QWORD *)a2 |= 0x40000000000uLL;
    return 0LL;
  }
  return 3221225485LL;
}
