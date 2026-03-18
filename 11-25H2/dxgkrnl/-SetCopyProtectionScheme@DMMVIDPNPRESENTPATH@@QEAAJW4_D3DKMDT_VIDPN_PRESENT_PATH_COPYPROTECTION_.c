/*
 * XREFs of ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x14005C0DC
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14008E7C4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x14025CBD0 (-RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1403114BC (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 * Callees:
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x14005C62C (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2;
  if ( a2 == D3DKMDT_VPPMT_NOPROTECTION || (unsigned int)(a2 - 2) < 2 )
  {
    if ( DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(this, a2) )
    {
      *((_DWORD *)this + 43) = v2;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(
        7LL,
        v2,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      result = 3223192326LL;
      WdLogGlobalForLineNumber = 1113;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 1075;
    WdLogSingleEntry3(
      3LL,
      v2,
      *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
    result = 3223192399LL;
    WdLogGlobalForLineNumber = 1105;
  }
  return result;
}
