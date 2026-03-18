/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1403623E8
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140269ADC (_BmlGetPathModeListForAdapter.c)
 *     _BmlGetPathModalityForAdapter @ 0x1403635A4 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140024054 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x140038CB0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@Z @ 0x1403C8F00 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(struct _KTHREAD **this, int a2, __int64 a3, unsigned __int8 *a4)
{
  struct _KTHREAD **v6; // r12
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rbx
  DMMVIDPNTOPOLOGY *v12; // r13
  int v13; // eax
  unsigned int v14; // r14d
  VIDPN_MGR *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  DMMVIDPNTOPOLOGY *v20; // rcx
  _QWORD *v22; // [rsp+78h] [rbp+20h]

  v6 = this;
  v8 = 408 * *a4 + 64;
  v9 = operator new[](v8, 0x63644356u, 256LL);
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)v9 = 50;
    v12 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    *(_DWORD *)(v9 + 4) = v8;
    *(_DWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_DWORD *)(v9 + 48) = *a4;
    v13 = *((_DWORD *)a4 + 1);
    *(_DWORD *)(v10 + 56) = a2;
    v14 = 0;
    *(_DWORD *)(v10 + 52) = v13;
    v15 = *(VIDPN_MGR **)(a3 + 48);
    if ( *a4 )
    {
      do
      {
        v16 = 120LL * v14;
        v17 = *(_QWORD *)&a4[v16 + 16];
        if ( (*(_QWORD *)v17 & 0x700000000000LL) == 0x700000000000LL )
        {
          v18 = 408LL * v14;
          *(_QWORD *)(v18 + v10 + 64) = *(_QWORD *)v17;
          *(_QWORD *)(v18 + v10 + 72) = *(_QWORD *)(v17 + 8);
          *(_QWORD *)(v18 + v10 + 80) = *(_QWORD *)(v17 + 16);
          *(_DWORD *)(v18 + v10 + 88) = *(_DWORD *)(v17 + 24);
          *(_DWORD *)(v18 + v10 + 92) = *(_DWORD *)(v17 + 28);
          *(_DWORD *)(v18 + v10 + 136) = *(_DWORD *)(v17 + 32);
          *(_QWORD *)(v18 + v10 + 104) = *(_QWORD *)(v17 + 36);
          *(_QWORD *)(v18 + v10 + 112) = *(_QWORD *)(v17 + 44);
          *(_QWORD *)(v18 + v10 + 120) = *(_QWORD *)(v17 + 52);
          *(_QWORD *)(v18 + v10 + 128) = *(_QWORD *)(v17 + 60);
          *(_QWORD *)(v18 + v10 + 96) = *(unsigned int *)(v17 + 72);
          *(_DWORD *)(v18 + v10 + 140) = (int)(*(_DWORD *)(v17 + 80) << 29) >> 29;
          *(_DWORD *)(v18 + v10 + 144) = *(_DWORD *)(v17 + 88);
          *(_DWORD *)(v18 + v10 + 148) = *(_DWORD *)(v17 + 92);
          *(_OWORD *)(v18 + v10 + 152) = *(_OWORD *)(v17 + 96);
          *(_OWORD *)(v18 + v10 + 168) = *(_OWORD *)(v17 + 112);
          *(_DWORD *)(v18 + v10 + 184) = *(_DWORD *)(v17 + 132);
          *(_DWORD *)(v18 + v10 + 188) = *(_DWORD *)(v17 + 136);
          *(_DWORD *)(v18 + v10 + 192) = *(_DWORD *)(v17 + 140);
          *(_QWORD *)(v18 + v10 + 196) = *(_QWORD *)(v17 + 144);
          *(_QWORD *)(v18 + v10 + 204) = *(_QWORD *)(v17 + 224);
          *(_DWORD *)(v18 + v10 + 220) = *(_DWORD *)(v17 + 240);
          *(_DWORD *)(v18 + v10 + 384) = *(_DWORD *)&a4[v16 + 24];
          *(_DWORD *)(v18 + v10 + 388) = *(_DWORD *)&a4[v16 + 28];
          *(_WORD *)(v18 + v10 + 392) = *(_WORD *)&a4[v16 + 32];
          *(_QWORD *)(v18 + v10 + 396) = *(_QWORD *)&a4[v16 + 36];
          *(_QWORD *)(v18 + v10 + 404) = *(_QWORD *)&a4[v16 + 44];
          *(_QWORD *)(v18 + v10 + 412) = *(_QWORD *)&a4[v16 + 52];
          *(_DWORD *)(v18 + v10 + 420) = *(_DWORD *)&a4[v16 + 60];
          *(_WORD *)(v18 + v10 + 424) = *(_WORD *)&a4[v16 + 64];
          *(_WORD *)(v18 + v10 + 426) = *(_WORD *)&a4[v16 + 66];
          *(_WORD *)(v18 + v10 + 428) = *(_WORD *)&a4[v16 + 68];
          *(_WORD *)(v18 + v10 + 430) = *(_WORD *)&a4[v16 + 70];
          *(_DWORD *)(v18 + v10 + 432) = *(_DWORD *)&a4[v16 + 72];
          *(_DWORD *)(v18 + v10 + 436) = *(_DWORD *)&a4[v16 + 76];
          *(_DWORD *)(v18 + v10 + 440) = *(_DWORD *)&a4[v16 + 80];
          *(_DWORD *)(v18 + v10 + 444) = *(_DWORD *)&a4[v16 + 84];
          *(_DWORD *)(v18 + v10 + 448) = *(_DWORD *)&a4[v16 + 88];
          *(_DWORD *)(v18 + v10 + 456) = *(_DWORD *)&a4[v16 + 96];
          *(_DWORD *)(v18 + v10 + 452) = *(_DWORD *)&a4[v16 + 92];
          *(_DWORD *)(v18 + v10 + 464) = *(_DWORD *)&a4[v16 + 104];
          *(_DWORD *)(v18 + v10 + 460) = *(_DWORD *)&a4[v16 + 100];
          *(_QWORD *)(v18 + v10 + 240) = *(_QWORD *)(v17 + 16);
          *(_DWORD *)(v18 + v10 + 248) = *(_DWORD *)(v17 + 24);
          *(_DWORD *)(v18 + v10 + 252) = *(_DWORD *)(v17 + 28);
          v22 = (_QWORD *)(v18 + v10 + 224);
          *v22 = 0x700000000000LL;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v12);
          while ( FirstPath )
          {
            if ( *(_DWORD *)(v17 + 16) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v15) + 103)
              && *(_DWORD *)(v17 + 20) == *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v15) + 104)
              && *(_DWORD *)(v17 + 24) == *(_DWORD *)(*((_QWORD *)FirstPath + 11) + 24LL)
              && *(_DWORD *)(v17 + 28) == *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL) )
            {
              _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>(FirstPath, v22);
              break;
            }
            v20 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
            FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v20 - 8);
            if ( v20 == (DMMVIDPNTOPOLOGY *)((char *)v12 + 24) )
              FirstPath = 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, v14, v17);
          WdLogGlobalForLineNumber = 5552;
        }
        ++v14;
      }
      while ( v14 < *a4 );
      v6 = this;
    }
    VIDPN_MGR::WriteDiagEntry(v6, (struct _DXGK_DIAG_HEADER *)v10);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v10);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, a4, *a4);
    WdLogGlobalForLineNumber = 5523;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225626LL;
  }
}
