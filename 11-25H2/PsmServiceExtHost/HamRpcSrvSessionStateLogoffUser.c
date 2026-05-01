/*
 * XREFs of HamRpcSrvSessionStateLogoffUser @ 0x180081750
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007F7F4 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 */

__int64 __fastcall HamRpcSrvSessionStateLogoffUser(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // ecx
  __int64 result; // rax

  v4 = HamSrvLogoffUser(a1, a2, a3, a4);
  result = 0LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
