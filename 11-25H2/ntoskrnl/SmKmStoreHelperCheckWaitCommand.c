/*
 * XREFs of SmKmStoreHelperCheckWaitCommand @ 0x14020CDBC
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x14020C8C4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14020CC0C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperSendCommand @ 0x14020CD34 (SmKmStoreHelperSendCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1404818F4 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

__int64 __fastcall SmKmStoreHelperCheckWaitCommand(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v6; // eax
  char v7; // al

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 )
  {
    if ( a2 || (v2 & 1) != 0 )
    {
      v6 = KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, 0LL);
      if ( !v6 )
      {
        KeResetEvent((PRKEVENT)(a1 + 32));
        v7 = *(_DWORD *)(a1 + 56) & 2;
        *(_DWORD *)(a1 + 56) = 0;
        return v7 != 0 ? 0xC0000120 : 0;
      }
      return v6;
    }
    else
    {
      return (unsigned int)-1073741650;
    }
  }
  return v3;
}
