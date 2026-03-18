/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140026690
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140028A10 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z @ 0x1400D8464 (-RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, const struct REGION_CORE *a4)
{
  __int64 v5; // rax
  unsigned __int8 v6; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_bMerge(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             (struct REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)),
             (const struct REGION_CORE *)((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)),
             a4,
             v6);
  v5 = *(_QWORD *)this;
  v10[1] = this;
  v7 = (v5 + 24) & -(__int64)(v5 != 0);
  v9 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
  v8 = (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL);
  v10[0] = &v7;
  return (unsigned __int8)RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___(
                            (unsigned int)&v7,
                            (unsigned int)&v9,
                            (unsigned int)&v8,
                            (_DWORD)a4,
                            (__int64)v10);
}
