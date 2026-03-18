/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1409B08F0
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     AlpcMessageCleanupProcedure @ 0x140890820 (AlpcMessageCleanupProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x140989F90 (AlpcpFreeMessageFunction.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1409E54D0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140AB4410 (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rcx
  void *v7; // rcx
  signed __int64 v9; // rax
  bool v10; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64); // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR v20; // rdx
  _DWORD *v21; // rcx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v10 = v9 <= 1;
    BugCheckParameter4 = v9 - 1;
    if ( v10 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v5, 0x21uLL, BugCheckParameter4);
      v12 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v5 - 31)];
      if ( *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v12 + 24) == AlpcMessageCleanupProcedure )
        AlpcMessageCleanupProcedure(v5, a2, a3, a4);
      else
        guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
      v16 = *(__int64 (__fastcall **)(__int64))(v12 + 40);
      if ( v16 == AlpcMessageDestroyProcedure )
      {
        v17 = AlpcMessageDestroyProcedure(v5);
      }
      else if ( v16 == AlpcSecurityDestroyProcedure )
      {
        v17 = AlpcSecurityDestroyProcedure(v5);
      }
      else if ( v16 == AlpcViewDestroyProcedure )
      {
        v17 = AlpcViewDestroyProcedure(v5);
      }
      else
      {
        v17 = guard_dispatch_icall_no_overrides(v5, v13, v14, v15);
      }
      if ( v17 >= 0 )
      {
        if ( (*(_BYTE *)(v5 - 32) & 2) != 0 )
        {
          ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v12 + 8), (PVOID)(v5 - 48));
        }
        else if ( *(_QWORD *)(v12 + 48) )
        {
          v21 = (_DWORD *)(v5 - 48);
          if ( *((void (__fastcall **)(_DWORD *))&AlpcpLookasides.L.FreeEx
               + 16 * (unsigned __int64)*(unsigned int *)(v12 + 8)) == AlpcpFreeMessageFunction )
            AlpcpFreeMessageFunction(v21);
          else
            guard_dispatch_icall_no_overrides(v21, &AlpcpLookasides, v18, v19);
        }
        else
        {
          ExFreePoolWithTag((PVOID)(v5 - 48), *(_DWORD *)(v12 + 4));
        }
      }
    }
    return 3221225473LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v20 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v20 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota((char *)v6, v20, 0LL, a4);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      else
      {
        if ( v20 + *(_QWORD *)(v6 + 1432) >= 0x1000 )
          PsReturnProcessPagedPoolQuota(v6, v20);
        else
          _InterlockedAdd64((volatile signed __int64 *)(v6 + 1432), v20);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
    }
    v7 = *(void **)(a1 + 224);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x42456C41u);
    return 0LL;
  }
}
