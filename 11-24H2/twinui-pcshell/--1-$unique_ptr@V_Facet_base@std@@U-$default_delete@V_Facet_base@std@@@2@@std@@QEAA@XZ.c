/*
 * XREFs of ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1801701F4
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18016F840 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x18059D24C (--1SnapLayoutProvider@@UEAA@XZ.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x180610944 (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 *     _std::use_facet_std::codecvt_char_char__Mbstatet____::_1_::dtor$1 @ 0x1806D0B8F (_std--use_facet_std--codecvt_char_char__Mbstatet____--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
