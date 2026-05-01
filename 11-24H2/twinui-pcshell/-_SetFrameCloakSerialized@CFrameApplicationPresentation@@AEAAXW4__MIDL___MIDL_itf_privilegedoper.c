/*
 * XREFs of ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F6600
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801F2D00 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801F65D0 (-Hide@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _lambda_d2fa7908b891c12cbb1669318d2d4613_::operator() @ 0x18022CC6C (_lambda_d2fa7908b891c12cbb1669318d2d4613_--operator().c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180299B4C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_SetFrameCloakSerialized(__int64 a1, unsigned int a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 208) )
    return (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             a2);
  v4 = a2;
  v3 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___(a1, &v3);
}
