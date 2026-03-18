/*
 * XREFs of PopWnfEffectivePowerModeCallback @ 0x140751270
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfEffectivePowerModeCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // ebx
  _DWORD v15[10]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = a6;
  v9 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a6 + 40));
  if ( *a2 == WNF_PO_EFFECTIVE_POWER_MODE )
  {
    LODWORD(a6) = 8;
    v9 = ExQueryWnfStateData(a1, &v16, v15, &a6);
    if ( v9 )
    {
      v9 = 128;
    }
    else
    {
      v12 = (unsigned int)(*(_DWORD *)v6 - 1);
      if ( (unsigned int)v12 > 1 )
        v12 = 0LL;
      v13 = v15[v12];
      if ( v13 != *(_DWORD *)(v6 + 16) )
      {
        *(_QWORD *)(v6 + 72) = KeGetCurrentThread();
        if ( *(_QWORD *)(v6 + 56) )
          guard_dispatch_icall_no_overrides(v13, *(_QWORD *)(v6 + 80), v10, v11);
        ++*(_DWORD *)(v6 + 64);
        *(_DWORD *)(v6 + 16) = v13;
        *(_QWORD *)(v6 + 72) = 0LL;
      }
    }
  }
  PopReleaseRwLock((signed __int64 *)(v6 + 40));
  return v9;
}
