/*
 * XREFs of PopWnfEffectivePowerModeCallback @ 0x14074F590
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfEffectivePowerModeCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // ebx
  _DWORD v13[10]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = a6;
  v9 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a6 + 40));
  if ( *a2 == WNF_PO_EFFECTIVE_POWER_MODE )
  {
    LODWORD(a6) = 8;
    v9 = ExQueryWnfStateData(a1, &v14, v13, &a6);
    if ( v9 )
    {
      v9 = 128;
    }
    else
    {
      v10 = (unsigned int)(*(_DWORD *)v6 - 1);
      if ( (unsigned int)v10 > 1 )
        v10 = 0LL;
      v11 = v13[v10];
      if ( v11 != *(_DWORD *)(v6 + 16) )
      {
        *(_QWORD *)(v6 + 72) = KeGetCurrentThread();
        if ( *(_QWORD *)(v6 + 56) )
          guard_dispatch_icall_no_overrides(v11, *(_QWORD *)(v6 + 80));
        ++*(_DWORD *)(v6 + 64);
        *(_DWORD *)(v6 + 16) = v11;
        *(_QWORD *)(v6 + 72) = 0LL;
      }
    }
  }
  PopReleaseRwLock((signed __int64 *)(v6 + 40));
  return v9;
}
