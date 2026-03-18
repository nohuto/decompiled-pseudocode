/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18025A868
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18025BF68 (-Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x18021D0E0 (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x18028DA18 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  CCachedVisualImage **v2; // rbx
  CVisualGroup *v4; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax

  v2 = (CCachedVisualImage **)((char *)this + 6184);
  v4 = (CVisualGroup *)*((_QWORD *)this + 773);
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
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(v2, (__int64)v6, v7);
  v4 = *v2;
  if ( *v2 )
  {
LABEL_6:
    v9 = CVisualGroup::AddVisual(v4, a2);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xA68u, 0LL);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xA65u, 0LL);
  }
  return v8;
}
