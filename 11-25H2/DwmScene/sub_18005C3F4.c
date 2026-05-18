/*
 * XREFs of sub_18005C3F4 @ 0x18005C3F4
 * Callers:
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 * Callees:
 *     sub_18005C2F0 @ 0x18005C2F0 (sub_18005C2F0.c)
 */

__int64 __fastcall sub_18005C3F4(__int64 *a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 25) )
  {
    v6 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( *(_QWORD *)(v5 + 40) >= v6 )
      {
        if ( *(_BYTE *)(v3 + 25) && v6 < *(_QWORD *)(v5 + 40) )
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
    if ( *(_QWORD *)(a2 + 8) >= *(_QWORD *)(v4 + 40) )
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
  return sub_18005C2F0(a1, v8);
}
