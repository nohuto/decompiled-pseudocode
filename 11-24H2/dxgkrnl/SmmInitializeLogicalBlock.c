/*
 * XREFs of SmmInitializeLogicalBlock @ 0x1400956B8
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140286D30 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SmmInitializeLogicalBlock(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 result; // rax

  result = 0xF80FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 32) = a2 & 0xF80FFFFFFFFFFFFFuLL ^ ((unsigned __int64)a3 << 53) & 0x7E0000000000000LL ^ (*(_QWORD *)(a1 + 32) ^ a2) & 0xF800000000000000uLL;
  return result;
}
