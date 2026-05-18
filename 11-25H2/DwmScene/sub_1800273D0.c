/*
 * XREFs of sub_1800273D0 @ 0x1800273D0
 * Callers:
 *     sub_180026D60 @ 0x180026D60 (sub_180026D60.c)
 *     sub_180045870 @ 0x180045870 (sub_180045870.c)
 *     sub_1800691C0 @ 0x1800691C0 (sub_1800691C0.c)
 *     sub_18007BAD0 @ 0x18007BAD0 (sub_18007BAD0.c)
 *     sub_18007F0D0 @ 0x18007F0D0 (sub_18007F0D0.c)
 *     sub_180081250 @ 0x180081250 (sub_180081250.c)
 *     sub_180082470 @ 0x180082470 (sub_180082470.c)
 * Callees:
 *     sub_18002707C @ 0x18002707C (sub_18002707C.c)
 */

__int64 __fastcall sub_1800273D0(__int64 *a1, unsigned int *a2)
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
  return sub_18002707C(a1, v8);
}
