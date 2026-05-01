/*
 * XREFs of _GenerateCandidateListForTelemetry_::_1_::dtor$11 @ 0x1806D2D5A
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GenerateCandidateListForTelemetry_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~0x20u;
    std::wstring::_Tidy_deallocate(*(void ***)(a2 + 64));
  }
}
