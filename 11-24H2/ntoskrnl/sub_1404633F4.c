/*
 * XREFs of sub_1404633F4 @ 0x1404633F4
 * Callers:
 *     sub_140463324 @ 0x140463324 (sub_140463324.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1404633F4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r11
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // rdx

  while ( 1 )
  {
    v5 = *(unsigned int *)(a1 + 20);
    if ( (unsigned int)v5 >= *(_DWORD *)a1 )
      break;
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 4) + 4 * v5);
    if ( (v6 & 0xFFFFFFF) >= *(_DWORD *)(a1 + 16) )
      break;
    *(_DWORD *)(a1 + 20) = v5 + 1;
    v7 = v6 >> 28;
    v8 = (_DWORD *)(*(_QWORD *)(a1 + 24) + (v6 & 0xFFFFFFF));
    if ( v6 >> 28 )
    {
      if ( v7 == 3 )
      {
        *(_DWORD *)((char *)v8 + a2) = a3 + *v8;
      }
      else if ( v7 == 10 )
      {
        *(_QWORD *)((char *)v8 + a2) = a3 + *(_QWORD *)v8;
      }
    }
  }
}
