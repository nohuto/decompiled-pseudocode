/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180052338
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180018290 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180052110 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800F3C20 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B664 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  bool v2; // zf
  const struct _LUID *result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 36) )
  {
    v4 = 0LL;
    if ( *((_BYTE *)this + 8) > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkLuid(*(_QWORD *)this, &v4);
    v2 = *((_BYTE *)this + 36) == 0;
    *(_QWORD *)((char *)this + 28) = v4;
    if ( v2 )
      *((_BYTE *)this + 36) = 1;
  }
  result = (const struct _LUID *)((char *)this + 28);
  if ( !*((_BYTE *)this + 36) )
    std::_Throw_bad_optional_access();
  return result;
}
