/*
 * XREFs of ExInitializeSystemLookasideList @ 0x140B6E3BC
 * Callers:
 *     KiInitializeProcessorXSaveStructures @ 0x1405B8BB4 (KiInitializeProcessorXSaveStructures.c)
 *     ExInitializeProcessor @ 0x140653874 (ExInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x140706B20 (CcInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1407115FC (IoInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407431B8 (ObInitializeProcessor.c)
 *     CmInitializeProcessorCallbacks @ 0x1407D145C (CmInitializeProcessorCallbacks.c)
 *     CmpInitCallbacks @ 0x1407D19C0 (CmpInitCallbacks.c)
 *     KeInitializeXSaveStructures @ 0x140B568AC (KeInitializeXSaveStructures.c)
 *     ExInitPoolLookasidePointers @ 0x140B61340 (ExInitPoolLookasidePointers.c)
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializeSystemLookasideList(__int64 a1, int a2, int a3, int a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rcx

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = 2;
  *(_QWORD *)(a1 + 48) = ExAllocatePoolZero;
  *(_QWORD *)(a1 + 56) = ExFreePool;
  *(_WORD *)(a1 + 18) = a5;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  result = a6;
  *(_DWORD *)(a1 + 36) = a2;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a3;
  v11 = (_QWORD *)(a1 + 64);
  v12 = *(_QWORD **)(a6 + 8);
  if ( *v12 != a6 )
    __fastfail(3u);
  *v11 = a6;
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(a6 + 8) = v11;
  return result;
}
