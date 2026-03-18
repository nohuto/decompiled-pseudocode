/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@Z @ 0x1403C8F00
 * Callers:
 *     ?FillOnePathModalityFromVidPn@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x140269824 (-FillOnePathModalityFromVidPn@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCR.c)
 *     _BmlLogDiagnosticsPacket @ 0x1403623E8 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  struct DMMVIDPNTARGETMODESET *v5; // rbx
  DMMVIDPNSOURCEMODE *v6; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // rbx
  struct DMMVIDPNTARGETMODESET *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a1 + 88));
  v6 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v5 + 18);
  if ( v6 )
  {
    if ( (*v4 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v6);
      if ( *(_DWORD *)(a2 + 88) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 92) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *v4 &= ~0x800000uLL;
    }
    v7 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v5 + 18));
    *(_OWORD *)(a2 + 88) = *(_OWORD *)&v7->PrimSurfSize.cx;
    v8 = *(_OWORD *)&v7->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 104) = v8;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  v9 = a1 + 96;
  v10 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a1 + 96));
  v11 = *((_QWORD *)v10 + 18);
  if ( v11 )
  {
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(v11 + 72);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v11 + 76);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v11 + 84);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v11 + 92);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v11 + 100);
    *(_QWORD *)(a2 + 32) = *(unsigned int *)(v11 + 112);
    *(_DWORD *)(a2 + 76) = (int)(*(_DWORD *)(v11 + 120) << 29) >> 29;
    *(_QWORD *)(a2 + 140) = *(_QWORD *)(v11 + 152);
    *(_QWORD *)(a2 + 148) = *(_QWORD *)(v11 + 144);
    *(_DWORD *)(a2 + 156) = *(_DWORD *)(v11 + 160);
    *(_QWORD *)a2 |= 0x801000087uLL;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v10 + 88));
  v12 = *(_DWORD *)(a1 + 116);
  if ( v12 )
  {
    if ( v12 != 254 )
    {
      v9 = a1 + 96;
      if ( v12 != 255 )
      {
        *(_QWORD *)a2 |= 0x200uLL;
        *(_DWORD *)(a2 + 120) = v12;
      }
    }
  }
  v13 = *(_DWORD *)(a1 + 112);
  if ( v13 && v13 != 254 )
  {
    *(_DWORD *)(a2 + 124) = v13;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 96LL) + 80LL);
  *(_DWORD *)(a2 + 84) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
