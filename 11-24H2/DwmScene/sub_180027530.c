/*
 * XREFs of sub_180027530 @ 0x180027530
 * Callers:
 *     sub_180026EC0 @ 0x180026EC0 (sub_180026EC0.c)
 *     sub_1800459D0 @ 0x1800459D0 (sub_1800459D0.c)
 *     sub_180069320 @ 0x180069320 (sub_180069320.c)
 *     sub_18007BC30 @ 0x18007BC30 (sub_18007BC30.c)
 *     sub_18007F230 @ 0x18007F230 (sub_18007F230.c)
 *     sub_1800813B0 @ 0x1800813B0 (sub_1800813B0.c)
 *     sub_1800825D0 @ 0x1800825D0 (sub_1800825D0.c)
 * Callees:
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 */

__int64 __fastcall sub_180027530(__int64 *a1, unsigned int *a2)
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
      if ( *(_DWORD *)(v5 + 32) >= v6 )
      {
        if ( *(_BYTE *)(v3 + 25) && v6 < *(_DWORD *)(v5 + 32) )
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
    if ( *a2 >= *(_DWORD *)(v4 + 32) )
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
  return sub_1800271DC(a1, v8);
}
