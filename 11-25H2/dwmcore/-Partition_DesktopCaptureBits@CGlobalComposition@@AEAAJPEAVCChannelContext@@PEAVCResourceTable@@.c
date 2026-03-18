/*
 * XREFs of ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1801AD07C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x1801AC624 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x1801AC9EC (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x1801AD6C0 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Partition_DesktopCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  int DesktopTree; // r9d
  VisualCaptureBitsResponse *v8; // rax
  VisualCaptureBitsResponse *v9; // rax
  unsigned int v11; // eax
  struct WICRect v12; // [rsp+50h] [rbp-18h] BYREF
  CResource *v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = 0LL;
  DesktopTree = CGlobalComposition::GetDesktopTree((CGlobalComposition *)this, *(struct _LUID *)((char *)a4 + 4), &v13);
  if ( DesktopTree < 0 )
  {
    v11 = 239;
  }
  else
  {
    v12 = *(struct WICRect *)((char *)a4 + 12);
    v8 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v8 )
    {
      v9 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
             v8,
             this[78],
             a2,
             v13,
             &v12,
             (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
             *((_QWORD *)a4 + 4),
             *((void **)a4 + 5),
             *((void **)a4 + 6));
      if ( v9 )
      {
        (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v9 + 40LL))(v9);
        goto LABEL_5;
      }
    }
    v11 = 256;
    DesktopTree = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DesktopTree, v11, 0LL);
  SetEvent(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 6));
LABEL_5:
  if ( v13 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v13);
  return 0LL;
}
