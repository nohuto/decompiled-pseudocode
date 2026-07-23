/*
 * XREFs of MiLaunchZeroParent @ 0x140271AB0
 * Callers:
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiGetNextAffinityWalker @ 0x140271ED0 (MiGetNextAffinityWalker.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiLaunchZeroParent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v5)(); // rbp
  __int64 v6; // rdi
  bool v7; // zf
  int v8; // eax
  char result; // al
  __int64 v10; // rcx
  ULONG_PTR v11; // rcx
  _DWORD *v12; // rsi
  __int64 *v13; // rcx

  if ( *(_DWORD *)(a1 + 32) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      result = PsReferencePartitionSafe(v10);
      if ( !result )
        return result;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v5 = MiZeroHugeRangeWorker;
  v6 = a1 + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 7) + 168;
  *(_QWORD *)(v6 + 32) = a1;
  *(_DWORD *)(v6 + 44) = -2;
  v7 = (*(_DWORD *)(a1 + 16) & 0x800) == 0;
  *(_QWORD *)(v6 + 24) = v6;
  if ( v7 )
    v5 = MiZeroInParallelWorker;
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 16) = v5;
  v8 = *(_DWORD *)(a1 + 16);
  if ( (v8 & 0x80u) != 0 || *(_DWORD *)(a1 + 96) )
  {
    v11 = *(_QWORD *)(a1 + 144);
    v12 = (_DWORD *)(v11 + 12);
    if ( ((v8 & 0x100) == 0 || !*v12 && *(_DWORD *)(v11 + 280)) && (int)MiGetNextAffinityWalker(v11) >= 0 && !*v12 )
    {
      *(_DWORD *)(v6 + 44) = -1;
      v13 = *(__int64 **)(a1 + 80);
      if ( v13 )
      {
        a2 = *v13;
        *(_QWORD *)(a1 + 80) = *v13;
      }
      *(_QWORD *)(v6 + 48) = v13;
    }
  }
  return guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
}
