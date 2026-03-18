/*
 * XREFs of ExInitializeSystemLookasideList @ 0x140B5F310
 * Callers:
 *     KiInitializeProcessorXSaveStructures @ 0x1405B4DF4 (KiInitializeProcessorXSaveStructures.c)
 *     ExInitializeProcessor @ 0x140647974 (ExInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x1406FAC40 (CcInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1407054FC (IoInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140737198 (ObInitializeProcessor.c)
 *     CmInitializeProcessorCallbacks @ 0x1407C1D3C (CmInitializeProcessorCallbacks.c)
 *     CmpInitCallbacks @ 0x1407C2288 (CmpInitCallbacks.c)
 *     KeInitializeXSaveStructures @ 0x140B46908 (KeInitializeXSaveStructures.c)
 *     ExInitPoolLookasidePointers @ 0x140B51210 (ExInitPoolLookasidePointers.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
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
