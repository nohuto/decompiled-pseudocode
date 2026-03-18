/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402D5E6C
 * Callers:
 *     IsCurrentModeAdvancedColor @ 0x1402D5268 (IsCurrentModeAdvancedColor.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403B9F7C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        _QWORD *a1,
        int a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  __int64 v9; // rax
  VIDPN_MGR *v10; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  DMMVIDPNTARGET *v14; // rcx
  struct DMMVIDPNTARGETMODESET *v15; // rbx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 15407;
    return 3223191554LL;
  }
  v9 = a1[390];
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15422;
    return 3223191554LL;
  }
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 15436;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v20, *(_QWORD *)(v9 + 104));
  v21 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v10);
  auto_rc<DMMVIDPN const>::reset(&v21, (__int64)ClientCommittedVidPnRef);
  if ( !v21 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15453;
    v19 = -1071774884;
    goto LABEL_23;
  }
  v12 = *(_QWORD *)(v21 + 120);
  if ( v12 == v21 + 120 )
    goto LABEL_21;
  v13 = (_QWORD *)(v12 - 8);
  while ( v13 )
  {
    if ( *(_DWORD *)(v13[11] + 24LL) == a2 && *(_DWORD *)(v13[12] + 24LL) == a3 )
      break;
    v18 = v13[1];
    v13 = (_QWORD *)(v18 - 8);
    if ( v18 == v21 + 120 )
      v13 = 0LL;
  }
  if ( !v13 )
  {
LABEL_21:
    WdLogSingleEntry1(2LL, v21);
    WdLogGlobalForLineNumber = 15466;
LABEL_22:
    v19 = -1071774971;
LABEL_23:
    auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v20[0] + 40));
    return v19;
  }
  v14 = (DMMVIDPNTARGET *)v13[12];
  if ( !v14 )
  {
    WdLogSingleEntry1(2LL, v21);
    WdLogGlobalForLineNumber = 15473;
    goto LABEL_22;
  }
  v15 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v14);
  if ( !*((_QWORD *)v15 + 18) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15482;
  }
  v16 = *((_QWORD *)v15 + 18);
  a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v16 + 132);
  *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v16 + 136);
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v15 + 88));
  auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v20[0] + 40));
  return 0LL;
}
