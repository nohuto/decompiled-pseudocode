/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18006B8CC
 * Callers:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031AE8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x18006B8FELL);
  }
  *a1 = v2;
}
