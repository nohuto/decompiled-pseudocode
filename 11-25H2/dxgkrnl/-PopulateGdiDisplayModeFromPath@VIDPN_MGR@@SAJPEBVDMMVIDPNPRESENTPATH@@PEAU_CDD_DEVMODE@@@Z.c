/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1402C1A88
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1402C2958 (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034934 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x14003DFE0 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063148 (-DivideAndRound@@YA_K_K0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1402C2064 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  DMMVIDPNTARGET *v4; // rbx
  struct DMMVIDPNTARGETMODESET *v5; // rbx
  DMMVIDPNSOURCEMODE *v6; // r15
  struct DMMVIDPNTARGETMODESET *v7; // rbx
  __int64 v8; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v10; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v11; // edi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // esi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v13; // ebx
  unsigned int v14; // eax
  int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int BitsPerPixel; // eax
  __int64 result; // rax

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1284;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1285;
  }
  v4 = (DMMVIDPNTARGET *)*((_QWORD *)a1 + 11);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1291;
  }
  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v4);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1302;
  }
  v6 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v5 + 18);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1311;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a1 + 12));
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1325;
  }
  v8 = *((_QWORD *)v7 + 18);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1336;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v7 + 88));
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v6);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v8 + 152);
  v10 = GraphicsInfo;
  v11 = *((_DWORD *)a1 + 28);
  v12 = *((_DWORD *)a1 + 29);
  v13 = (int)(*(_DWORD *)(v8 + 120) << 29) >> 29;
  v14 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), v13, 0LL);
  v15 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20uLL,
          v10->PrimSurfSize.cx,
          v10->PrimSurfSize.cy,
          v14,
          v13,
          v12,
          v11,
          (struct _devicemodeW *const)a2);
  if ( v15 >= 0 )
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
  else
  {
    v16 = (int)(*(_DWORD *)(v8 + 120) << 29) >> 29;
    v17 = (unsigned int)DivideAndRound(*(unsigned int *)(v8 + 152), *(unsigned int *)(v8 + 156));
    BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel(v6, v18, v19, v20);
    WdLogSingleEntry5(3LL, v10->PrimSurfSize.cx, v10->PrimSurfSize.cy, BitsPerPixel, v17, v16);
    result = (unsigned int)v15;
    WdLogGlobalForLineNumber = 1363;
  }
  return result;
}
