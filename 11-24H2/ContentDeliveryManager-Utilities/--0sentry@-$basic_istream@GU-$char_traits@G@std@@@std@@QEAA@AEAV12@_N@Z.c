/*
 * XREFs of ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x18004B498
 * Callers:
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x18004CB30 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18004CC80 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 * Callees:
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18005B6C4 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_istream<unsigned short>::sentry::sentry(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)a1 = a2;
  v3 = *(_QWORD *)(*(int *)(*(_QWORD *)a2 + 4LL) + a2 + 72);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_BYTE *)(a1 + 8) = std::basic_istream<unsigned short>::_Ipfx(*(_QWORD *)a1);
  return a1;
}
