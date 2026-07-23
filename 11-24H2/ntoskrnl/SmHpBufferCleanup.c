/*
 * XREFs of SmHpBufferCleanup @ 0x140487B60
 * Callers:
 *     SmHpChunkHeapCleanup @ 0x140379190 (SmHpChunkHeapCleanup.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x140381C40 (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferCleanup(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 result; // rax

  SmHpBufferUpdateFullness(a1, (_QWORD *)a2, -*(_WORD *)(a2 + 10));
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 16LL);
  ExFreePoolWithTag(*(PVOID *)a2, 0);
  *(_QWORD *)a2 = 0LL;
  result = *(unsigned int *)(a1 + 544);
  *(_DWORD *)(a2 + 8) = result;
  *(_DWORD *)(a1 + 544) = v4;
  return result;
}
