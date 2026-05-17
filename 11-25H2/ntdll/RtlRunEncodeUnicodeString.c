/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x180112FD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x180163D60 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlRunEncodeUnicodeString(char *a1, unsigned __int16 *a2)
{
  char v3; // r8
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int i; // ecx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *a1;
  if ( !*a1 )
  {
    result = ZwQuerySystemTime(&v10);
    v3 = BYTE1(v10);
    for ( i = 1; ; ++i )
    {
      *a1 = v3;
      if ( v3 || i >= 8 )
        break;
      result = i;
      v3 = *((_BYTE *)&v10 + i);
    }
    if ( !v3 )
    {
      *a1 = 1;
      v3 = 1;
    }
  }
  if ( *a2 )
  {
    result = *((_QWORD *)a2 + 1);
    *(_BYTE *)result ^= v3 | 0x43;
  }
  v5 = 1;
  if ( *a2 > 1u )
  {
    do
    {
      v6 = v5 - 1;
      v7 = v5++;
      *(_BYTE *)(v7 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v6 + *((_QWORD *)a2 + 1));
      result = *a2;
    }
    while ( v5 < (unsigned int)result );
  }
  return result;
}
