/*
 * XREFs of RtlpQueryRunLevel @ 0x18010641C
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 */

__int64 __fastcall RtlpQueryRunLevel(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // r8d
  char *v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v12 = 0;
  if ( !a2 )
    return 0LL;
  result = RtlpLocateActivationContextSection(a2, 0LL, 1u, &v13, &v12);
  if ( (_DWORD)result == -1072365567 )
    return 0LL;
  if ( (int)result < 0 )
    return result;
  v6 = (unsigned int)a2[6];
  v7 = *(_DWORD *)((char *)a2 + v6 + 8);
  v8 = (char *)a2 + *(unsigned int *)((char *)a2 + v6 + 12);
  v9 = 1LL;
  if ( v7 > 1 )
  {
    v10 = v8 + 24;
    do
    {
      if ( (*v10 & 2) != 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 += 24;
    }
    while ( (unsigned int)v9 < v7 );
  }
  if ( (_DWORD)v9 == v7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
      "RtlpQueryRunLevel",
      a2);
    return 3222601731LL;
  }
  v11 = *(unsigned int *)&v8[24 * v9 + 16];
  if ( *(_DWORD *)((char *)a2 + v11) != 108 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() found activation context data at %p with wrong format\n", "RtlpQueryRunLevel", a2);
    return 3222601731LL;
  }
  *a3 = 0;
  a3[1] = *(_DWORD *)((char *)a2 + v11 + 100);
  a3[2] = *(_DWORD *)((char *)a2 + v11 + 104);
  return 0LL;
}
