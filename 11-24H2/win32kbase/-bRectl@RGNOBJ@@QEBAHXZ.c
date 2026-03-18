/*
 * XREFs of ?bRectl@RGNOBJ@@QEBAHXZ @ 0x14002618C
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x140026210 (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bRectl(RGNOBJ *this, const struct REGION_CORE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    LOBYTE(v2) = (unsigned int)Win32kRS::RegionCore_is_rect(
                                 (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
                                 a2) != 0;
  else
    LOBYTE(v2) = *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x10) == 56;
  return v2;
}
