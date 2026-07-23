/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x140968B58
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x14071A548 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListInitEnumCallback @ 0x14071AF00 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB53E8 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1403EB080 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403EB7E0 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectManagerReleaseLock @ 0x140968CC0 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140968CF0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmInitializeComparisonObject @ 0x140968D80 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmObjectCreate @ 0x140AC0068 (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, __int64 a2, _QWORD *a3)
{
  PVOID v3; // rbx
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // r15
  int v8; // edi
  PVOID *v9; // rax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  __int64 *Buffer; // [rsp+48h] [rbp-61h] BYREF
  __int64 v15; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v16[104]; // [rsp+58h] [rbp-51h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  memset_0(v16, 0, sizeof(v16));
  NodeOrParent = 0LL;
  Buffer = &v15;
  SearchResult = TableEmptyTree;
  P = 0LL;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v8 = PiDmInitializeComparisonObject(a2, a1, &v15);
  if ( v8 >= 0 )
  {
    v9 = (PVOID *)RtlLookupElementGenericTableFullAvl(
                    ObjectManagerForObjectType + 1,
                    &Buffer,
                    &NodeOrParent,
                    &SearchResult);
    if ( v9 && (v3 = *v9, (P = v3) != 0LL) )
    {
      ++*((_DWORD *)v3 + 3);
    }
    else
    {
      v8 = PiDmObjectCreate(a1, a2, &P);
      if ( v8 < 0 )
      {
        v3 = P;
      }
      else if ( RtlInsertElementGenericTableFullAvl(
                  ObjectManagerForObjectType + 1,
                  &P,
                  8u,
                  0LL,
                  NodeOrParent,
                  SearchResult) )
      {
        v3 = P;
        *((_DWORD *)P + 3) = 1;
      }
      else
      {
        PiDmObjectRelease((unsigned int *)P);
        v3 = 0LL;
        v8 = -1073741670;
        P = 0LL;
      }
    }
  }
  if ( a3 )
  {
    *a3 = v3;
    if ( v3 )
      _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  return (unsigned int)v8;
}
