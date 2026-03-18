/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x14040205C
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140343FDC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x14025C1EC (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        struct D3DKMDT_HVIDPN__ *a4,
        unsigned int *a5)
{
  char *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  VIDPN_MGR *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned __int64 v13; // rbp
  DMMVIDPNTOPOLOGY *v14; // r15
  __int64 v15; // r14
  unsigned int v16; // eax
  int NumPathsFromSource; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v22; // ecx
  unsigned __int16 v23; // ax
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v27; // [rsp+40h] [rbp-58h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v28; // [rsp+44h] [rbp-54h]
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v30[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v31; // [rsp+A0h] [rbp+8h]

  v6 = (char *)a1 + 3120;
  v7 = a3;
  LODWORD(v8) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14608;
  }
  v9 = *(VIDPN_MGR **)(*(_QWORD *)v6 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v9);
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a4);
  v11 = v10;
  if ( v10 )
  {
    if ( *(VIDPN_MGR **)(v10 + 48) == v9 )
    {
      v13 = 0LL;
      v14 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
      while ( v13 < v7 )
      {
        v30[0] = 0LL;
        v27 = 0;
        v15 = a2[v13];
        v16 = a2[v13];
        if ( v13 )
          v16 = v8;
        v8 = v16;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v14, a2[v13], v30);
        if ( NumPathsFromSource < 0 )
        {
          if ( NumPathsFromSource == -1071774919 )
          {
            v12 = -1073741811;
            WdLogSingleEntry3(2LL, v15, v11, -1073741811LL);
            WdLogGlobalForLineNumber = 14671;
            goto LABEL_34;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14664;
        }
        if ( v30[0] > 1 )
        {
          v12 = -1073741811;
          WdLogSingleEntry4(2LL, v15, v30[0], v11, -1073741811LL);
          WdLogGlobalForLineNumber = 14681;
          goto LABEL_34;
        }
        v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v15, 0LL, &v27);
        v19 = v27;
        if ( v18 < 0 || v27 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14695;
        }
        if ( a5 )
          a5[v13] = v19;
        if ( v13 )
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(v14, v15, v19);
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            Path = 0LL;
            WdLogGlobalForLineNumber = 14727;
          }
          v22 = *((_DWORD *)Path + 26);
          v23 = *((_WORD *)Path + 54);
          v28 = v22;
          v31 = v23;
          if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v9, v14, v15, v19, 0) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 14739;
          }
          v24 = VIDPN_MGR::AddPathToVidPnTopology(v9, v14, v8, v19, v28, v31, 1u, D3DKMDT_MCC_ENFORCE);
          v25 = v24;
          if ( v24 < 0 )
          {
            WdLogSingleEntry4(2LL, v19, v8, v11, v24);
            WdLogGlobalForLineNumber = 14757;
            v12 = v25;
            goto LABEL_34;
          }
        }
        else
        {
          v20 = VIDPN_MGR::UnpinPathModalityFromSource(v9, v14, v8);
          v12 = v20;
          if ( v20 < 0 )
          {
            WdLogSingleEntry3(2LL, v8, v11, v20);
            WdLogGlobalForLineNumber = 14713;
            goto LABEL_34;
          }
        }
        v7 = a3;
        ++v13;
      }
      v12 = 0;
    }
    else
    {
      v12 = -1073741811;
      WdLogSingleEntry2(2LL, a4, -1073741811LL);
      WdLogGlobalForLineNumber = 14638;
    }
  }
  else
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 14630;
  }
LABEL_34:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v29 + 40));
  return v12;
}
