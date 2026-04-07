/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180042C1C
 * Callers:
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x180044354 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D2DE0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180043AAC (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180044548 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18004721C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180058814 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800813C4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180089D70 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180099A7C (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 i; // rdx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __m128i *v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  CAnimationScheduler *v20; // rcx
  int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-20h]
  CMILRefCountBase *v24[2]; // [rsp+30h] [rbp-10h] BYREF

  v24[1] = (CMILRefCountBase *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v9, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v24[0] = 0LL;
  v10 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v16 = *(__m128i **)(*((_QWORD *)this + 2) + 8 * i);
    if ( v16[4].m128i_i32[2] == a2 )
    {
      v17 = v16[2];
      v18 = v16[2].m128i_i64[0];
      if ( a3 )
      {
        v19 = v18 - *(_QWORD *)&a3->Data1;
        if ( !v19 )
          v19 = _mm_srli_si128(v17, 8).m128i_u64[0] - *(_QWORD *)a3->Data4;
      }
      else
      {
        v19 = v18 - *(_QWORD *)&GUID_NULL.Data1;
        if ( !v19 )
          v19 = _mm_srli_si128(v17, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      }
      if ( !v19 && !v16[1].m128i_i32[2] )
      {
        v24[0] = *(CMILRefCountBase **)(*((_QWORD *)this + 2) + 8 * i);
        CMILRefCountBase::AddRef((CMILRefCountBase *)v16);
        v10 = 0;
        break;
      }
    }
  }
  if ( !v24[0] )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v10 = -2147024809;
      goto LABEL_9;
    }
    v13 = CStoryboardFactory::Create(a2, a4, v24);
    v10 = v13;
    if ( v13 < 0 )
    {
      v23 = 215;
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180106448, 1LL, v13, v23, 0LL);
      goto LABEL_7;
    }
    if ( a3 )
      *((struct _GUID *)v24[0] + 2) = *a3;
    if ( !(*(unsigned __int8 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v24[0] + 24LL))(v24[0]) )
      goto LABEL_19;
    v14 = *((_DWORD *)this + 10);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v10 = -2147024362;
      v21 = -2147024362;
      v22 = 179;
    }
    else
    {
      if ( v15 <= *((_DWORD *)this + 9) )
      {
        *(CMILRefCountBase **)(*((_QWORD *)this + 2) + 8LL * v14) = v24[0];
        *((_DWORD *)this + 10) = v15;
LABEL_18:
        CMILRefCountBase::AddRef(v24[0]);
        goto LABEL_19;
      }
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, v24);
      v10 = v21;
      if ( v21 >= 0 )
        goto LABEL_18;
      v22 = 190;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v22, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180106448, 1LL, v21, 0xE2u, 0LL);
    goto LABEL_7;
  }
  if ( v10 < 0 )
    goto LABEL_7;
LABEL_19:
  if ( !(*(unsigned __int8 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v24[0] + 24LL))(v24[0]) )
  {
    v10 = -2147024809;
    goto LABEL_7;
  }
  if ( !CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v24[0]) )
  {
    CStoryboard::Abandon(v24[0]);
    v10 = -2147467259;
    goto LABEL_7;
  }
  v13 = (*(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v24[0] + 88LL))(v24[0]);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 250;
    goto LABEL_28;
  }
  CStoryboard::SetParentStoryboard(v24[0], a4);
  v13 = CTransitionVisualController::RemoveTargetsForStoryboard(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          v24[0],
          0,
          0);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 254;
    goto LABEL_28;
  }
  v13 = CAnimationScheduler::_OnBeginAnimationClock(v20, v24[0], a3, a5);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 257;
    goto LABEL_28;
  }
LABEL_7:
  if ( v24[0] )
  {
    CStoryboard::Release(v24[0]);
    v24[0] = 0LL;
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v10;
}
