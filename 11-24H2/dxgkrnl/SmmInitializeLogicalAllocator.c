/*
 * XREFs of SmmInitializeLogicalAllocator @ 0x14028730C
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140286D30 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x1400648EC (--$SmmInitializePushLock@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmGetLowerOrderFromPageCount @ 0x140095610 (SmmGetLowerOrderFromPageCount.c)
 *     SmmInitializeLogicalPool @ 0x140095700 (SmmInitializeLogicalPool.c)
 */

__int64 __fastcall SmmInitializeLogicalAllocator(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // edx
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 result; // rax
  int v10; // edx

  SmmGetLowerOrderFromPageCount(a2 >> 12);
  SmmInitializePushLock<1>((_QWORD *)(v2 + 1320));
  *(_QWORD *)(v3 + 1264) = v3 + 1256;
  *(_QWORD *)(v3 + 1256) = v3 + 1256;
  *(_QWORD *)(v3 + 1248) = v4;
  v5 = 0;
  *(_BYTE *)(v3 + 1332) = v6;
  do
  {
    SmmInitializeLogicalPool(v3 + 24LL * v5);
    result = *(unsigned __int8 *)(v3 + 1332);
    v5 = v10 + 1;
  }
  while ( v5 <= (unsigned int)result );
  *(_QWORD *)(v3 + 1296) = v8;
  *(_QWORD *)(v3 + 1288) = v7;
  *(_QWORD *)(v3 + 1304) = v7;
  *(_QWORD *)(v3 + 1312) = v7;
  *(_DWORD *)(v3 + 1328) = v7;
  return result;
}
