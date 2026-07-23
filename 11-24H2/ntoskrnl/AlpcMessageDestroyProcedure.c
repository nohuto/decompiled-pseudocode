/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x140897C10
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     AlpcpFreeMessageFunction @ 0x140896B30 (AlpcpFreeMessageFunction.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x140897A40 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x1408982A0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140AAF380 (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 (__fastcall *v14)(__int64); // rax
  int v15; // eax
  ULONG_PTR v16; // rdx
  _DWORD *v17; // rcx

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
      if ( *(__int64 (__fastcall **)(_QWORD))(v12 + 24) == AlpcMessageCleanupProcedure )
        AlpcMessageCleanupProcedure(v5);
      else
        guard_dispatch_icall_no_overrides(v5, a2);
      v14 = *(__int64 (__fastcall **)(__int64))(v12 + 40);
      if ( v14 == AlpcMessageDestroyProcedure )
      {
        v15 = AlpcMessageDestroyProcedure(v5);
      }
      else if ( v14 == AlpcSecurityDestroyProcedure )
      {
        v15 = AlpcSecurityDestroyProcedure(v5);
      }
      else if ( v14 == AlpcViewDestroyProcedure )
      {
        v15 = AlpcViewDestroyProcedure(v5);
      }
      else
      {
        v15 = guard_dispatch_icall_no_overrides(v5, v13);
      }
      if ( v15 >= 0 )
      {
        if ( (*(_BYTE *)(v5 - 32) & 2) != 0 )
        {
          ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v12 + 8), (PVOID)(v5 - 48));
        }
        else if ( *(_QWORD *)(v12 + 48) )
        {
          v17 = (_DWORD *)(v5 - 48);
          if ( *((void (__fastcall **)(_DWORD *))&AlpcpLookasides.L.FreeEx
               + 16 * (unsigned __int64)*(unsigned int *)(v12 + 8)) == AlpcpFreeMessageFunction )
            AlpcpFreeMessageFunction(v17);
          else
            guard_dispatch_icall_no_overrides(v17, &AlpcpLookasides);
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
      v16 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v16 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota((char *)v6, v16, 0LL, a4);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      else
      {
        if ( v16 + *(_QWORD *)(v6 + 1432) >= 0x1000 )
          PsReturnProcessPagedPoolQuota(v6, v16);
        else
          _InterlockedAdd64((volatile signed __int64 *)(v6 + 1432), v16);
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
