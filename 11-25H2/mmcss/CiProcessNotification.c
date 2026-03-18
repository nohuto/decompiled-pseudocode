/*
 * XREFs of CiProcessNotification @ 0x1C0001180
 * Callers:
 *     <none>
 * Callees:
 *     CiProcessSuspend @ 0x1C00011E0 (CiProcessSuspend.c)
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
 *     CiProcessLocate @ 0x1C000DC90 (CiProcessLocate.c)
 *     CiProcessDereference @ 0x1C000E170 (CiProcessDereference.c)
 */

__int64 __fastcall CiProcessNotification(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbx
  unsigned __int8 v4; // al

  result = CiProcessLocate();
  v3 = (void *)result;
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))CiKernelInterface)(a1);
    CiProcessSuspend(v3, v4);
    return CiProcessDereference(v3);
  }
  return result;
}
