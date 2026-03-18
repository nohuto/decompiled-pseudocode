/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurNineGrid__ @ 0x1802DF960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurNineGrid__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp1xBlurNineGrid )
    return (*(__int64 (__fastcall **)(struct CBrush *))(*(_QWORD *)CProjectedShadow::s_cp1xBlurNineGrid + 16LL))(CProjectedShadow::s_cp1xBlurNineGrid);
  return result;
}
