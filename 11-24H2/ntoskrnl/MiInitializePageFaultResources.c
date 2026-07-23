/*
 * XREFs of MiInitializePageFaultResources @ 0x140679754
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiInsertInPageBlock @ 0x1404274F0 (MiInsertInPageBlock.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     MiAllocateInPageSupportBlock @ 0x140469C14 (MiAllocateInPageSupportBlock.c)
 */

__int64 MiInitializePageFaultResources()
{
  int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned int *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax

  v0 = 0;
  v1 = 0LL;
  while ( v0 < 2 )
  {
    v2 = 16LL * v0;
    InitializeSListHead((PSLIST_HEADER)((char *)&MiState + v2 + 43104));
    InitializeSListHead((PSLIST_HEADER)((char *)&MiState + v2 + 43136));
    v3 = v0 != 0 ? 16 : 8;
    *((_BYTE *)&MiState + v1 + 43168) = v0 != 0 ? 16 : 8;
    v4 = MiAllocateInPageSupportBlock(v0, v3);
    if ( !v4 )
      return 0LL;
    *((_QWORD *)&MiState + v1 + 5397) = v4;
    v5 = (-(__int64)(v0 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368;
    *((_QWORD *)&MiState + v1 + 5399) = v4 + v5 * v3;
    v6 = (unsigned int *)(v4 + 192);
    do
    {
      v7 = *v6 | 0x100;
      if ( v1 )
        v7 = *v6 & 0xFFFFFEFF;
      *v6 = v7;
      MiInsertInPageBlock((PSLIST_ENTRY)v6 - 12);
      v6 = (unsigned int *)((char *)v6 + v5);
      --v3;
    }
    while ( v3 );
    ++v0;
    ++v1;
  }
  v8 = MiReservePtes((__int64)&qword_140E376A8, 0x10u);
  if ( !v8 )
    return 0LL;
  qword_140E37448 = v8;
  return 1LL;
}
