/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1403AA8A0
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1403A9824 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003E4C0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14025371C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  const struct DMMVIDPNTOPOLOGY *v7; // rbp
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // eax
  signed int v16; // eax

  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v6 )
  {
    v7 = (const struct DMMVIDPNTOPOLOGY *)(v6 + 96);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v6 + 48));
    v9 = *((_DWORD *)v7 + 10);
    v10 = *(_QWORD *)((char *)ContainingAdapter + 412);
    v12 = operator new[](144 * v9 + 80, 0x4E506456u, 256LL, v11);
    v13 = v12;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_DWORD *)v12 = 33;
      *(_DWORD *)(v12 + 4) = 144 * v9 + 80;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_OWORD *)(v12 + 16) = 0LL;
      *(_DWORD *)(v12 + 48) = a2;
      *(_QWORD *)(v12 + 52) = v10;
      *(_DWORD *)(v12 + 60) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v12 + 64) = *(_DWORD *)(a1 + 12);
      v14 = *(_DWORD *)(v12 + 68) ^ (*(_DWORD *)(a1 + 24) ^ *(_DWORD *)(v12 + 68)) & 1;
      *(_DWORD *)(v12 + 68) = v14;
      v15 = (*(_DWORD *)(a1 + 24) ^ v14) & 2;
      *(_DWORD *)(v13 + 72) = a3;
      *(_DWORD *)(v13 + 76) = v9;
      *(_DWORD *)(v13 + 68) = v14 ^ v15;
      v16 = DmmStoreVidPnPathDataIntoDiagPacket(v7, v9, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v13 + 80));
      if ( v16 < 0 || (v16 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13), v16 < 0) )
        DxgkLogCodePointPacket(0x37u, v16, 0, 0, v10);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v13);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v10);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
