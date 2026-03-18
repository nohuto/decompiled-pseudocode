/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1403946C0
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x140394550 (-ReleaseModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1403BE9CC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2)
{
  union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *p_AdditionalSignalInfo; // rdx
  char *v5; // r9
  char *v6; // r8
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rax
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 923;
    return 3223192337LL;
  }
  p_AdditionalSignalInfo = (union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo;
  if ( *(_DWORD *)&p_AdditionalSignalInfo->AdditionalSignalInfo != 305419896 )
  {
    WdLogSingleEntry1(2LL, p_AdditionalSignalInfo);
    WdLogGlobalForLineNumber = 937;
    return 3223192337LL;
  }
  v5 = *(char **)&a2[-1].WireFormatAndPreference.0;
  if ( v5 )
  {
    v6 = (char *)this + 48;
    v7 = (char *)*((_QWORD *)this + 6);
    if ( v7 == v6 || (v8 = v7 - 8) == 0LL )
    {
LABEL_10:
      WdLogSingleEntry2(2LL, p_AdditionalSignalInfo, this);
      result = 3223192368LL;
      WdLogGlobalForLineNumber = 953;
      return result;
    }
    while ( v8 != v5 )
    {
      v9 = (char *)*((_QWORD *)v8 + 1);
      v8 = v9 - 8;
      if ( v9 == v6 )
        v8 = 0LL;
      if ( !v8 )
        goto LABEL_10;
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(p_AdditionalSignalInfo);
  return 0LL;
}
