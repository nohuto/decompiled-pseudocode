/*
 * XREFs of RtlRemovePrivileges @ 0x180111500
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x180163A40 (NtAdjustPrivilegesToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlRemovePrivileges(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 i; // rcx
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 j; // rcx
  unsigned __int64 v11; // r9
  _DWORD v12[4]; // [rsp+30h] [rbp-1D8h] BYREF
  _DWORD v13[108]; // [rsp+40h] [rbp-1C8h] BYREF

  v3 = 0LL;
  v12[0] = 0;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v7 = *(_DWORD *)(a2 + 4 * i);
    if ( (unsigned int)(v7 - 2) > 0x22 )
      return 3221225485LL;
    v3 |= 1LL << v7;
  }
  result = NtQueryInformationToken(a1, 3LL, v13, 432LL, v12);
  if ( (int)result >= 0 )
  {
    v9 = v13[0];
    for ( j = 0LL; (unsigned int)j < v9; j = (unsigned int)(j + 1) )
    {
      v11 = (unsigned int)v13[3 * j + 1];
      if ( _bittest64(&v3, v11) )
      {
        v3 &= ~(1LL << v11);
      }
      else
      {
        v13[3 * j + 3] = 4;
        v9 = v13[0];
      }
    }
    if ( v3 )
      return 262LL;
    else
      return NtAdjustPrivilegesToken(a1, 0LL, v13);
  }
  return result;
}
