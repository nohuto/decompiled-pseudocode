/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180045818
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18007E198 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180043044 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180043DF4 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180046174 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800BA5E0 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStoryboard::ScheduleStartAnimation(__m128i *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rsi
  int v5; // r12d
  __int64 v6; // r14
  unsigned int v7; // edx
  int started; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // r8d
  int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  void *v15[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-Ch]
  unsigned int v17; // [rsp+48h] [rbp-8h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+38h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = -2147467259;
  v3 = 0LL;
  if ( this[1].m128i_i32[2] == 2 )
  {
    if ( this[7].m128i_i32[2] )
    {
      v3 = CDesktopManager::AcquireAnimationEngine();
      if ( v3 )
      {
        v5 = *(_DWORD *)(*(__int64 (__fastcall **)(__m128i *))(this->m128i_i64[0] + 16))(this);
        DynArrayImpl<0>::DynArrayImpl<0>((__int64)v15, 0LL, 0);
        v6 = 0LL;
        v7 = v17;
        while ( (unsigned int)v6 < this[7].m128i_i32[2] )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(this[6].m128i_i64[0] + 8 * v6) + 40LL);
          v18 = v10;
          v11 = v7 + 1;
          if ( v7 + 1 < v7 )
          {
            v2 = -2147024362;
            v12 = -2147024362;
            v13 = 179;
            goto LABEL_22;
          }
          if ( v11 <= v16 )
          {
            *((_QWORD *)v15[0] + v7++) = v10;
            v17 = v11;
          }
          else
          {
            v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8, 1, &v18);
            v2 = v12;
            if ( v12 < 0 )
            {
              v13 = 190;
LABEL_22:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v13, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v12,
                0x1679u,
                0LL);
              goto LABEL_19;
            }
            v7 = v17;
          }
          v6 = (unsigned int)(v6 + 1);
        }
        started = CAnimationEngine::ScheduleStartAnimation(v3, v5);
        v2 = started;
        if ( started < 0 )
        {
          v14 = 5755;
        }
        else
        {
          this[1].m128i_i32[2] = 3;
          CStoryboard::_LogStoryboardEvent(this, v9);
          if ( !(*(unsigned __int8 (__fastcall **)(__m128i *))(this->m128i_i64[0] + 128))(this)
            || (started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance),
                v2 = started,
                started >= 0) )
          {
            DynArrayImpl<0>::~DynArrayImpl<0>(v15);
            CStoryboard::_NotifyStoryboardState((__int64)this, 3);
            (*(void (__fastcall **)(__m128i *))(this->m128i_i64[0] + 40))(this);
            goto LABEL_11;
          }
          v14 = 5760;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1LL,
          started,
          v14,
          0LL);
LABEL_19:
        DynArrayImpl<0>::~DynArrayImpl<0>(v15);
      }
    }
  }
  CStoryboard::Abandon((CStoryboard *)this);
  if ( v3 )
LABEL_11:
    CAnimationEngine::Release(v3);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v2;
}
