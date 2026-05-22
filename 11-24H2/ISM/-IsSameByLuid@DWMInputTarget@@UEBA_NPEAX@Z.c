/*
 * XREFs of ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800F58F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180052188 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180074958 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

bool __fastcall DWMInputTarget::IsSameByLuid(DWMInputTarget *this, void *a2)
{
  __int64 v2; // rax
  struct _LUID *Luid; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( !v2 )
    return 0;
  if ( !*(_BYTE *)(v2 + 480) )
    return 0;
  v6 = 0LL;
  if ( (int)NtQueryCompositionInputSinkLuid(a2, &v6) < 0 )
    return 0;
  if ( !*(_BYTE *)(*((_QWORD *)this + 14) + 480LL) )
    std::_Throw_bad_optional_access();
  Luid = (struct _LUID *)LegacyInputSinkData::GetLuid((LegacyInputSinkData *)(*((_QWORD *)this + 14) + 48LL));
  return operator==(&v6, Luid);
}
