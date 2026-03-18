/*
 * XREFs of ?Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1802634FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180039A04 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18018D498 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18018E70C (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Channel_VisualCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  CVisual *Resource; // rax
  int VisualTree; // r9d
  VisualCaptureBitsResponse *v10; // rax
  VisualCaptureBitsResponse *v11; // rax
  unsigned int v12; // eax
  struct WICRect v14; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v15; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((_DWORD *)a4 + 10);
  v15 = 0LL;
  v14 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v5, 0xB8u);
  VisualTree = CVisual::GetVisualTree(Resource, &v15);
  if ( VisualTree < 0 )
  {
    v12 = 149;
    goto LABEL_7;
  }
  v10 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
  if ( !v10
    || (v11 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
                v10,
                this[78],
                a2,
                v15,
                &v14,
                (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
                0LL,
                *((void **)a4 + 3),
                *((void **)a4 + 4))) == 0LL )
  {
    v12 = 161;
    VisualTree = -2147024882;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, VisualTree, v12, 0LL);
    SetEvent(*((HANDLE *)a4 + 3));
    CloseHandle(*((HANDLE *)a4 + 3));
    CloseHandle(*((HANDLE *)a4 + 4));
    goto LABEL_8;
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v11 + 40LL))(v11);
LABEL_8:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v15);
  return 0LL;
}
