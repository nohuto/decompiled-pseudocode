/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800464C0
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18004629C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0CTransitionVisual@CAnimationEngine@@QEAA@PEAUIAnimatedVisual@@@Z @ 0x180046618 (--0CTransitionVisual@CAnimationEngine@@QEAA@PEAUIAnimatedVisual@@@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18004665C (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180072C8C (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  int v6; // edi
  unsigned __int128 v7; // rax
  void *v8; // rax
  const struct std::nothrow_t *v9; // rdx
  unsigned int *v10; // rbx
  __int64 i; // rbp
  CAnimationEngine::CTransitionVisual *v12; // rax
  __int64 v13; // rcx
  CAnimationEngine::CTransitionVisual *v14; // rcx
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // eax
  __int64 v18; // r8
  const struct std::nothrow_t *v19; // rdx
  __int64 j; // rbp
  CAnimationEngine::CTransitionVisual *v21; // rcx
  void *v22; // rcx

  v6 = 0;
  v7 = a3 * (unsigned __int128)8uLL;
  if ( !is_mul_ok(a3, 8uLL) )
    *(_QWORD *)&v7 = -1LL;
  v8 = operator new[](v7, *((const struct std::nothrow_t **)&v7 + 1));
  *((_QWORD *)this + 5) = v8;
  v10 = (unsigned int *)((char *)this + 20);
  if ( v8 )
  {
    *v10 = a3;
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      v12 = (CAnimationEngine::CTransitionVisual *)operator new[](0x58uLL, v9);
      if ( v12 )
        v13 = CAnimationEngine::CTransitionVisual::CTransitionVisual(v12, a2[i]);
      else
        v13 = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = v13;
      v14 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * i);
      if ( !v14 )
      {
        v15 = 1621;
        goto LABEL_10;
      }
      v17 = CAnimationEngine::CTransitionVisual::Initialize(v14);
      v6 = v17;
      v16 = v17;
      if ( v17 < 0 )
      {
        v15 = 1622;
        goto LABEL_18;
      }
      v6 = (**(__int64 (__fastcall ***)(struct IAnimatedVisual *, _QWORD, __int64, _QWORD))a2[i])(
             a2[i],
             *((unsigned int *)this + 4),
             v18,
             (unsigned int)v17);
      v16 = v6;
      if ( v6 < 0 )
      {
        v15 = 1623;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v15 = 1614;
LABEL_10:
    v16 = -2147024882;
    v6 = -2147024882;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v15, 0LL);
    for ( j = 0LL; (unsigned int)j < *v10; j = (unsigned int)(j + 1) )
    {
      v21 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * j);
      if ( v21 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v21, (unsigned int)v19);
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * j) = 0LL;
      }
    }
    v22 = (void *)*((_QWORD *)this + 5);
    if ( v22 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v22, v19);
      *((_QWORD *)this + 5) = 0LL;
    }
    *v10 = 0;
  }
  return (unsigned int)v6;
}
