/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1403635A4
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x140363498 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x14031638C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x140361440 (ConvertDMMScalingToGdiScaling.c)
 *     _BmlLogDiagnosticsPacket @ 0x1403623E8 (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403627C0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     FillDevmodeFromVidPn @ 0x140362828 (FillDevmodeFromVidPn.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1403628F0 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140364BA4 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x140365490 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403BCCA8 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1403F2748 (__BmlGetPathModeListForAdapter_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rdi
  __int64 v14; // rax
  struct _KTHREAD **v15; // r15
  int ClientVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  unsigned int v22; // r14d
  __int64 v23; // rbx
  int v24; // r12d
  int v25; // eax
  __int64 v27; // rdi
  unsigned int i; // r12d
  __int64 v29; // r15
  _DWORD *v30; // r13
  __int64 v31; // rax
  bool v32; // zf
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  __int16 v36; // [rsp+20h] [rbp-30h]
  __int64 v37; // [rsp+A0h] [rbp+50h] BYREF
  struct DMMVIDPN *v38; // [rsp+A8h] [rbp+58h] BYREF

  v9 = a9;
  *(_BYTE *)a9 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6188;
  }
  v14 = *(_QWORD *)(a4 + 3120);
  a9 = 0LL;
  v15 = *(struct _KTHREAD ***)(v14 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, (__int64)v15);
  v38 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15, (__int64 *)&v38);
  v21 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 6212;
    goto LABEL_45;
  }
  v22 = a6;
  v36 = a2;
  v23 = (__int64)v38;
  v24 = BmlPreparePathOrderAndVidPn(&a9, v38, a3, a1, v36, a6, a7);
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
    v32 = a5 == 0;
    *(_BYTE *)v9 = 1;
    if ( !v32 )
    {
      if ( !v23 )
        goto LABEL_14;
      v35 = BmlLogDiagnosticsPacket(v15, v22, v23, (unsigned __int8 *)a9);
      if ( v35 < 0 )
      {
        WdLogSingleEntry3(3LL, v23, a9, v35);
        WdLogGlobalForLineNumber = 6244;
      }
    }
    goto LABEL_31;
  }
  v24 = BmlPickColorSpaceAndWireFormat(a9, v22, v23);
  if ( v24 < 0 )
  {
    v32 = a5 == 0;
    *(_BYTE *)v9 = 1;
    if ( !v32 )
    {
      if ( !v23 )
        goto LABEL_14;
      v34 = BmlLogDiagnosticsPacket(v15, v22, v23, (unsigned __int8 *)a9);
      if ( v34 < 0 )
      {
        WdLogSingleEntry3(3LL, v23, a9, v34);
        WdLogGlobalForLineNumber = 6266;
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
        v25 = BmlLogDiagnosticsPacket(v15, v22, v23, (unsigned __int8 *)a9);
        if ( v25 < 0 )
        {
          WdLogSingleEntry3(3LL, v23, a9, v25);
          WdLogGlobalForLineNumber = 6285;
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
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
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
        v30 = *(_DWORD **)(v29 + a3 + 304);
        if ( !v30 )
        {
          v31 = operator new(0xF4uLL, 0x63644356u, 256LL);
          *(_QWORD *)(v29 + a3 + 304) = v31;
          v30 = (_DWORD *)v31;
          if ( !v31 )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 6319;
            v21 = -1073741670;
            break;
          }
        }
        v21 = FillDevmodeFromVidPn(v23, *(_DWORD *)(v29 + a3 + 80), v30);
        if ( v21 < 0 )
          goto LABEL_25;
        v33 = *(_DWORD *)(v29 + a3 + 196);
        v30[58] = v33;
        ConvertDMMScalingToGdiScaling(v33, v30 + 59);
        if ( (*(_DWORD *)(v29 + a3 + 56) & 0x20000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v29 + a3 + 304) + 172LL) = *(_DWORD *)(v29 + a3 + 208);
          *(_DWORD *)(*(_QWORD *)(v29 + a3 + 304) + 176LL) = *(_DWORD *)(v29 + a3 + 212);
        }
      }
    }
LABEL_45:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v38, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
    _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(&a9);
    return (unsigned int)v21;
  }
  *a8 = v23 & -(__int64)(v23 != -88);
LABEL_14:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
  if ( a9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a9);
  return (unsigned int)v24;
}
