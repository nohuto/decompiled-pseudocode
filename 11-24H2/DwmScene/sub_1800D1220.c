/*
 * XREFs of sub_1800D1220 @ 0x1800D1220
 * Callers:
 *     sub_1800D09F0 @ 0x1800D09F0 (sub_1800D09F0.c)
 * Callees:
 *     sub_1800D0E08 @ 0x1800D0E08 (sub_1800D0E08.c)
 */

__int64 __fastcall sub_1800D1220(__int64 *a1, int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // r11d
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
  return sub_1800D0E08(a1, v8);
}
