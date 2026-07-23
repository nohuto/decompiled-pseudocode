/*
 * XREFs of MiWorkingSetVeryLarge @ 0x140425840
 * Callers:
 *     MiOrderTrimList @ 0x140425554 (MiOrderTrimList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWorkingSetVeryLarge(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v2 <= v4 )
    return 0LL;
  v5 = 0;
  v6 = 0;
  v7 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
  v8 = *(_QWORD *)(v7 + 18512);
  if ( !a2 || ((v2 ^ (v2 + a2)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 18688);
    v6 = 1;
    if ( v9 < v8 >> 4 && v2 >= v8 >> 4 )
      return 1LL;
  }
  else
  {
    v9 = -1LL;
  }
  if ( v2 - v4 < 3 * (v8 >> 2) )
    return 0LL;
  v11 = *(_QWORD *)(v7 + 17600);
  if ( *(_DWORD *)(v7 + 7204)
     + *(_DWORD *)(v7 + 7208)
     + *(_DWORD *)(v7 + 7212)
     + *(_DWORD *)(v7 + 7216)
     + *(_DWORD *)(v7 + 7220)
     + *(_DWORD *)(v7 + 7224)
     + *(_DWORD *)(v7 + 7228) == *(_DWORD *)(v11 + 44) )
    return 0LL;
  if ( !v6 )
    v9 = *(_QWORD *)(v7 + 18688);
  LOBYTE(v5) = v9 < 8LL * *(_QWORD *)(v11 + 312);
  return v5;
}
