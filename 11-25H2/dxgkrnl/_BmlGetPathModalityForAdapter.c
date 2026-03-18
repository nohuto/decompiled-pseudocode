/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1402C3BBC
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1402C3AB0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1402C1574 (ConvertDMMScalingToGdiScaling.c)
 *     _BmlLogDiagnosticsPacket @ 0x1402C2518 (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1402C28F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     FillDevmodeFromVidPn @ 0x1402C2958 (FillDevmodeFromVidPn.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1402C2A20 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1402C35C8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1402C5BC0 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403C86BC (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1403F8958 (__BmlGetPathModeListForAdapter_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rdi
  __int64 v14; // rax
  struct VIDPN_MGR *v15; // r15
  int ClientVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  int v22; // r14d
  __int64 v23; // rbx
  int v24; // r12d
  int v25; // eax
  __int64 v27; // rdi
  unsigned int i; // r12d
  __int64 v29; // r15
  __int64 v30; // r9
  _DWORD *v31; // r13
  __int64 v32; // rax
  bool v33; // zf
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  __int16 v37; // [rsp+20h] [rbp-30h]
  __int64 v38; // [rsp+A0h] [rbp+50h] BYREF
  struct DMMVIDPN *v39; // [rsp+A8h] [rbp+58h] BYREF

  v9 = a9;
  *(_BYTE *)a9 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6146;
  }
  v14 = *(_QWORD *)(a4 + 3120);
  a9 = 0LL;
  v15 = *(struct VIDPN_MGR **)(v14 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v38, (__int64)v15);
  v39 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15);
  v21 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 6170;
    goto LABEL_45;
  }
  v22 = a6;
  v37 = a2;
  v23 = (__int64)v39;
  v24 = BmlPreparePathOrderAndVidPn(&a9, v39, a3, a1, v37, a6, a7);
  if ( v24 < 0 )
  {
LABEL_31:
    if ( v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 24));
    goto LABEL_14;
  }
  v24 = BmlFunctionalizeVidPn(a9, (struct DMMVIDPN *)v23);
  if ( v24 < 0 )
  {
    v33 = a5 == 0;
    *(_BYTE *)v9 = 1;
    if ( !v33 )
    {
      if ( !v23 )
        goto LABEL_14;
      v36 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v15, v22, v23, (unsigned __int8 *)a9);
      if ( v36 < 0 )
      {
        WdLogSingleEntry3(3LL, v23, a9, v36);
        WdLogGlobalForLineNumber = 6202;
      }
    }
    goto LABEL_31;
  }
  v24 = BmlPickColorSpaceAndWireFormat((unsigned __int8 *)a9, v22, v23);
  if ( v24 < 0 )
  {
    v33 = a5 == 0;
    *(_BYTE *)v9 = 1;
    if ( !v33 )
    {
      if ( !v23 )
        goto LABEL_14;
      v35 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v15, v22, v23, (unsigned __int8 *)a9);
      if ( v35 < 0 )
      {
        WdLogSingleEntry3(3LL, v23, a9, v35);
        WdLogGlobalForLineNumber = 6224;
      }
    }
    goto LABEL_31;
  }
  if ( a5 )
  {
    if ( v23 )
    {
      if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v23) )
      {
        v25 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v15, v22, v23, (unsigned __int8 *)a9);
        if ( v25 < 0 )
        {
          WdLogSingleEntry3(3LL, v23, a9, v25);
          WdLogGlobalForLineNumber = 6243;
        }
      }
    }
  }
  if ( !a8 )
  {
    v21 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v23, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v21 < 0 )
    {
LABEL_25:
      if ( v23 )
        ReferenceCounted::Release((ReferenceCounted *)(v23 + 24));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v38 + 40));
      if ( a9 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a9);
      return (unsigned int)v21;
    }
    v27 = *(_QWORD *)(a4 + 412);
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 20); ++i )
    {
      v29 = 296LL * i;
      if ( v27 == *(_QWORD *)(v29 + a3 + 72) && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, i) )
      {
        v31 = *(_DWORD **)(v29 + a3 + 304);
        if ( !v31 )
        {
          v32 = operator new(0xF4uLL, 0x63644356u, 256LL, v30);
          *(_QWORD *)(v29 + a3 + 304) = v32;
          v31 = (_DWORD *)v32;
          if ( !v32 )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 6277;
            v21 = -1073741670;
            break;
          }
        }
        v21 = FillDevmodeFromVidPn(v23, *(_DWORD *)(v29 + a3 + 80), v31);
        if ( v21 < 0 )
          goto LABEL_25;
        v34 = *(_DWORD *)(v29 + a3 + 196);
        v31[58] = v34;
        ConvertDMMScalingToGdiScaling(v34, v31 + 59);
        if ( (*(_DWORD *)(v29 + a3 + 56) & 0x20000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v29 + a3 + 304) + 172LL) = *(_DWORD *)(v29 + a3 + 208);
          *(_DWORD *)(*(_QWORD *)(v29 + a3 + 304) + 176LL) = *(_DWORD *)(v29 + a3 + 212);
        }
      }
    }
LABEL_45:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v39, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v38 + 40));
    _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(&a9);
    return (unsigned int)v21;
  }
  *a8 = v23 & -(__int64)(v23 != -88);
LABEL_14:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v38 + 40));
  if ( a9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a9);
  return (unsigned int)v24;
}
