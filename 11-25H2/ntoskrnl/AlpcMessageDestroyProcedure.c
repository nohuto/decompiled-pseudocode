/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1408B3500
 * Callers:
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1408B3330 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140AAF420 (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  ULONG_PTR v2; // rdi
  volatile signed __int64 *v3; // rcx
  void *v4; // rcx
  signed __int64 v6; // rax
  bool v7; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // eax
  ULONG_PTR v12; // rdx
  void *v13; // rcx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    BugCheckParameter4 = v6 - 1;
    if ( v7 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v2, 0x21uLL, BugCheckParameter4);
      v9 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v2 - 31)];
      if ( *(__int64 (__fastcall **)(__int64))(v9 + 24) == AlpcMessageCleanupProcedure )
        AlpcMessageCleanupProcedure(v2);
      else
        guard_dispatch_icall_no_overrides(v2);
      v10 = *(__int64 (__fastcall **)(__int64))(v9 + 40);
      if ( v10 == AlpcSecurityDestroyProcedure )
      {
        v11 = AlpcSecurityDestroyProcedure(v2);
      }
      else if ( v10 == AlpcMessageDestroyProcedure )
      {
        v11 = AlpcMessageDestroyProcedure(v2);
      }
      else if ( v10 == AlpcViewDestroyProcedure )
      {
        v11 = AlpcViewDestroyProcedure(v2);
      }
      else
      {
        v11 = guard_dispatch_icall_no_overrides(v2);
      }
      if ( v11 >= 0 )
      {
        if ( (*(_BYTE *)(v2 - 32) & 2) != 0 )
        {
          ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v9 + 8), (PVOID)(v2 - 48));
        }
        else if ( *(_QWORD *)(v9 + 48) )
        {
          v13 = (void *)(v2 - 48);
          if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
               + 16 * (unsigned __int64)*(unsigned int *)(v9 + 8)) == AlpcpFreeMessageFunction )
            AlpcpFreeMessageFunction(v13);
          else
            guard_dispatch_icall_no_overrides(v13);
        }
        else
        {
          ExFreePoolWithTag((PVOID)(v2 - 48), *(_DWORD *)(v9 + 4));
        }
      }
    }
    return 3221225473LL;
  }
  else
  {
    v3 = *(volatile signed __int64 **)(a1 + 48);
    if ( v3 )
    {
      v12 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v12 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota((PVOID)v3);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      else
      {
        if ( v12 + *((_QWORD *)v3 + 179) >= 0x1000 )
          PsReturnProcessPagedPoolQuota((ULONG_PTR)v3, v12);
        else
          _InterlockedAdd64(v3 + 179, v12);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
    }
    v4 = *(void **)(a1 + 224);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x42456C41u);
    return 0LL;
  }
}
