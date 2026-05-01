/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x180066D58
 * Callers:
 *     ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18001D280 (--0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>(
        __int64 a1)
{
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_WORD *)(a1 + 16) = 0;
  return a1;
}
