/*
 * XREFs of RtlpStackDbEntryCreate @ 0x18015BD2C
 * Callers:
 *     RtlStackDbStackAdd @ 0x18011BFB8 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryCleanup @ 0x18015BCAC (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18015BF7C (RtlpStackDbSegmentFindOrCreate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpStackDbEntryCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v9; // r14d
  void *v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]

  v5 = *(_DWORD *)a2 + 7;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v20[1] = 0;
  v9 = v5 >> 3;
  v10 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 48))(8 * v9 + 24, v6);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset_thunk_772440563353939046(v10, 0, 8 * v9 + 24);
    v12 = *(_DWORD *)(v11 + 16) & 0xFF000001;
    *(_QWORD *)(v11 + 8) = a3;
    v13 = 0;
    *(_DWORD *)(v11 + 16) = v12 | 1;
    *(_BYTE *)(v11 + 19) = *(_BYTE *)a2;
    v14 = *(_DWORD *)a2;
    while ( v13 < v9 )
    {
      v15 = v14;
      if ( v14 > 8 )
        v15 = 8;
      v21 = *(_QWORD *)(a2 + 8) + 64LL * v13;
      v20[0] = v15;
      v16 = RtlpStackDbSegmentFindOrCreate(a1, v20);
      if ( !v16 )
      {
        RtlpStackDbEntryCleanup(a1, v11);
        return v7;
      }
      v17 = v13++;
      *(_QWORD *)(v11 + 8 * v17 + 24) = v16;
      v18 = v14 - 8;
      if ( v14 <= 8 )
        v18 = v14;
      v14 = v18;
    }
    return v11;
  }
  return v7;
}
