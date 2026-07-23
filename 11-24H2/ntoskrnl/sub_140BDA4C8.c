/*
 * XREFs of sub_140BDA4C8 @ 0x140BDA4C8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140BDA4C8(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  int i; // r8d
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r10
  unsigned __int64 v8; // r11
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // r8

  *((_QWORD *)&v2 + 1) = a2;
  for ( i = *(_DWORD *)(a1 + 2520); (i & 0x20000000) == 0; i = *(_DWORD *)(a1 + 2520) )
  {
    *(_QWORD *)&v2 = DWORD2(v2) != 0;
    if ( (_DWORD)v2 == ((*(_DWORD *)(a1 + 2524) >> 21) & 1) || (i & 1) == 0 )
      break;
    v5 = *(unsigned int *)(a1 + 2676);
    v6 = *(_QWORD *)(a1 + 2104);
    *(_QWORD *)&v2 = (unsigned int)(*(_DWORD *)(a1 + 2052) - v5);
    v7 = (_QWORD *)(a1 + v5);
    v8 = a1 + v5 + 8 * ((unsigned __int64)v2 >> 3);
    if ( DWORD2(v2) )
    {
      v10 = __rdtsc();
      v2 = (__ROR8__(v10, 3) ^ v10) * (unsigned __int128)0x7010008004002001uLL;
      *((_QWORD *)&v2 + 1) ^= v2;
      *(_QWORD *)(a1 + 2680) = *((_QWORD *)&v2 + 1);
      while ( v7 != (_QWORD *)v8 )
      {
        *(_QWORD *)&v2 = *((_QWORD *)&v2 + 1) ^ *v7;
        v11 = v6 ^ *v7;
        *v7 = v2;
        *((_QWORD *)&v2 + 1) = (v11 + __ROR8__(*((_QWORD *)&v2 + 1), BYTE8(v2) & 0x3F)) ^ 0xEFA;
        ++v7;
      }
      *(_DWORD *)(a1 + 2524) |= 0x200000u;
      *(_QWORD *)(a1 + 2688) = *((_QWORD *)&v2 + 1);
      return v2;
    }
    *((_QWORD *)&v2 + 1) = *(_QWORD *)(a1 + 2680);
    while ( v7 != (_QWORD *)v8 )
    {
      *v7 ^= *((_QWORD *)&v2 + 1);
      *(_QWORD *)&v2 = v6 ^ *v7;
      *((_QWORD *)&v2 + 1) = (v2 + __ROR8__(*((_QWORD *)&v2 + 1), BYTE8(v2) & 0x3F)) ^ 0xEFA;
      ++v7;
    }
    *(_DWORD *)(a1 + 2524) &= ~0x200000u;
    if ( *((_QWORD *)&v2 + 1) == *(_QWORD *)(a1 + 2688) )
      return v2;
    v9 = *(_DWORD *)(a1 + 2052);
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)v2 = a1;
    *(_DWORD *)(v2 + 16) = v9;
    if ( *(_DWORD *)(a1 + 2328) )
      return v2;
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)(v2 + 24) = *((_QWORD *)&v2 + 1) ^ *(_QWORD *)(a1 + 2688);
    if ( *(_DWORD *)(a1 + 2328) )
      return v2;
    *(_QWORD *)(a1 + 2344) = 0LL;
    *(_QWORD *)&v2 = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 2360) = *((_QWORD *)&v2 + 1);
    *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
    DWORD2(v2) = 0;
    *(_QWORD *)(a1 + 2352) = 256LL;
    *(_DWORD *)(a1 + 2328) = 1;
  }
  return v2;
}
