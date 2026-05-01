/*
 * XREFs of _anonymous_namespace_::to_com_ptr_JointResize_ @ 0x1805E12A0
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1802136B0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall anonymous_namespace_::to_com_ptr_JointResize_(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  if ( a2 )
  {
    *a1 = a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return a1;
}
