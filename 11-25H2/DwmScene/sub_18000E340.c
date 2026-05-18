/*
 * XREFs of sub_18000E340 @ 0x18000E340
 * Callers:
 *     sub_18000DCB4 @ 0x18000DCB4 (sub_18000DCB4.c)
 *     sub_18000E340 @ 0x18000E340 (sub_18000E340.c)
 * Callees:
 *     sub_18000E340 @ 0x18000E340 (sub_18000E340.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 */

char __fastcall sub_18000E340(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rdi
  _BYTE *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_18000E340(a1, *(_QWORD *)(a2 + 16), a3, a4);
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_1801C2BA8);
      if ( !*(_DWORD *)(a1 + 80) )
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(v9 + 16);
      }
      v10 = &a3[a4];
      *(_OWORD *)(a1 + 104) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(v9 + 16);
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v10 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_QWORD *)(v9 + 8);
        do
          ++v11;
        while ( *(_BYTE *)(v15 + v11) );
        v16 = v10 - v14;
        v17 = v11 + 1;
        if ( v17 >= v16 )
          v17 = v16;
        sub_18000FFE4(v14, v16, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
