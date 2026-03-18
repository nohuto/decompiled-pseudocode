/*
 * XREFs of ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18021FC34
 * Callers:
 *     ?ProcessSnapshot@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x18021FBF0 (-ProcessSnapshot@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SN.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x180239628 (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1802B2AD8 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::RegisterRenderSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v8; // edx
  int v9; // edi
  unsigned int v11; // eax
  struct CCachedVisualImage *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 5912;
  v3 = 0;
  v4 = *((_QWORD *)this + 739);
  v5 = 0LL;
  v6 = *((unsigned int *)this + 1484);
  while ( (unsigned int)v5 < (unsigned int)v6 )
  {
    if ( a2 == *(struct CCachedVisualImage **)(v4 + 8 * v5) )
      return v3;
    v5 = (unsigned int)(v5 + 1);
  }
  v8 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    v3 = -2147024362;
    v11 = 181;
    v9 = -2147024362;
    goto LABEL_11;
  }
  v9 = 0;
  if ( v8 > *((_DWORD *)v2 + 5) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v12);
    v3 = v9;
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v11 = 192;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v11, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x7A7u, 0LL);
    return v3;
  }
  *(_QWORD *)(v4 + 8 * v6) = a2;
  *((_DWORD *)v2 + 6) = v8;
  return (unsigned int)v9;
}
