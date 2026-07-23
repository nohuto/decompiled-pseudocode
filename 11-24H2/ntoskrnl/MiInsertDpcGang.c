/*
 * XREFs of MiInsertDpcGang @ 0x14026F250
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x14026EEC8 (MiAllocateFastLargePagesForMdl.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInsertDpcGang(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r11
  unsigned __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 168) )
    *(_QWORD *)(a1 + 168) = *((_QWORD *)qword_140E300C8 + ((a2[5] >> 43) & 0x3FF));
  v4 = *(unsigned __int16 *)(a1 + 152);
  *(_WORD *)(a1 + 152) = v4 + 1;
  v5 = v4 % *(_DWORD *)(a1 + 188);
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v6 + 8 * v5) )
    ++*(_WORD *)(a1 + 154);
  result = 0xFFFFF00000000001uLL;
  *a2 = (*(_QWORD *)(v6 + 8 * v5) >> 3) ^ (*a2 ^ (*(_QWORD *)(v6 + 8 * v5) >> 3)) & 0xFFFFF00000000001uLL;
  *(_QWORD *)(v6 + 8 * v5) = a2;
  return result;
}
