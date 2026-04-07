/*
 * XREFs of ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180061C5C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CThumbnailTransition@@QEAA@XZ @ 0x1800D9F80 (--0CThumbnailTransition@@QEAA@XZ.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800DA38C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800DA4B0 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::_UpdateAnimatedProperties(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  int v3; // esi
  unsigned int started; // edi
  CThumbnailTransition *v6; // rcx
  CThumbnailTransition *v8; // rcx
  int v9; // ebp
  int v10; // r14d
  CThumbnailTransition *v11; // rax
  CThumbnailTransition *v12; // rax
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  int v17; // eax
  float v18; // xmm0_4
  CThumbnailTransition *v19; // rcx
  CBaseObject *v20; // rcx

  v2 = *((_QWORD *)this + 41);
  v3 = a2 & 0x30000;
  started = -2147467259;
  if ( !v2 || !v3 )
  {
    v6 = (CThumbnailTransition *)*((_QWORD *)this + 53);
    if ( !v6 )
      return started;
    CThumbnailTransition::StopAnimation(v6);
    started = 0;
LABEL_26:
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    return started;
  }
  v8 = (CThumbnailTransition *)*((_QWORD *)this + 53);
  v9 = *(_DWORD *)(v2 + 40);
  v10 = *(_DWORD *)(v2 + 44);
  if ( v8 )
  {
    *((_BYTE *)this + 433) = 1;
    CThumbnailTransition::StopAnimation(v8);
  }
  started = -2147024882;
  v11 = (CThumbnailTransition *)DefaultHeap::AllocClear(0x28uLL);
  if ( !v11 )
  {
    *((_QWORD *)this + 53) = 0LL;
    return started;
  }
  v12 = CThumbnailTransition::CThumbnailTransition(v11);
  *((_QWORD *)this + 53) = v12;
  if ( v12 )
  {
    SetRect(
      (LPRECT)((char *)this + 248),
      *((_DWORD *)this + 16),
      *((_DWORD *)this + 17),
      *((_DWORD *)this + 16) + *((_DWORD *)this + 18),
      *((_DWORD *)this + 17) + *((_DWORD *)this + 19));
    v14 = *((_QWORD *)this + 41);
    if ( (*(_BYTE *)(v14 + 36) & 1) != 0 )
    {
      v15 = 0;
      if ( *(_DWORD *)(v14 + 52) - *(_DWORD *)(v14 + 44) >= 0 )
        v15 = *(_DWORD *)(v14 + 52) - *(_DWORD *)(v14 + 44);
      v16 = 0;
      if ( *(_DWORD *)(v14 + 48) - *(_DWORD *)(v14 + 40) >= 0 )
        v16 = *(_DWORD *)(v14 + 48) - *(_DWORD *)(v14 + 40);
      SetRect((LPRECT)((char *)this + 264), v9, v10, v9 + v16, v10 + v15);
      v14 = *((_QWORD *)this + 41);
    }
    else
    {
      *(_OWORD *)((char *)this + 264) = *(_OWORD *)((char *)this + 248);
    }
    v17 = 4;
    if ( v3 != 0x20000 )
      v17 = 1;
    *((_DWORD *)this + 70) = v17;
    v18 = *((double *)this + 15);
    *((float *)this + 71) = v18;
    if ( (*(_BYTE *)(v14 + 36) & 4) != 0 )
      v18 = (double)*(unsigned __int8 *)(v14 + 72) / 255.0;
    *((float *)this + 72) = v18;
    v19 = (CThumbnailTransition *)*((_QWORD *)this + 53);
    *((_BYTE *)this + 434) = 0;
    started = CThumbnailTransition::StartAnimation(v19, this, v13);
    if ( (started & 0x80000000) == 0 )
      goto LABEL_26;
    v20 = (CBaseObject *)*((_QWORD *)this + 53);
    if ( v20 )
    {
      CBaseObject::Release(v20);
      *((_QWORD *)this + 53) = 0LL;
    }
    *((_BYTE *)this + 433) = 0;
  }
  return started;
}
