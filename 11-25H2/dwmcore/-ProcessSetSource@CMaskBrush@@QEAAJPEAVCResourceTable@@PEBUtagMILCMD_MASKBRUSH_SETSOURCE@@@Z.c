/*
 * XREFs of ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18012F2D0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18012F41C (-IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetSource(
        CMaskBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MASKBRUSH_SETSOURCE *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  const struct CResource *v6; // rbx
  struct CResource **v7; // rsi
  const struct CResource **v8; // rdi
  unsigned __int64 Count; // rax
  CPtrArrayBase *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(CMILRefCountImpl *); // rax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v5 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5)) )
    v6 = *(const struct CResource **)(*((_DWORD *)a2 + 6) * v3 + v5 + 8);
  else
    v6 = 0LL;
  v7 = (struct CResource **)((char *)this + 120);
  if ( v6 != *((const struct CResource **)this + 15) )
  {
    v8 = (const struct CResource **)((char *)this + 120);
    if ( v6 )
    {
      if ( !CMaskBrush::IsValidSourceResource(v6) )
      {
        v12 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xFCu, 0LL);
        return v12;
      }
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)v6 + 4);
      v11 = CPtrArrayBase::InsertAt(v10, (unsigned __int64)this, Count);
      v12 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xFFu, 0LL);
        return v12;
      }
      v13 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v6 + 8LL);
      if ( v13 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v6);
      else
        v13(v6);
      v8 = (const struct CResource **)((char *)this + 120);
    }
    CResource::UnRegisterNotifierInternal(this, *v7);
    *v7 = 0LL;
    *v8 = v6;
    CBrush::NotifyOnChanged((__int64)this, 0xEu, 0LL);
  }
  return 0;
}
