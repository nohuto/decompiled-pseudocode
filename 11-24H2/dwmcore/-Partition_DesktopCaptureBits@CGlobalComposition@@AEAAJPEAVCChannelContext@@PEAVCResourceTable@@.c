/*
 * XREFs of ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18018EDC0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18018D498 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18018E70C (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x18018F400 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v13; // eax
  struct WICRect v14; // [rsp+50h] [rbp-18h] BYREF
  CCachedVisualImage *v15; // [rsp+80h] [rbp+18h] BYREF

  v15 = 0LL;
  DesktopTree = CGlobalComposition::GetDesktopTree((CGlobalComposition *)this, *(struct _LUID *)((char *)a4 + 4), &v15);
  if ( DesktopTree < 0 )
  {
    v13 = 239;
  }
  else
  {
    v14 = *(struct WICRect *)((char *)a4 + 12);
    v8 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v8 )
    {
      v9 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
             v8,
             this[78],
             a2,
             v15,
             &v14,
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
    v13 = 256;
    DesktopTree = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DesktopTree, v13, 0LL);
  SetEvent(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 6));
LABEL_5:
  if ( v15 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v15, v10, v11);
  return 0LL;
}
