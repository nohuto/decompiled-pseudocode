/*
 * XREFs of _lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_ @ 0x1801AC648
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___ @ 0x1801AC574 (CIAMGlobals--QueueViewManagementTask__lambda_17fa972c2310d7312f81a78f2bb80b5c___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::_scalar_deleting_destructor_ @ 0x1801AC600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--_scala.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
