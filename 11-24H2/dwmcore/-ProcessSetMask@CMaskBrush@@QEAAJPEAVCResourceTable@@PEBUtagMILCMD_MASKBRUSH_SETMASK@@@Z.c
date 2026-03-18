/*
 * XREFs of ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1801347CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x180136364 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MASKBRUSH_SETMASK *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  const struct CResource *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v5 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5)) )
    v6 = *(const struct CResource **)(*((_DWORD *)a2 + 6) * v3 + v5 + 8);
  else
    v6 = 0LL;
  if ( v6 != this[14] )
  {
    if ( v6 )
    {
      if ( !CMaskBrush::IsValidMaskResource(v6) )
      {
        v8 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x126u, 0LL);
        return v8;
      }
      v7 = CResource::RegisterNotifier((CResource *)this, v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x129u, 0LL);
        return v8;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
    this[14] = v6;
    CBrush::NotifyOnChanged((__int64)this, 0xEu, 0LL);
  }
  return 0;
}
