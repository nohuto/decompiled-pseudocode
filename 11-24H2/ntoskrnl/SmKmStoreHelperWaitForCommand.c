/*
 * XREFs of SmKmStoreHelperWaitForCommand @ 0x1402F9948
 * Callers:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402F95BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

__int64 __fastcall SmKmStoreHelperWaitForCommand(__int64 a1, __int64 a2, LARGE_INTEGER *a3, int a4)
{
  unsigned int v8; // ecx
  int v9; // eax
  signed __int32 v11; // eax

  while ( 1 )
  {
    v8 = KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, a3);
    if ( !v8 )
      break;
    if ( !a4 )
      return v8;
    v11 = *(_DWORD *)(a1 + 56);
    if ( (v11 & 1) == 0 && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v11 | 2, v11) & 1) == 0 )
      return (unsigned int)-1073741536;
  }
  KeResetEvent((PRKEVENT)(a1 + 32));
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 96);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 112);
  }
  v9 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = 0;
  return (v9 & 2) != 0 ? 0xC0000120 : 0;
}
