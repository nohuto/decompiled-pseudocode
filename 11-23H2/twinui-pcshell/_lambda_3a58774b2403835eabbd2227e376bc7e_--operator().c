/*
 * XREFs of _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1803AC8CC
 * Callers:
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE1E0 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180061D8C (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1803B72E4 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_3a58774b2403835eabbd2227e376bc7e_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx

  if ( (int)CAppViewManager::_ObliterateOperation(*(CAppViewManager **)a1, *(const struct _GUID **)(a1 + 8)) < 0
    && **(_QWORD **)(a1 + 16) )
  {
    v2 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CAppViewManager::_TransferAllWindowsToNextGlomWorker(*(_QWORD *)a1, **(_QWORD **)(a1 + 16), 0LL, -3);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 176LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 120LL),
      **(_QWORD **)(a1 + 16));
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
