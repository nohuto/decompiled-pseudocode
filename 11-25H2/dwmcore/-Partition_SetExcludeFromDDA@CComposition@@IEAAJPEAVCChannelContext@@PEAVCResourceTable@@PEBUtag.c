/*
 * XREFs of ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180266258
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801991F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180265710 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180298F20 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetExcludeFromDDA(
        CVisualGroup **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETEXCLUDEFROMDDA *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  CVisualGroup *v8; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0xB6u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket(-229628237, 0LL);
  if ( *((_BYTE *)a4 + 8) )
  {
    v7 = CComposition::AddToDDAExcludeVisualList((CComposition *)this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4DCu, 0LL);
  }
  else
  {
    v8 = this[777];
    if ( v8 )
      CVisualGroup::RemoveVisual(v8, Resource);
  }
  return 0LL;
}
