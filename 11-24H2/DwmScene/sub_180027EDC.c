/*
 * XREFs of sub_180027EDC @ 0x180027EDC
 * Callers:
 *     sub_180026EC0 @ 0x180026EC0 (sub_180026EC0.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_180041750 @ 0x180041750 (sub_180041750.c)
 *     sub_1800459D0 @ 0x1800459D0 (sub_1800459D0.c)
 *     sub_180050A10 @ 0x180050A10 (sub_180050A10.c)
 *     sub_1800522C0 @ 0x1800522C0 (sub_1800522C0.c)
 *     sub_180069320 @ 0x180069320 (sub_180069320.c)
 *     sub_18007F230 @ 0x18007F230 (sub_18007F230.c)
 *     sub_18007F710 @ 0x18007F710 (sub_18007F710.c)
 *     sub_1800813B0 @ 0x1800813B0 (sub_1800813B0.c)
 *     sub_1800825D0 @ 0x1800825D0 (sub_1800825D0.c)
 * Callees:
 *     sub_180027DEC @ 0x180027DEC (sub_180027DEC.c)
 */

__int64 __fastcall sub_180027EDC(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // r11d
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 25) )
  {
    v6 = *a2;
    do
    {
      if ( *(_DWORD *)(v5 + 28) >= v6 )
      {
        if ( *(_BYTE *)(v3 + 25) && v6 < *(_DWORD *)(v5 + 28) )
          v3 = v5;
        v2 = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( !*(_BYTE *)(v3 + 25) )
    v4 = *(_QWORD *)v3;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v4 + 28) )
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
    else
    {
      v3 = v4;
      v4 = *(_QWORD *)v4;
    }
  }
  v8[0] = v2;
  v8[1] = v3;
  return sub_180027DEC(a1, v8);
}
