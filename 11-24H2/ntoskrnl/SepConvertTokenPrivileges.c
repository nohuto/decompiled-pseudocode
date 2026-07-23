/*
 * XREFs of SepConvertTokenPrivileges @ 0x140450078
 * Callers:
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepConvertTokenPrivileges(_QWORD *a1, _DWORD *a2)
{
  __int64 v2; // r11
  unsigned int i; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 result; // rax

  v2 = 0LL;
  for ( i = 0; i <= 0x24; ++i )
  {
    v4 = 1LL << i;
    if ( ((1LL << i) & a1[8]) != 0 )
    {
      v5 = 3 * v2;
      *(_QWORD *)&a2[v5 + 1] = (int)i;
      result = -(v4 & a1[9]);
      a2[v5 + 3] = ((v4 & a1[9]) != 0 ? 2 : 0) | ((v4 & a1[10]) != 0);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  *a2 = v2;
  return result;
}
