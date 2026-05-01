/*
 * XREFs of ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1801E718C
 * Callers:
 *     ??1sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18021B2B8 (--1sentry@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180348774 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$2 @ 0x1806D0A81 (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$2.c)
 *     _std::getline_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$1 @ 0x1806D3502 (_std--getline_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsign_ea_1806D3502.c)
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::sentry::sentry_::_1_::dtor$0 @ 0x1806E2637 (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--sentry--sentry_--_1_--dto.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(__int64 a1)
{
  __int64 result; // rax

  result = std::basic_ios<unsigned short>::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
