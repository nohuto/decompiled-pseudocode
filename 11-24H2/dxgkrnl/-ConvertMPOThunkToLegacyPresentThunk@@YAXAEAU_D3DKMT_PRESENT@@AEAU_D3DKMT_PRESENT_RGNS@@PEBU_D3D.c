/*
 * XREFs of ?ConvertMPOThunkToLegacyPresentThunk@@YAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_PRESENT_RGNS@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1403F2768
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMPOThunkToLegacyPresentThunk(
        struct _D3DKMT_PRESENT *a1,
        struct _D3DKMT_PRESENT_RGNS *a2,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a3,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a4)
{
  D3DKMT_HANDLE v6; // edx
  UINT v7; // eax
  UINT v8; // ecx
  UINT v9; // eax
  UINT v10; // ecx
  UINT v11; // eax
  UINT v12; // ecx
  UINT v13; // edx
  UINT v14; // eax
  UINT v15; // ecx

  a2->MoveRectCount = 0;
  a2->pMoveRects = 0LL;
  a2->DirtyRectCount = a4->pPlaneAttributes->DirtyRectCount;
  a2->pDirtyRects = a4->pPlaneAttributes->pDirtyRects;
  v6 = *a3->pContextList;
  a1->BroadcastContextCount = 0;
  a1->hDevice = v6;
  a1->hSource = *a4->pAllocationList;
  a1->VidPnSourceId = a3->VidPnSourceId;
  a1->SrcRect = a4->pPlaneAttributes->SrcRect;
  a1->SubRectCnt = a4->pPlaneAttributes->DirtyRectCount;
  a1->pSrcSubRects = a4->pPlaneAttributes->pDirtyRects;
  a1->PresentCount = a3->PresentCount;
  a1->FlipInterval = a4->FlipInterval;
  a1->pPresentRegions = a2;
  a1->Duration = a3->Duration;
  a1->PrivateDriverDataSize = a4->DriverPrivateDataSize;
  a1->pPrivateDriverData = a4->pDriverPrivateData;
  v7 = a1->Flags.Value | 4;
  a1->Flags.Value = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(a3->Flags.Value >> 1)) & 8;
  a1->Flags.Value = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * a3->Flags.Value)) & 0x10;
  a1->Flags.Value = v9;
  v10 = v9 ^ (a3->Flags.Value ^ v9) & 0x20 | 0x1000;
  a1->Flags.Value = v10;
  v11 = v10 ^ (v10 ^ (a3->Flags.Value << 17)) & 0x20000;
  a1->Flags.Value = v11;
  v12 = v11 ^ (v11 ^ (a3->Flags.Value << 17)) & 0x40000;
  a1->Flags.Value = v12;
  v13 = v12 ^ (v12 ^ (a3->Flags.Value << 17)) & 0x80000 | 0x400000;
  a1->Flags.Value = v13;
  v14 = v13 ^ (v13 ^ (a3->Flags.Value << 21)) & 0x8000000;
  a1->Flags.Value = v14;
  v15 = v14 ^ (v14 ^ (a3->Flags.Value << 17)) & 0x10000000;
  a1->Flags.Value = v15;
  a1->Flags.Value = v15 ^ (v15 ^ (a3->Flags.Value << 21)) & 0x20000000;
}
