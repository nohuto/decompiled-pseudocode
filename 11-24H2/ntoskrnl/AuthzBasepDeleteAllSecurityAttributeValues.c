/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x1403B9460
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B8958 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140697CD4 (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B94E0 (AuthzBasepFreeSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2)
{
  __int64 *i; // rax
  int v4; // ecx
  __int64 result; // rax
  int v6; // ecx
  _QWORD *v7; // r9
  _QWORD *v8; // rcx

  LOBYTE(a2) = 1;
  AuthzBasepFreeSecurityAttributeValues(a1, a2);
  for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)(a1 + 72); i = (__int64 *)*i )
  {
    v4 = *((_DWORD *)i + 8);
    if ( (v4 & 2) == 0 )
    {
      v6 = v4 | 4;
      *((_DWORD *)i + 8) = v6;
      if ( (v6 & 2) == 0 )
      {
        v7 = *(_QWORD **)(a1 + 104);
        v8 = i + 2;
        if ( *v7 != a1 + 96 )
          __fastfail(3u);
        *v8 = a1 + 96;
        i[3] = (__int64)v7;
        *v7 = v8;
        *(_QWORD *)(a1 + 104) = v8;
        *((_DWORD *)i + 8) |= 2u;
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
