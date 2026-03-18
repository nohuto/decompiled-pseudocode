/*
 * XREFs of CiProcessNotification @ 0x140001180
 * Callers:
 *     <none>
 * Callees:
 *     CiProcessSuspend @ 0x1400011E0 (CiProcessSuspend.c)
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 *     CiProcessLocate @ 0x14000F220 (CiProcessLocate.c)
 *     CiProcessDereference @ 0x14000F700 (CiProcessDereference.c)
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
