/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1402642A0
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x140264424 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140262154 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140379754 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct DMMVIDPN *v6; // rbx
  int v7; // ebx
  CCD_BTL *v8; // rax
  __int64 v9; // r9
  CCD_TOPOLOGY *v10; // rcx
  int v12; // [rsp+20h] [rbp-39h] BYREF
  __int128 v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+38h] [rbp-21h]
  __int16 v15; // [rsp+40h] [rbp-19h]
  __int128 v16; // [rsp+48h] [rbp-11h]
  __int64 v17; // [rsp+58h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v18; // [rsp+60h] [rbp+7h]
  bool v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  int v21; // [rsp+70h] [rbp+17h]
  __int64 v22; // [rsp+74h] [rbp+1Bh]
  __int64 v23; // [rsp+80h] [rbp+27h]
  struct D3DKMT_GETPATHSMODALITY *v24; // [rsp+C8h] [rbp+6Fh] BYREF
  struct DMMVIDPN *v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 390) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v4);
  v5 = *(_QWORD *)(v4 + 320);
  v25 = 0LL;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
  auto_rc<DMMVIDPN>::reset((__int64 *)&v25, *(_QWORD *)(v4 + 320));
  v6 = v25;
  if ( v25 )
  {
    v24 = 0LL;
    v8 = CCD_BTL::Global();
    v7 = CCD_BTL::ConvertVidPnToPathsModality(v8, v6, &v24, v9);
    if ( v7 >= 0 )
    {
      v10 = *this;
      v12 = 0;
      v13 = 0LL;
      v14 = 0LL;
      v19 = v24 == 0LL;
      v15 = 0;
      v16 = 0LL;
      v17 = 0LL;
      v18 = v24;
      v20 = 0;
      v21 = 1;
      v22 = 0LL;
      v23 = 0LL;
      v7 = CCD_TOPOLOGY::CopyInheritScope(v10, (const struct CCD_TOPOLOGY *)&v12);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
      if ( v7 >= 0 )
      {
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v12);
        v7 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, a2);
        WdLogGlobalForLineNumber = 2497;
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v12);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      WdLogGlobalForLineNumber = 2486;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 2476;
    v7 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v25, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
  return (unsigned int)v7;
}
