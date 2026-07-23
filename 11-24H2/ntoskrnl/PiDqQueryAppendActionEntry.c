/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1408B26E0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryEnumObject @ 0x1408C9144 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x140450BF0 (RtlNumberGenericTableElementsAvl.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x1408D2490 (PiDqGetPnpObjectType.c)
 */

__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax
  unsigned int PnpObjectType; // eax
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // rdi
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
    ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(PnpObjectType);
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
