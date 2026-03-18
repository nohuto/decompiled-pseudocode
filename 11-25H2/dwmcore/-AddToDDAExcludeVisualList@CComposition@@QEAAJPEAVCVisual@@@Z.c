/*
 * XREFs of ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180265710
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180266258 (-Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x18022895C (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180298E4C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  CResource **v2; // rbx
  CVisualGroup *v4; // rcx
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax

  v2 = (CResource **)((char *)this + 6216);
  v4 = (CVisualGroup *)*((_QWORD *)this + 777);
  if ( v4 )
    goto LABEL_6;
  v6 = DefaultHeap::AllocClear(0x60uLL);
  if ( v6 )
  {
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = this;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    v6[10] = 0;
    *(_QWORD *)v6 = &CVisualGroup::`vftable';
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
  }
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(v2, (__int64)v6);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_6:
    v8 = CVisualGroup::AddVisual(v4, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xB22u, 0LL);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB1Fu, 0LL);
  }
  return v7;
}
