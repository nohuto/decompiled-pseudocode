/*
 * XREFs of DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1402C1700
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1402C1830 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     IsMiniportDriverCCDSupport @ 0x1402C0CF8 (IsMiniportDriverCCDSupport.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402E8C80 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(int a1, struct _LUID *a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v6; // r9
  __int64 v8; // rbx

  v3 = 0;
  v6 = (unsigned int)(a1 - 1);
  switch ( a1 )
  {
    case 1:
      goto LABEL_9;
    case 2:
      *a3 = 2;
      return v3;
    case 3:
      *a3 = 3;
      return v3;
    case 4:
      if ( IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 4;
        return v3;
      }
LABEL_9:
      DxgkGetAdapterDefaultScaling(a2, a3, a3, v6);
      return v3;
    case 5:
      if ( IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 5;
        return v3;
      }
      goto LABEL_9;
    case 128:
      *a3 = 253;
      break;
    default:
      v8 = a1;
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 9098;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unknown DISPLAYCONFIG_SCALING 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741811;
  }
  return v3;
}
