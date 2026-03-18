/*
 * XREFs of ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D3274
 * Callers:
 *     ??1?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D3250 (--1-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeState@CSco.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx

  v1 = *a1;
  result = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 6);
  if ( result )
  {
    v4 = (a1[1] - *a1) >> 6 << 6;
    v5 = v4 + v1;
    while ( v1 != v5 )
    {
      v6 = *(_QWORD *)(v1 + 176);
      if ( v6 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v1 += 192LL;
    }
    a1[1] -= v4;
  }
  return result;
}
