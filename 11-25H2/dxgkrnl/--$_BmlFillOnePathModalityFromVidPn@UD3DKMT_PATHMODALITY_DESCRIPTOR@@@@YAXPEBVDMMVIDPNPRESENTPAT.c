/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403C88F4
 * Callers:
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403C86BC (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034934 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  struct DMMVIDPNTARGETMODESET *v5; // rbx
  DMMVIDPNSOURCEMODE *v6; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rbx
  struct DMMVIDPNTARGETMODESET *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 result; // rax

  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a1 + 88));
  v6 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v5 + 18);
  if ( v6 )
  {
    if ( (*v4 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v6);
      if ( *(_DWORD *)(a2 + 96) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 100) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *v4 &= ~0x800000uLL;
    }
    v8 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v5 + 18));
    *(_OWORD *)(a2 + 96) = *(_OWORD *)&v8->PrimSurfSize.cx;
    v9 = *(_OWORD *)&v8->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 112) = v9;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  v10 = a1 + 96;
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a1 + 96));
  v12 = *((_QWORD *)v11 + 18);
  if ( v12 )
  {
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v12 + 72);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v12 + 88);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v12 + 104);
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v12 + 120);
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(v12 + 152);
    *(_QWORD *)(a2 + 232) = *(_QWORD *)(v12 + 144);
    *(_DWORD *)(a2 + 240) = *(_DWORD *)(v12 + 160);
    *(_QWORD *)a2 |= 0x801000087uLL;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
  v13 = *(_DWORD *)(a1 + 116);
  if ( v13 )
  {
    if ( v13 != 254 )
    {
      v10 = a1 + 96;
      if ( v13 != 255 )
      {
        *(_QWORD *)a2 |= 0x200uLL;
        *(_DWORD *)(a2 + 132) = v13;
      }
    }
  }
  v14 = *(_DWORD *)(a1 + 112);
  if ( v14 && v14 != 254 )
  {
    *(_DWORD *)(a2 + 136) = v14;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 96LL) + 80LL);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
