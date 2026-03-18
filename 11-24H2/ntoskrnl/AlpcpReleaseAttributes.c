/*
 * XREFs of AlpcpReleaseAttributes @ 0x140890220
 * Callers:
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x14088F7F0 (AlpcpCaptureAttributes.c)
 *     AlpcMessageCleanupProcedure @ 0x140890820 (AlpcMessageCleanupProcedure.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     AlpcpReleaseDirectAttribute @ 0x14046ABC0 (AlpcpReleaseDirectAttribute.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcMessageCleanupProcedure @ 0x140890820 (AlpcMessageCleanupProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x140989F90 (AlpcpFreeMessageFunction.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1409E54D0 (AlpcSecurityDestroyProcedure.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall AlpcpReleaseAttributes(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rcx
  ULONG_PTR v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(_QWORD); // rax
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx

  v4 = a1[4];
  if ( v4 )
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    BugCheckParameter4 = v6 - 1;
    if ( v7 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, BugCheckParameter4);
      v13 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v4 - 31)];
      if ( *(__int64 (__fastcall **)(_QWORD))(v13 + 24) == AlpcMessageCleanupProcedure )
        AlpcMessageCleanupProcedure(v4);
      else
        guard_dispatch_icall_no_overrides(v4, a2, a3, a4);
      v17 = *(__int64 (__fastcall **)(_QWORD))(v13 + 40);
      if ( v17 == AlpcMessageDestroyProcedure )
      {
        v18 = AlpcMessageDestroyProcedure(v4);
      }
      else if ( v17 == AlpcSecurityDestroyProcedure )
      {
        v18 = AlpcSecurityDestroyProcedure(v4);
      }
      else if ( v17 == AlpcViewDestroyProcedure )
      {
        v18 = AlpcViewDestroyProcedure(v4);
      }
      else
      {
        v18 = guard_dispatch_icall_no_overrides(v4, v14, v15, v16);
      }
      if ( v18 >= 0 )
      {
        if ( (*(_BYTE *)(v4 - 32) & 2) != 0 )
        {
          ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v13 + 8), (PVOID)(v4 - 48));
        }
        else if ( *(_QWORD *)(v13 + 48) )
        {
          v21 = (void *)(v4 - 48);
          if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
               + 16 * (unsigned __int64)*(unsigned int *)(v13 + 8)) == AlpcpFreeMessageFunction )
            AlpcpFreeMessageFunction(v21);
          else
            guard_dispatch_icall_no_overrides(v21, &AlpcpLookasides, v19, v20);
        }
        else
        {
          ExFreePoolWithTag((PVOID)(v4 - 48), *(_DWORD *)(v13 + 4));
        }
      }
    }
    a1[4] = 0LL;
  }
  v9 = a1[5];
  if ( v9 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v9 + 16));
    v10 = *(_QWORD *)(v9 + 16);
    --*(_DWORD *)(v9 + 76);
    AlpcpUnlockBlob(v10);
    AlpcpDereferenceBlobEx(v9);
    a1[5] = 0LL;
  }
  v11 = a1[6];
  if ( v11 )
  {
    AlpcpDereferenceBlobEx(v11);
    a1[6] = 0LL;
  }
  result = a1[7];
  if ( (result & 1) != 0 )
  {
    if ( result >= 4 )
      result = AlpcpReleaseDirectAttribute(a1[7]);
    a1[7] = 0LL;
  }
  return result;
}
