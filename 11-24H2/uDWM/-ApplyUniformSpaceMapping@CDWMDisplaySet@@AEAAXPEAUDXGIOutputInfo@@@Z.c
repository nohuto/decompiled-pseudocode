/*
 * XREFs of ?ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z @ 0x180057C10
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180056D54 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CDWMDisplaySet::ApplyUniformSpaceMapping(CDWMDisplaySet *this, struct DXGIOutputInfo *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( (unsigned int)GetUniformSpaceMapping(*((_QWORD *)a2 + 13), &v3) )
    *(_OWORD *)((char *)a2 + 204) = v3;
}
