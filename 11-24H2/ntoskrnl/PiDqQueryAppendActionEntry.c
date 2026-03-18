/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1408B4DF0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryEnumObject @ 0x1408CB714 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D327C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x14045B7F0 (RtlNumberGenericTableElementsAvl.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B523C (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B5260 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B52AC (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDqQueryFreeActiveData @ 0x1408D3C80 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x1408D4AA0 (PiDqGetPnpObjectType.c)
 */

__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax
  unsigned int PnpObjectType; // eax
  RTL_AVL_TABLE *ObjectManagerForObjectType; // rdi
  ULONG v8; // ebx

  v2 = a1 + 192;
  v4 = *(_QWORD **)(a1 + 200);
  if ( *v4 != v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
  *(_DWORD *)(a1 + 208) = result;
  if ( (unsigned int)result > 0x3E8 )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
    ObjectManagerForObjectType = (RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(PnpObjectType);
    PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
    v8 = RtlNumberGenericTableElementsAvl(ObjectManagerForObjectType + 1);
    PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
    result = 2 * v8;
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)result )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      return PiDqQueryFreeActiveData(a1);
    }
  }
  return result;
}
