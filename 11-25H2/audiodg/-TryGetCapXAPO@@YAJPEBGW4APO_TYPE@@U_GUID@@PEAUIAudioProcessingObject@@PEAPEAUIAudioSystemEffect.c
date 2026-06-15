/*
 * XREFs of ?TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x14004408C
 * Callers:
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x140043EBC (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TryGetCapXAPO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64),
        __int64 a5)
{
  if ( (**a4)(a4, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17, a5) >= 0 )
    return 0LL;
  else
    return 0LL;
}
