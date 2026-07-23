/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1408D1A38
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryEnumObject @ 0x1408D0544 (PiDqQueryEnumObject.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x14045C4D0 (RtlNumberGenericTableElementsAvl.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x1408D2870 (PiDqGetPnpObjectType.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140968CF0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140968D50 (PiDmObjectManagerAcquireSharedLock.c)
 */

void __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 **v4; // rcx
  unsigned int v5; // eax
  unsigned int PnpObjectType; // eax
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // rdi
  ULONG v8; // ebx

  v2 = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  v5 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v5;
  if ( v5 > 0x3E8 )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
    ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(PnpObjectType);
    PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
    v8 = RtlNumberGenericTableElementsAvl(ObjectManagerForObjectType + 1);
    PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
    if ( *(_DWORD *)(a1 + 208) > 2 * v8 )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      PiDqQueryFreeActiveData(a1);
    }
  }
}
