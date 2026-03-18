/*
 * XREFs of ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x14026677C
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x140380C3C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1400640F4 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTION@@@Z @ 0x1401A8AD8 (-DdiSetTargetAnalogCopyProtection@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETANALOGCOPYPROTECTI.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  ADAPTER_DISPLAY *v4; // rdi
  __int64 v5; // r8
  D3DDDI_VIDEO_PRESENT_TARGET_ID v6; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  _DXGKARG_SETTARGETANALOGCOPYPROTECTION v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v4 = *(ADAPTER_DISPLAY **)(v3 + 8);
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 576;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 216LL) + 64LL) + 40LL) + 28LL) < 0x700Au )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 577;
  }
  if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v4, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v6 = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v11.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  v7 = *((_DWORD *)this + 43);
  v11.TargetId = v6;
  v11.CopyProtectionType = v7;
  if ( v7 == D3DKMDT_VPPMT_MACROVISION_APSTRIGGER )
    v11.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    v11.APSTriggerBits = 0;
  v8 = ADAPTER_DISPLAY::DdiSetTargetAnalogCopyProtection(v4, &v11, v5);
  v9 = v8;
  if ( v8 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 603;
    return result;
  }
  if ( v8 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v8);
  result = v9;
  WdLogGlobalForLineNumber = 609;
  return result;
}
