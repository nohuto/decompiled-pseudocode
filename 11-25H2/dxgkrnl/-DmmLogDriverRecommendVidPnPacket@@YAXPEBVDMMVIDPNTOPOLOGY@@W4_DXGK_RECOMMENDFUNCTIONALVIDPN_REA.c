/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x140252C5C
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403DA174 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14025371C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  char *v2; // rbx
  __int64 Container; // rax
  DXGADAPTER *ContainingAdapter; // rax
  struct _LUID *v7; // rdx
  __int64 v8; // rax
  struct DXGADAPTER *v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  struct _DXGK_DIAG_HEADER *v14; // rdi
  signed int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)a1 + 160;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
  v17 = 0LL;
  DXGADAPTER::IsAdapterSessionized(ContainingAdapter, v7, 0LL, &v17);
  v8 = ContainedBy<DMMVIDPN>::GetContainer((__int64)v2);
  v9 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v8 + 48));
  v10 = *((_DWORD *)a1 + 10);
  v11 = *(_QWORD *)((char *)v9 + 412);
  v13 = operator new[](144 * v10 + 56, 0x4E506456u, 256LL, v12);
  v14 = (struct _DXGK_DIAG_HEADER *)v13;
  if ( !v13 )
  {
    DxgkLogCodePointPacketForSession(56, v17, 0xC0000017, 0, 0, v11);
    return;
  }
  *(_DWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 32) = 0LL;
  *(_DWORD *)v13 = 34;
  *(_DWORD *)(v13 + 4) = 144 * v10 + 56;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_OWORD *)(v13 + 16) = 0LL;
  *(_DWORD *)(v13 + 48) = a2;
  *(_DWORD *)(v13 + 52) = v10;
  v15 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v10, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v13 + 56));
  v16 = v17;
  if ( v15 < 0 )
    goto LABEL_6;
  v15 = DxgkWriteDiagEntry(v14, v17);
  if ( v15 < 0 )
  {
    v16 = v17;
LABEL_6:
    DxgkLogCodePointPacketForSession(56, v16, v15, 0, 0, v11);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
}
