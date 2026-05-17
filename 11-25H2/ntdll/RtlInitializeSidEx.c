/*
 * XREFs of RtlInitializeSidEx @ 0x180060720
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSidEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdx
  _DWORD *v5; // rax
  int v6; // ecx
  char v8; // [rsp+30h] [rbp+18h] BYREF
  __int64 v9; // [rsp+38h] [rbp+20h]

  v8 = a3;
  v9 = a4;
  if ( (unsigned __int8)a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  if ( (_BYTE)a3 )
  {
    v4 = &v8;
    v5 = (_DWORD *)(a1 + 8);
    a3 = (unsigned __int8)a3;
    do
    {
      v6 = *((_DWORD *)v4 + 2);
      v4 += 8;
      *v5++ = v6;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
