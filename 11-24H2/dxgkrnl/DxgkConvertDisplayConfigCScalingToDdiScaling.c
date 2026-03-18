/*
 * XREFs of DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1403615D0
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x140361700 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402D71F0 (DxgkGetAdapterDefaultScaling.c)
 *     IsMiniportDriverCCDSupport @ 0x140360BC4 (IsMiniportDriverCCDSupport.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(
        int a1,
        struct _LUID *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx

  v3 = 0;
  switch ( a1 )
  {
    case 1:
      goto LABEL_9;
    case 2:
      *a3 = D3DKMDT_VPPS_CENTERED;
      return v3;
    case 3:
      *a3 = D3DKMDT_VPPS_STRETCHED;
      return v3;
    case 4:
      if ( IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        return v3;
      }
LABEL_9:
      DxgkGetAdapterDefaultScaling(a2, a3);
      return v3;
    case 5:
      if ( IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = D3DKMDT_VPPS_CUSTOM;
        return v3;
      }
      goto LABEL_9;
    case 128:
      *a3 = D3DKMDT_VPPS_RESERVED1;
      break;
    default:
      v7 = a1;
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 9107;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Unknown DISPLAYCONFIG_SCALING 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741811;
  }
  return v3;
}
