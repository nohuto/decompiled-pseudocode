/*
 * XREFs of ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A62F4
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180014A8C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18001C4A0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800504B0 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180057CA8 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::CopyVisual(
        CAnimatedTransitionVisual *this,
        struct CAnimatedTransitionVisual *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  float *v16; // rcx
  float v17; // xmm1_4
  int v18; // eax

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *((_DWORD *)a2 + 216) - *((_DWORD *)a2 + 214);
    v7 = *((_DWORD *)a2 + 217) - *((_DWORD *)a2 + 215);
    v8 = RoundToNearestInt((float)*((int *)a2 + 214) + *((float *)a2 + 188));
    *((_DWORD *)this + 214) = v8;
    v9 = v8;
    v10 = RoundToNearestInt((float)*((int *)a2 + 215) + *((float *)a2 + 189));
    v11 = 0;
    *((_DWORD *)this + 215) = v10;
    v12 = v10;
    if ( v6 >= 0 )
      v11 = v6;
    *((_DWORD *)this + 216) = RoundToNearestInt((float)((float)v11 * *((float *)this + 191)) + (float)v9);
    v13 = 0;
    if ( v7 >= 0 )
      v13 = v7;
    v14 = RoundToNearestInt((float)((float)v13 * *((float *)this + 192)) + (float)v12);
    v15 = *((_BYTE *)this + 969) == 0;
    v16 = (float *)((char *)this + 928);
    *((_DWORD *)this + 217) = v14;
    *((float *)this + 230) = *((float *)a2 + 230) + *((float *)a2 + 190);
    if ( v15 )
      *v16 = *((float *)a2 + 186);
    v15 = *((_BYTE *)this + 976) == 0;
    v17 = *v16;
    *((float *)this + 186) = *v16;
    *(_OWORD *)((char *)this + 824) = *(_OWORD *)((char *)a2 + 824);
    *((_BYTE *)this + 986) = *((_BYTE *)a2 + 986);
    *((_BYTE *)this + 987) = *((_BYTE *)a2 + 987);
    *(_OWORD *)((char *)this + 888) = *(_OWORD *)((char *)a2 + 824);
    if ( v15 )
    {
      CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v17);
      CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    }
    *((_BYTE *)this + 968) = 1;
    v5 = 0;
    *((_DWORD *)this + 245) = *((_DWORD *)a2 + 245);
    v18 = *((_DWORD *)this + 24);
    if ( (v18 & 0x2000) == 0 )
    {
      *((_DWORD *)this + 24) = v18 | 0x2000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)this + 8));
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x27Fu);
  }
  return v5;
}
