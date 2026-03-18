/*
 * XREFs of AlpcpReleaseAttributes @ 0x1408B25D0
 * Callers:
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x1408B1B80 (AlpcpCaptureAttributes.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     AlpcpReleaseDirectAttribute @ 0x14046BB78 (AlpcpReleaseDirectAttribute.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1408B3330 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v1; // rdi
  signed __int64 v3; // rax
  bool v4; // cc
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rcx
  unsigned __int64 result; // rax
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(_QWORD); // rax
  int v12; // eax
  void *v13; // rcx

  v1 = a1[4];
  if ( v1 )
  {
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v3 <= 1;
    BugCheckParameter4 = v3 - 1;
    if ( v4 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v1, 0x21uLL, BugCheckParameter4);
      v10 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v1 - 31)];
      if ( *(__int64 (__fastcall **)(_QWORD))(v10 + 24) == AlpcMessageCleanupProcedure )
        AlpcMessageCleanupProcedure(v1);
      else
        guard_dispatch_icall_no_overrides(v1);
      v11 = *(__int64 (__fastcall **)(_QWORD))(v10 + 40);
      if ( v11 == AlpcSecurityDestroyProcedure )
      {
        v12 = AlpcSecurityDestroyProcedure(v1);
      }
      else if ( v11 == AlpcMessageDestroyProcedure )
      {
        v12 = AlpcMessageDestroyProcedure(v1);
      }
      else if ( v11 == AlpcViewDestroyProcedure )
      {
        v12 = AlpcViewDestroyProcedure(v1);
      }
      else
      {
        v12 = guard_dispatch_icall_no_overrides(v1);
      }
      if ( v12 >= 0 )
      {
        if ( (*(_BYTE *)(v1 - 32) & 2) != 0 )
        {
          ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v10 + 8), (PVOID)(v1 - 48));
        }
        else if ( *(_QWORD *)(v10 + 48) )
        {
          v13 = (void *)(v1 - 48);
          if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
               + 16 * (unsigned __int64)*(unsigned int *)(v10 + 8)) == AlpcpFreeMessageFunction )
            AlpcpFreeMessageFunction(v13);
          else
            guard_dispatch_icall_no_overrides(v13);
        }
        else
        {
          ExFreePoolWithTag((PVOID)(v1 - 48), *(_DWORD *)(v10 + 4));
        }
      }
    }
    a1[4] = 0LL;
  }
  v6 = a1[5];
  if ( v6 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v6 + 16));
    v7 = *(_QWORD *)(v6 + 16);
    --*(_DWORD *)(v6 + 76);
    AlpcpUnlockBlob(v7);
    AlpcpDereferenceBlobEx(v6);
    a1[5] = 0LL;
  }
  v8 = a1[6];
  if ( v8 )
  {
    AlpcpDereferenceBlobEx(v8);
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
