/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180056754
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800562C8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800564E4 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800568C4 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int *v9; // rdi
  int v10; // r14d
  __int64 i; // rsi
  struct IAnimatedVisual **v12; // rax
  struct IAnimatedVisual **v13; // rbx
  struct IAnimatedVisual **v14; // r15
  struct IAnimatedVisual *v15; // rcx
  CAnimationEngine::CTransitionVisual *v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v21; // eax
  __int64 j; // rsi
  CAnimationEngine::CTransitionVisual *v23; // rcx

  v6 = 0;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  *((_QWORD *)this + 5) = v8;
  v9 = (unsigned int *)((char *)this + 20);
  if ( v8 )
  {
    *v9 = a3;
    v10 = 0;
    if ( !a3 )
      return v6;
    for ( i = 0LL; ; ++i )
    {
      v12 = (struct IAnimatedVisual **)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                         WPF::g_pProcessHeap,
                                         88LL);
      v13 = v12;
      if ( v12 )
      {
        v14 = &a2[i];
        v15 = a2[i];
        *v12 = v15;
        v12[8] = 0LL;
        v12[9] = 0LL;
        v12[10] = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v15 + 264LL))(v15);
      }
      else
      {
        v13 = 0LL;
        v14 = &a2[i];
      }
      *(_QWORD *)(i * 8 + *((_QWORD *)this + 5)) = v13;
      v16 = *(CAnimationEngine::CTransitionVisual **)(i * 8 + *((_QWORD *)this + 5));
      if ( !v16 )
        break;
      v17 = CAnimationEngine::CTransitionVisual::Initialize(v16);
      v6 = v17;
      v19 = v17;
      if ( v17 < 0 )
      {
        v21 = 1624;
        goto LABEL_20;
      }
      v6 = (**(__int64 (__fastcall ***)(struct IAnimatedVisual *, _QWORD, __int64, _QWORD))*v14)(
             *v14,
             *((unsigned int *)this + 4),
             v18,
             (unsigned int)v17);
      v19 = v6;
      if ( (v6 & 0x80000000) != 0 )
      {
        v21 = 1625;
        goto LABEL_20;
      }
      if ( ++v10 >= a3 )
        return v6;
    }
    v21 = 1623;
  }
  else
  {
    v21 = 1616;
  }
  v19 = -2147024882;
  v6 = -2147024882;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21, 0LL);
  for ( j = 0LL; (unsigned int)j < *v9; j = (unsigned int)(j + 1) )
  {
    v23 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * j);
    if ( v23 )
    {
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v23);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * j) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 5) = 0LL;
  }
  *v9 = 0;
  return v6;
}
