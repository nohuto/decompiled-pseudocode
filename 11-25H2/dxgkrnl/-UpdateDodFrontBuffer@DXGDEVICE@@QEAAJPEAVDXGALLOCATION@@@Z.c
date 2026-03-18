/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401D7EAC
 * Callers:
 *     DxgkUnlock2Internal @ 0x14028E6D0 (DxgkUnlock2Internal.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x14034F8B8 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1403808B0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KKIPEAPEAX@Z @ 0x1400477B4 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KKIPEAPEAX@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KK@Z @ 0x140047D30 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KK@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x140197EC4 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x140306208 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x14037A144 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  D3DDDIFORMAT Format; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  LONG v21; // eax
  __int64 v22; // [rsp+38h] [rbp-C8h]
  struct _DXGKARG_DESCRIBEALLOCATION v23; // [rsp+50h] [rbp-B0h] BYREF
  _DXGKARG_PRESENT_DISPLAYONLY v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  _DWORD v27[20]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v28; // [rsp+160h] [rbp+60h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
    result = 3223191814LL;
    WdLogGlobalForLineNumber = 439;
    return result;
  }
  if ( !DXGDEVICE::IsVSyncAvailable((DXGDEVICE *)this, (v4 >> 6) & 0xF) )
  {
    WdLogSingleEntry3(4LL, 0LL, this, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
    result = 0LL;
    WdLogGlobalForLineNumber = 448;
    return result;
  }
  memset(v27, 0, sizeof(v27));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v27);
  if ( !v27[8] )
  {
    v6 = -1073741811;
    WdLogSingleEntry4(2LL, -1073741811LL, this, a2, *((unsigned int *)a2 + 4));
    v22 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 465;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: DxgkpGetDodPrimaryInfo failed for front buffer 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)a2,
      v22,
      0LL);
    return v6;
  }
  v7 = *((_QWORD *)a2 + 6);
  v23.Rotation = -1;
  memset(&v23.Width, 0, 32);
  v23.Flags.Value = 1;
  v23.hAllocation = *(HANDLE *)(v7 + 16);
  v8 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(2LL, v8, this, a2, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, *((unsigned int *)a2 + 4));
    v10 = *((_QWORD *)a2 + 6);
    v11 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 483;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
      v9,
      (__int64)this,
      (__int64)a2,
      (*(_DWORD *)(v10 + 4) >> 6) & 0xF,
      v11);
    return (unsigned int)v9;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((ADAPTER_DISPLAY **)this[235] + 390),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v13 = *(_OWORD *)DisplayModeInfo;
  v14 = *((_OWORD *)DisplayModeInfo + 1);
  v15 = *(_QWORD *)DisplayModeInfo;
  v25 = v13;
  v26 = v14;
  if ( *(_QWORD *)&v23.Width != v15 || v23.Rotation != -1 && v23.Rotation != HIDWORD(v26) )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
    WdLogGlobalForLineNumber = 501;
    return 3223191557LL;
  }
  v16 = 22;
  Format = D3DDDIFMT_X8R8G8B8;
  if ( v23.Format != D3DDDIFMT_A8R8G8B8 )
    Format = v23.Format;
  if ( DWORD2(v25) != 21 )
    v16 = DWORD2(v25);
  if ( Format == v16 )
  {
    memset(&v24, 0, sizeof(v24));
    v18 = VIDMM_EXPORT::VidMmBeginCPUAccess(
            *((VIDMM_EXPORT **)this[2] + 95),
            *((struct VIDMM_GLOBAL **)this[2] + 96),
            *((struct VIDMM_MULTI_ALLOC **)a2 + 3),
            *((_DWORD *)a2 + 4) & 0x3F,
            2u,
            0,
            &v24.pSource);
    v9 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry4(2LL, v18, this, a2, *((unsigned int *)a2 + 4));
      v19 = *((unsigned int *)a2 + 4);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Device 0x%I64x: VidMmBeginCPUAccess failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
        v9,
        (__int64)this,
        (__int64)a2,
        v19,
        0LL);
      return (unsigned int)v9;
    }
    v20 = *((_QWORD *)a2 + 6);
    v28 = 0LL;
    v24.VidPnSourceId = (*(_DWORD *)(v20 + 4) >> 6) & 0xF;
    if ( v23.Format != D3DDDIFMT_A8R8G8B8 && v23.Format != D3DDDIFMT_X8R8G8B8 )
    {
      v6 = -1073741811;
      WdLogSingleEntry4(2LL, -1073741811LL, this, a2, v23.Format);
      WdLogGlobalForLineNumber = 549;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Device 0x%I64x: front buffer's format is not supported 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)this,
        (__int64)a2,
        v23.Format,
        0LL);
      return v6;
    }
    v24.BytesPerPixel = 4;
    if ( HIDWORD(v26) != 1 )
    {
      if ( HIDWORD(v26) == 2 )
      {
LABEL_29:
        *((_QWORD *)&v28 + 1) = __PAIR64__(v23.Width, v23.Height);
        v21 = v27[9];
LABEL_31:
        v24.Pitch = v21;
        goto LABEL_32;
      }
      if ( HIDWORD(v26) != 3 )
      {
        if ( HIDWORD(v26) != 4 )
        {
LABEL_32:
          if ( HIDWORD(v26) != 1 )
            v24.Flags.Value |= 1u;
          v24.NumDirtyRects = 1;
          v24.pDirtyRect = (RECT *)&v28;
          v6 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(*((ADAPTER_DISPLAY **)this[235] + 390), &v24);
          VIDMM_EXPORT::VidMmEndCPUAccess(
            *((VIDMM_EXPORT **)this[2] + 95),
            *((struct VIDMM_GLOBAL **)this[2] + 96),
            *((struct VIDMM_MULTI_ALLOC **)a2 + 3),
            *((_DWORD *)a2 + 4) & 0x3F);
          return v6;
        }
        goto LABEL_29;
      }
    }
    *((_QWORD *)&v28 + 1) = *(_QWORD *)&v23.Width;
    v21 = v27[8];
    goto LABEL_31;
  }
  WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
  WdLogGlobalForLineNumber = 511;
  return 3223191557LL;
}
