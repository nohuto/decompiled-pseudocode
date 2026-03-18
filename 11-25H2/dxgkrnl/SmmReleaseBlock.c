/*
 * XREFs of SmmReleaseBlock @ 0x140093238
 * Callers:
 *     SmmAcquireBlock @ 0x140058844 (SmmAcquireBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140092F28 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14027F850 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     SmmCoalesceBlocks @ 0x140092DC8 (SmmCoalesceBlocks.c)
 *     SmmGetSiblingBlock @ 0x140093138 (SmmGetSiblingBlock.c)
 */

_QWORD *__fastcall SmmReleaseBlock(__int64 a1, __int64 *a2)
{
  _QWORD *SiblingBlock; // rax
  _QWORD *v4; // rdx
  _QWORD *result; // rax
  unsigned __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  SiblingBlock = (_QWORD *)SmmGetSiblingBlock(a1, a2);
  if ( SiblingBlock && (SiblingBlock[4] & 0x10000000000000LL) == 0 )
    return (_QWORD *)SmmCoalesceBlocks(a1, v4, SiblingBlock);
  v6 = v4[4] & 0xFFEFFFFFFFFFFFFFuLL;
  v4[4] = v6;
  v7 = (_DWORD *)(a1 + 24 * ((v6 >> 53) & 0x3F));
  result = v4 + 2;
  v8 = *(_QWORD *)v7;
  if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 )
    __fastfail(3u);
  *result = v8;
  result[1] = v7;
  *(_QWORD *)(v8 + 8) = result;
  *(_QWORD *)v7 = result;
  ++v7[4];
  return result;
}
