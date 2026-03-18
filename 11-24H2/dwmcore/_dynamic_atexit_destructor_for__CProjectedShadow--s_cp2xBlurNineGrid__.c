/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurNineGrid__ @ 0x1802DFA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurNineGrid__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp2xBlurNineGrid )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)CProjectedShadow::s_cp2xBlurNineGrid + 16LL))(CProjectedShadow::s_cp2xBlurNineGrid);
  return result;
}
