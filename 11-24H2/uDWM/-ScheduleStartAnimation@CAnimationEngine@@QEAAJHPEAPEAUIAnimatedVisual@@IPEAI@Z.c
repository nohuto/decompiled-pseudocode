/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18004629C
 * Callers:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180046064 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180046174 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800DA38C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z @ 0x18004647C (--0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x1800464C0 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180046894 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x180097980 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  const struct std::nothrow_t *v9; // rdx
  int v10; // ecx
  unsigned int v11; // ebx
  CBaseObject *v12; // rax
  CBaseObject *v13; // rax
  int started; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v19; // eax
  CBaseObject *v20; // [rsp+60h] [rbp+8h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v11 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(v10, (unsigned int)&UdwmAnimationEngine_Animation_Start, v11, a2, 0);
  v12 = (CBaseObject *)operator new[](0x48uLL, v9);
  v20 = v12;
  if ( !v12 )
  {
    v20 = 0LL;
    goto LABEL_5;
  }
  v13 = (CBaseObject *)CAnimationEngine::CTransitionVisualSet::CTransitionVisualSet(v12, v11, a2);
  v20 = v13;
  if ( !v13 )
  {
LABEL_5:
    started = -2147024882;
    v15 = 126;
    goto LABEL_6;
  }
  started = CAnimationEngine::CTransitionVisualSet::Initialize(v13, a3, a4);
  if ( started < 0 )
  {
    v15 = 128;
    goto LABEL_6;
  }
  v16 = *((_DWORD *)this + 16);
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    started = -2147024362;
    v19 = 179;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v19, 0LL);
    v15 = 129;
    goto LABEL_6;
  }
  if ( v17 <= *((_DWORD *)this + 15) )
  {
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v20;
    *((_DWORD *)this + 16) = v17;
    goto LABEL_14;
  }
  started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v20);
  if ( started < 0 )
  {
    v19 = 190;
    goto LABEL_17;
  }
LABEL_14:
  *a5 = v11;
  started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
  if ( started >= 0 )
    goto LABEL_15;
  v15 = 133;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v15, 0LL);
  if ( v20 )
    CBaseObject::Release(v20);
LABEL_15:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)started;
}
