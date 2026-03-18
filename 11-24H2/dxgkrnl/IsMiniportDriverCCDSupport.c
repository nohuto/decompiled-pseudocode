/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x140360BC4
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1403615D0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  BOOL v1; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v4; // rax
  DXGADAPTER *v5; // rcx
  __int64 v6; // rax
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 LowPart; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v10);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)v4 + 390);
    if ( v6 )
      v1 = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 3004LL) >= 1105;
    DXGADAPTER::ReleaseReference(v5);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 9034;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed in adapter ptr to query driver Ccd support, returnign on support (0x%I64x::0x%I64x).",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
  }
  return v1;
}
