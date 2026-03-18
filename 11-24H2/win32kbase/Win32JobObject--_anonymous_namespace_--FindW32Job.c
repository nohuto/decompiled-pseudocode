/*
 * XREFs of Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401A9D28
 * Callers:
 *     IsHandleEntrySecure @ 0x140162894 (IsHandleEntrySecure.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401A9E50 (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401A9F80 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401AA430 (-Terminated@Win32JobObject@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Win32JobObject::_anonymous_namespace_::FindW32Job(__int64 a1)
{
  int v1; // ebx
  __int64 *result; // rax

  v1 = a1;
  for ( result = *(__int64 **)(W32GetUserSessionState(a1) + 69352);
        result && *((_DWORD *)result + 4) != v1;
        result = (__int64 *)*result )
  {
    ;
  }
  return result;
}
