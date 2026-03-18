/*
 * XREFs of ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14000A454
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400499B8 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050598 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14000A528 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::PostFlipManagerPresentStatusStatistics(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // edi
  int v7; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+40h] [rbp-19h]
  int v10; // [rsp+44h] [rbp-15h]
  GUID Src; // [rsp+50h] [rbp-9h] BYREF
  int v12; // [rsp+60h] [rbp+7h]
  int *v13; // [rsp+68h] [rbp+Fh]
  GUID v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+27h]
  _QWORD *v16; // [rsp+88h] [rbp+2Fh]

  v10 = 0;
  v8[0] = a3;
  Src = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  v13 = &v7;
  v8[1] = a2;
  v9 = a4;
  v7 = 1;
  v14 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
  v12 = 4;
  v15 = 24;
  v16 = v8;
  v5 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(2u, &Src);
  if ( v5 >= 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 224) + 8LL))(*(_QWORD *)(a1 + 224), 0LL);
  return (unsigned int)v5;
}
