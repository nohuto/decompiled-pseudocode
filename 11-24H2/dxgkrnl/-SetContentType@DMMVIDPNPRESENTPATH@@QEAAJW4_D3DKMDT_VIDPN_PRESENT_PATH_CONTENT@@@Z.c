/*
 * XREFs of ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x14008F120
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14008FA54 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x14025A678 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetContentType(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a2 == D3DKMDT_VPPC_GRAPHICS || a2 == D3DKMDT_VPPC_VIDEO || a2 == D3DKMDT_VPPC_NOTSPECIFIED )
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
  else
  {
    v2 = a2;
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 1028;
    WdLogSingleEntry1(3LL, v2);
    result = 3223192398LL;
    WdLogGlobalForLineNumber = 1038;
  }
  return result;
}
