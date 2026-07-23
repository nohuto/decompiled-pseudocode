/*
 * XREFs of MiInitializeUsedPtesCount @ 0x140432950
 * Callers:
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInitializeUsedPtesCount(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
  {
    result = 0xFFFFFC00FFFFFFFFuLL;
    *(_QWORD *)a1 = ((unsigned __int64)a2 << 32) ^ (*(_QWORD *)a1 ^ ((unsigned __int64)a2 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = ((unsigned __int64)a2 << 16) ^ (result ^ ((unsigned __int64)a2 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  }
  return result;
}
