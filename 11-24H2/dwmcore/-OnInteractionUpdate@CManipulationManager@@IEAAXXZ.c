/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0
 * Callers:
 *     _lambda_efd5facd022cf831717386964e02a8d7_::_lambda_invoker_cdecl_ @ 0x180211930 (_lambda_efd5facd022cf831717386964e02a8d7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x18008E440 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18008FE88 (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800905E4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180090610 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800906AC (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18009099C (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800913EC (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180091460 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180092EB4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801B911C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x1801B9B04 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801B9B28 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1801FA50C (-SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180210994 (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 *     ?RevalidateMCTrees@CManipulationContext@@CAXPEAUMCCollections@@@Z @ 0x1802173C0 (-RevalidateMCTrees@CManipulationContext@@CAXPEAUMCCollections@@@Z.c)
 *     ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z @ 0x180217444 (-RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180222FE8 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z @ 0x180226C9C (-OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180256A64 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  int *v2; // r15
  RTL_SRWLOCK *v3; // rcx
  int v4; // esi
  char v5; // r14
  unsigned int *v6; // rbx
  void **v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  CVisual *v10; // r13
  struct CInteraction *v11; // rsi
  __int64 v12; // rdx
  int v13; // edx
  int v14; // edx
  void *v15; // rcx
  int v16; // eax
  int v17; // edx
  void *v18; // rcx
  const struct CInteraction *InteractionInternal; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r14d
  const struct CInteraction *MCRoot; // rax
  int *v24; // r8
  struct CManipulationContext *ManipulationContext; // rax
  CCachedVisualImage *v26; // rcx
  __int64 *v27; // r15
  __int64 v28; // rax
  void (__fastcall *v29)(__int64 *, unsigned __int64, CCachedVisualImage **); // r12
  __int64 v30; // r8
  CCachedVisualImage *v31; // rcx
  int v32; // [rsp+38h] [rbp-69h] BYREF
  CCachedVisualImage *v33; // [rsp+40h] [rbp-61h] BYREF
  int v34; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-51h]
  int *v36; // [rsp+58h] [rbp-49h]
  _BYTE v37[56]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v38[56]; // [rsp+98h] [rbp-9h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v37, "GestureTargetingUpdate", 0LL);
  v2 = &v32;
  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 2) + 5704LL);
  v4 = 0;
  v32 = 0;
  CTreeLock::AcquireShared(v3);
  v5 = 0;
  v34 = 0;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v38,
      "GestureTargetingUpdateEvent",
      (const struct InputTraceLogging::PerfRegion *)v37);
    v6 = 0LL;
    EnterCriticalSection(&stru_1803F9178);
    v7 = (void **)CManipulationManager::s_InteractionUpdateQueue;
    if ( *((void ***)CManipulationManager::s_InteractionUpdateQueue + 1) != &CManipulationManager::s_InteractionUpdateQueue
      || (v8 = *(_QWORD *)CManipulationManager::s_InteractionUpdateQueue,
          *(void **)(*(_QWORD *)CManipulationManager::s_InteractionUpdateQueue + 8LL) != CManipulationManager::s_InteractionUpdateQueue) )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InteractionUpdateQueue = *(void **)CManipulationManager::s_InteractionUpdateQueue;
    *(_QWORD *)(v8 + 8) = &CManipulationManager::s_InteractionUpdateQueue;
    if ( v7 == &CManipulationManager::s_InteractionUpdateQueue )
    {
      v9 = dword_1803F9170;
    }
    else
    {
      v6 = (unsigned int *)v7[2];
      operator delete(v7, 0x18uLL);
      v9 = --dword_1803F9170;
    }
    if ( v2 )
    {
      *v2 = v9;
      v4 = v32;
    }
    LeaveCriticalSection(&stru_1803F9178);
    v36 = 0LL;
    v2 = 0LL;
    if ( v6 )
    {
      InputTraceLogging::GestureTargeting::InteractionUpdate((const struct CManipulationManager::InteractionUpdate *)v6);
      v10 = (CVisual *)*((_QWORD *)v6 + 1);
      *((_QWORD *)v6 + 1) = 0LL;
      v11 = (struct CInteraction *)*((_QWORD *)v6 + 2);
      *((_QWORD *)v6 + 2) = 0LL;
      v12 = *v6;
      if ( (int)v12 <= 5 )
      {
        if ( (_DWORD)v12 == 5 )
        {
          CManipulationManager::OnCapturePointer(this, v6[6], v11);
        }
        else
        {
          if ( (unsigned int)v12 >= 4 )
          {
            if ( (_DWORD)v12 == 4 )
            {
              v33 = 0LL;
              InteractionInternal = CVisual::GetInteractionInternal(v10);
              v22 = 0;
              if ( InteractionInternal )
              {
                MCRoot = CManipulationContext::GetMCRoot(InteractionInternal);
                ManipulationContext = CManipulationContext::FindManipulationContext(
                                        (CManipulationManager *)((char *)this + 160),
                                        MCRoot,
                                        v24);
                if ( ManipulationContext )
                  v22 = *((_DWORD *)ManipulationContext + 8);
              }
              v26 = v33;
              v27 = (__int64 *)*((_QWORD *)this + 2);
              v28 = *v27;
              v33 = 0LL;
              v29 = *(void (__fastcall **)(__int64 *, unsigned __int64, CCachedVisualImage **))(v28 + 64);
              if ( v26 )
                CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v26, v20, v21);
              v35 = v22 | 0xFFFFFFFE00000000uLL;
              v29(v27, v35, &v33);
              v31 = v33;
              if ( v33 )
              {
                CManipulationContext::OnVisualPropertyChange(v10, v33);
                v31 = v33;
              }
              v5 = 1;
              if ( v31 )
                CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v31, v12, v30);
              v2 = v36;
            }
            goto LABEL_14;
          }
          CManipulationContext::InvalidateMCs((char *)this + 160, v10, v11, (unsigned int)v12, &v34);
        }
      }
      else
      {
        v13 = v12 - 6;
        if ( !v13 )
        {
          CManipulationManager::OnCaptureManipulation(this, v11, v6[6], *((_QWORD *)v6 + 4));
          goto LABEL_14;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          CInteractionProcessor::SetInteractionConfiguration(
            (char *)v11 + 360,
            v6[10],
            v6[11],
            *((_QWORD *)v6 + 7),
            v6[12]);
          v15 = (void *)*((_QWORD *)v6 + 7);
          if ( v15 )
            operator delete(v15);
          goto LABEL_14;
        }
        v17 = v14 - 1;
        if ( !v17 )
        {
          CInteractionProcessor::SetTemporaryConfiguration(
            (_BYTE *)v11 + 360,
            v6[11],
            v6[10],
            v6[16] & 1,
            **((_DWORD **)v6 + 7));
          v18 = (void *)*((_QWORD *)v6 + 7);
          if ( v18 )
            operator delete(v18, 0LL);
          goto LABEL_14;
        }
        v12 = (unsigned int)(v17 - 1);
        if ( !(_DWORD)v12 )
        {
          LODWORD(v12) = (v6[16] & 2) != 0;
          CInteractionProcessor::SetRailsEnabled((char *)v11 + 360, v12, v6[11]);
LABEL_14:
          if ( v10 )
            CQueue<CResource *>::Insert((char *)this + 80, v12, v10);
          if ( v11 )
            CQueue<CResource *>::Insert((char *)this + 80, v12, v11);
          CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
            (CManipulationManager::InteractionUpdate *)v6,
            v12);
          v4 = v32;
          goto LABEL_19;
        }
        if ( (_DWORD)v12 != 1 )
          goto LABEL_14;
      }
      v5 = 1;
      goto LABEL_14;
    }
LABEL_19:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v38);
    v16 = v4--;
    v32 = v4;
  }
  while ( v16 );
  if ( v5 )
  {
    CManipulationContext::RevalidateMCTrees((CManipulationManager *)((char *)this + 160));
    v32 = 0;
    CManipulationContext::RevalidateMCsAndLists((CManipulationManager *)((char *)this + 160), &v32);
    CManipulationContext::RevalidationCleanup((unsigned int)v32, (char *)this + 160, (char *)this + 80);
  }
  CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)this + 2) + 5704LL));
  if ( *((_DWORD *)this + 24) )
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 2), 0LL, 0x4000LL);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v37);
}
