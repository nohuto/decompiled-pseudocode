/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800562C8
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800561B0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E4564 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800566A0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180056754 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x1800583B8 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rax
  int started; // edi
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v16; // eax
  unsigned int v17; // eax
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v19; // [rsp+60h] [rbp+8h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  v19 = (CBaseObject *)v11;
  if ( !v11 )
  {
    v19 = 0LL;
    started = -2147024882;
    v16 = 128;
    goto LABEL_17;
  }
  *(_DWORD *)(v11 + 8) = 1;
  *(_QWORD *)v11 = &CAnimationEngine::CTransitionVisualSet::`vftable';
  *(_DWORD *)(v11 + 16) = v10;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = a2;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_WORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 56) = 0LL;
  *(_QWORD *)(v11 + 64) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  v19 = (CBaseObject *)v11;
  started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
  if ( started < 0 )
  {
    v16 = 130;
    goto LABEL_17;
  }
  v13 = *((_DWORD *)this + 16);
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    started = -2147024362;
    v17 = 181;
    goto LABEL_14;
  }
  if ( v14 > *((_DWORD *)this + 15) )
  {
    started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v19);
    if ( started >= 0 )
      goto LABEL_8;
    v17 = 192;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, v17, 0LL);
    v16 = 131;
    goto LABEL_17;
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v13) = v19;
  *((_DWORD *)this + 16) = v14;
LABEL_8:
  *a5 = v10;
  started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
  if ( started >= 0 )
    goto LABEL_9;
  v16 = 135;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, v16, 0LL);
  if ( v19 )
    CBaseObject::Release(v19);
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return (unsigned int)started;
}
