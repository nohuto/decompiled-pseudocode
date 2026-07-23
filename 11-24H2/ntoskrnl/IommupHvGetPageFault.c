/*
 * XREFs of IommupHvGetPageFault @ 0x140563B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetPageFault(
        unsigned int *a1,
        _DWORD *a2,
        _QWORD *a3,
        _WORD *a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-28h]
  __int128 v22; // [rsp+30h] [rbp-18h]

  v9 = **((_QWORD **)a1 + 1);
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 9LL) )
      guard_dispatch_icall_no_overrides(*a1, a2);
    return 0LL;
  }
  else
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = 0;
    v12 = 32LL * (unsigned int)v9;
    v13 = v9 + 1;
    if ( v13 != 128 )
      v11 = v13;
    v21 = *(_QWORD *)(v12 + v10);
    v14 = _mm_srli_si128(*(__m128i *)(v12 + v10), 8).m128i_u64[0];
    v22 = *(_OWORD *)(v12 + v10 + 16);
    **((_DWORD **)a1 + 1) = v11;
    if ( v14 >= 0 )
    {
      if ( (v14 & 0x400) != 0 )
        v16 = ((unsigned __int64)v14 >> 11) & 0xFFFFF;
      else
        LODWORD(v16) = -1;
      *a2 = v16;
      *a3 = v21;
      *a4 = v14 & 0x1FF;
      *a5 = v22 & 0xFFFFFFFFFFFFF000uLL;
      v17 = v22 & 1 | 2;
      if ( (v22 & 2) == 0 )
        v17 = v22 & 1;
      v18 = v17 | 4;
      if ( (v22 & 4) == 0 )
        v18 = v17;
      v19 = v18 | 8;
      if ( (v22 & 8) == 0 )
        v19 = v18;
      v15 = v19 | 0x10;
      if ( (v14 & 0x200) == 0 )
        v15 = v19;
    }
    else
    {
      *a2 = -1;
      *a3 = 0LL;
      *a4 = -1;
      *a5 = 0LL;
      v15 = 32LL;
    }
    *a6 = v15;
    return 1LL;
  }
}
