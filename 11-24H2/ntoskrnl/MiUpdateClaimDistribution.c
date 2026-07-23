/*
 * XREFs of MiUpdateClaimDistribution @ 0x1404257E0
 * Callers:
 *     MiOrderTrimList @ 0x140425554 (MiOrderTrimList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateClaimDistribution(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r8
  char v3; // r10
  __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = 3;
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 184)) != 2 )
    v3 = 1;
  v4 = 8LL;
  v5 = a1 - (_QWORD)a2;
  do
  {
    v6 = (*(unsigned __int64 *)((char *)v2 + v5 + 40) >> v3) + *v2;
    result = -1LL;
    if ( v6 < *v2 )
      v6 = -1LL;
    *v2++ = v6;
    --v4;
  }
  while ( v4 );
  return result;
}
