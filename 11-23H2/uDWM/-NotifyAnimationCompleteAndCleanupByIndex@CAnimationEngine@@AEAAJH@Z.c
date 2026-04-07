/*
 * XREFs of ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18005820C
 * Callers:
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180056ECC (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180056F5C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180057200 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18005830C (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x1800583B8 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(CAnimationEngine *this, unsigned int a2)
{
  __int64 v2; // r15
  int v4; // ecx
  CAnimationEngine::CTransitionVisualSet *v5; // rbp
  unsigned int v6; // edi
  unsigned int i; // esi
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  CBaseObject *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * v2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(
      v4,
      (unsigned int)&UdwmAnimationEngine_Animation_End,
      *((_DWORD *)v5 + 4),
      *((_DWORD *)v5 + 7),
      *((_DWORD *)v5 + 6));
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v8 = *(void (__fastcall ****)(_QWORD, _QWORD))(*((_QWORD *)this + 9) + 8LL * i);
    if ( v8 )
      (**v8)(v8, *((unsigned int *)v5 + 4));
  }
  CAnimationEngine::CTransitionVisualSet::StopStoryboard(v5);
  *((_BYTE *)this + 112) = 1;
  v9 = *(CBaseObject **)(*((_QWORD *)this + 5) + 8 * v2);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = *((_DWORD *)this + 16);
  if ( (unsigned int)v2 >= v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x218u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x59Bu, 0LL);
    v6 = -2147024809;
  }
  else
  {
    v11 = v10 - 1;
    if ( (unsigned int)v2 < (unsigned int)v11 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
    --*((_DWORD *)this + 16);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v6;
}
