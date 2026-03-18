/*
 * XREFs of ??$_Construct_n@$$V@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x14000EC1C
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000F228 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memset_0 @ 0x140005D98 (memset_0.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@E@std@@@std@@YAPEAEAEAV?$allocator@E@0@AEA_K@Z @ 0x14000EAD4 (--$_Allocate_at_least_helper@V-$allocator@E@std@@@std@@YAPEAEAEAV-$allocator@E@0@AEA_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x14000EFE4 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<unsigned char>::_Construct_n<>(_QWORD *a1, size_t a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  size_t v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v6 = a2;
    v4 = std::_Allocate_at_least_helper<std::allocator<unsigned char>>((__int64)a1, &v6);
    *a1 = v4;
    v5 = v4;
    a1[2] = (char *)v4 + a2;
    memset_0(v4, 0, a2);
    v6 = 0LL;
    a1[1] = (char *)v5 + a2;
    std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v6);
  }
}
