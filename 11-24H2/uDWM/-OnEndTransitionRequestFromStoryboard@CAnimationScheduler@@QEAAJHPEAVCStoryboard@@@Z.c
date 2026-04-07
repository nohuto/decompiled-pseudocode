/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18005A7EC
 * Callers:
 *     ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x18005A784 (-OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D3200 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180043AAC (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180045A6C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18005A948 (-_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  __m128i *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  struct _GUID v14; // [rsp+30h] [rbp-28h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v6, &UdwmSystemAnimation_EndTransitionRequest, a2);
  v7 = -2147467259;
  v8 = 0LL;
  LODWORD(v9) = *((_DWORD *)this + 10);
  while ( 1 )
  {
    v9 = (unsigned int)(v9 - 1);
    if ( (int)v9 < 0 )
      break;
    v10 = *((_QWORD *)this + 2);
    v8 = *(__m128i **)(v10 + 8 * v9);
    if ( !v8[1].m128i_i32[2] && v8[4].m128i_i32[2] == a2 && (struct CStoryboard *)v8[5].m128i_i64[1] == a3 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(v8->m128i_i64[0] + 96))(*(_QWORD *)(v10 + 8 * v9));
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180106448, 1LL, v11, 0x132u, 0LL);
      }
      else
      {
        v14 = (struct _GUID)v8[3];
        v12 = CAnimationScheduler::_OnEndAnimationClock(this, &v14);
        v7 = v12;
        if ( v12 >= 0 )
          goto LABEL_10;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180106448, 1LL, v12, 0x135u, 0LL);
      }
      break;
    }
  }
  if ( v8 && v8[4].m128i_i32[2] == a2 && (!v8[1].m128i_i32[2] || !v8[4].m128i_i8[12]) )
    CStoryboard::Abandon(v8);
LABEL_10:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
