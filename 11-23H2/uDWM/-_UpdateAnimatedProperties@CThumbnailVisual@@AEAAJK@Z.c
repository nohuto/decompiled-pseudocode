/*
 * XREFs of ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18000D73C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000D09C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000D4E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E4564 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800E46A0 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
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
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r10d
  int v15; // r9d
  int v16; // eax
  float v17; // xmm0_4
  CThumbnailTransition *v18; // rcx
  CBaseObject *v19; // rcx

  v2 = *((_QWORD *)this + 47);
  v3 = a2 & 0x30000;
  started = -2147467259;
  if ( !v2 || !v3 )
  {
    v6 = (CThumbnailTransition *)*((_QWORD *)this + 59);
    if ( !v6 )
      return started;
    CThumbnailTransition::StopAnimation(v6);
    started = 0;
LABEL_25:
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    return started;
  }
  v8 = (CThumbnailTransition *)*((_QWORD *)this + 59);
  v9 = *(_DWORD *)(v2 + 40);
  v10 = *(_DWORD *)(v2 + 44);
  if ( v8 )
  {
    *((_BYTE *)this + 481) = 1;
    CThumbnailTransition::StopAnimation(v8);
  }
  started = -2147024882;
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          40LL);
  if ( !v11 )
  {
    *((_QWORD *)this + 59) = 0LL;
    return started;
  }
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_QWORD *)v11 = &CThumbnailTransition::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v11 + 16) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
  *(_DWORD *)(v11 + 8) = 1;
  *((_QWORD *)this + 59) = v11;
  SetRect(
    (LPRECT)((char *)this + 296),
    *((_DWORD *)this + 30),
    *((_DWORD *)this + 31),
    *((_DWORD *)this + 30) + *((_DWORD *)this + 32),
    *((_DWORD *)this + 31) + *((_DWORD *)this + 33));
  v13 = *((_QWORD *)this + 47);
  if ( (*(_BYTE *)(v13 + 36) & 1) != 0 )
  {
    v14 = 0;
    if ( *(_DWORD *)(v13 + 52) - *(_DWORD *)(v13 + 44) >= 0 )
      v14 = *(_DWORD *)(v13 + 52) - *(_DWORD *)(v13 + 44);
    v15 = 0;
    if ( *(_DWORD *)(v13 + 48) - *(_DWORD *)(v13 + 40) >= 0 )
      v15 = *(_DWORD *)(v13 + 48) - *(_DWORD *)(v13 + 40);
    SetRect((LPRECT)((char *)this + 312), v9, v10, v9 + v15, v10 + v14);
    v13 = *((_QWORD *)this + 47);
  }
  else
  {
    *(_OWORD *)((char *)this + 312) = *(_OWORD *)((char *)this + 296);
  }
  v16 = 4;
  if ( v3 != 0x20000 )
    v16 = 1;
  *((_DWORD *)this + 82) = v16;
  v17 = *((double *)this + 24);
  *((float *)this + 83) = v17;
  if ( (*(_BYTE *)(v13 + 36) & 4) != 0 )
    v17 = (double)*(unsigned __int8 *)(v13 + 72) / 255.0;
  *((float *)this + 84) = v17;
  v18 = (CThumbnailTransition *)*((_QWORD *)this + 59);
  *((_BYTE *)this + 482) = 0;
  started = CThumbnailTransition::StartAnimation(v18, this, v12);
  if ( (started & 0x80000000) == 0 )
    goto LABEL_25;
  v19 = (CBaseObject *)*((_QWORD *)this + 59);
  if ( v19 )
  {
    CBaseObject::Release(v19);
    *((_QWORD *)this + 59) = 0LL;
  }
  *((_BYTE *)this + 481) = 0;
  return started;
}
