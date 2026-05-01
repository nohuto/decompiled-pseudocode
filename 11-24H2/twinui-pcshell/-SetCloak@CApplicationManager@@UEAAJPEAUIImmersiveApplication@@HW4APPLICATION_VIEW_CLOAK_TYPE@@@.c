/*
 * XREFs of ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18009EE50
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18009E348 (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 */

__int64 __fastcall CApplicationManager::SetCloak(__int64 a1, void *a2, int a3, int a4)
{
  unsigned int v8; // ebx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = CApplicationManager::_SetApplicationPos(
         (CApplicationManager *)(a1 - 296),
         a2,
         0LL,
         (unsigned int)(a3 != 0) + 1,
         0LL,
         a4);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v8;
}
