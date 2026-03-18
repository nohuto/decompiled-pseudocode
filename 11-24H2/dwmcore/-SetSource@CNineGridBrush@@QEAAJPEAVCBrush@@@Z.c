/*
 * XREFs of ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801324D0
 * Callers:
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x180132430 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18028D778 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  struct CResource *v4; // rax
  void (__fastcall *v5)(__int64, unsigned int, __int64); // rax
  unsigned int v6; // edi
  int v8; // eax

  if ( a2 != this[13] )
  {
    if ( a2 )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, a2);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x17Au, 0LL);
        return v6;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
    v4 = *this;
    this[13] = a2;
    v5 = (void (__fastcall *)(__int64, unsigned int, __int64))*((_QWORD *)v4 + 10);
    if ( v5 == CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 0xEu, 0LL);
    else
      ((void (__fastcall *)(struct CResource **, __int64))v5)(this, 14LL);
  }
  return 0;
}
