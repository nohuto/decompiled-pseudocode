/*
 * XREFs of ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180090B70
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18018F244 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x18008E440 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x180091710 (-IsDirty@CVisualTree@@QEBA_NXZ.c)
 *     ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180092E18 (-RequestOffThreadCleanTree@CComposition@@QEAAJXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180092EB4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800ED834 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 */

__int64 __fastcall CDesktopTree::CleanTreeAndLockForRead(CDesktopTree *this)
{
  unsigned int v2; // edi
  RTL_SRWLOCK *i; // rcx
  int v5; // eax

  v2 = 0;
  for ( i = (RTL_SRWLOCK *)*((_QWORD *)this + 3); ; i = (RTL_SRWLOCK *)*((_QWORD *)this + 3) )
  {
    CTreeLock::AcquireShared(i + 713);
    if ( !CVisualTree::IsDirty(this) )
      break;
    v5 = CComposition::RequestOffThreadCleanTree(*((CComposition **)this + 3));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x5Cu, 0LL);
      CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)this + 3) + 5704LL));
      return v2;
    }
    CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)this + 3) + 5704LL));
    _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(*((_QWORD *)this + 3) + 6408LL);
  }
  return v2;
}
