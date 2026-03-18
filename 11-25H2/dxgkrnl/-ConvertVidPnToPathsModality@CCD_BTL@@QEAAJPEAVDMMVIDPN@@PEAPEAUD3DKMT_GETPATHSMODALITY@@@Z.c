/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140262154
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401BFF18 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1402642A0 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x140261FDC (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140371650 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct D3DKMT_GETPATHSMODALITY **a3,
        __int64 a4)
{
  unsigned __int16 v4; // bx
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // r14d
  int *v15; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int16 v16; // [rsp+30h] [rbp-41h]
  int v17; // [rsp+38h] [rbp-39h] BYREF
  __int128 v18; // [rsp+40h] [rbp-31h]
  __int64 v19; // [rsp+50h] [rbp-21h]
  __int16 v20; // [rsp+58h] [rbp-19h]
  __int128 v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+70h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v23; // [rsp+78h] [rbp+7h]
  bool v24; // [rsp+80h] [rbp+Fh]
  int v25; // [rsp+84h] [rbp+13h]
  int v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+8Ch] [rbp+1Bh]
  __int64 v28; // [rsp+98h] [rbp+27h]

  v4 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1316;
  }
  v8 = *((unsigned __int16 *)a2 + 68);
  v9 = *((unsigned __int16 *)a2 + 68);
  if ( (unsigned __int16)v8 <= 1u )
    v9 = 1;
  v10 = (unsigned int)(296 * (v9 - 1) + 352);
  v11 = operator new[](v10, 0x63644356u, 256LL, a4);
  *a3 = (struct D3DKMT_GETPATHSMODALITY *)v11;
  if ( v11 )
  {
    *(_WORD *)(v11 + 22) = v8;
    if ( (_WORD)v8 )
    {
      v23 = *a3;
      v17 = 0;
      v24 = v23 == 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v20 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v25 = 0;
      v26 = 1;
      v27 = 0LL;
      v28 = 0LL;
      v15 = &v17;
      v16 = 0;
      v13 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v15, a2);
      v14 = v13;
      if ( v13 >= 0 )
      {
        if ( v23 )
          v4 = *((_WORD *)v23 + 10);
        if ( v4 < v16 )
          v14 = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v17, 1);
      }
      else
      {
        WdLogSingleEntry3(2LL, v13, a2, v8);
        WdLogGlobalForLineNumber = 1359;
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v17);
      return v14;
    }
    else
    {
      WdLogSingleEntry3(7LL, this, a2, a3);
      result = 0LL;
      WdLogGlobalForLineNumber = 1345;
    }
  }
  else
  {
    WdLogSingleEntry3(6LL, (unsigned int)v10, a2, v8);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1333;
  }
  return result;
}
