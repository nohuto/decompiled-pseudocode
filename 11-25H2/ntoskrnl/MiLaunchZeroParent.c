/*
 * XREFs of MiLaunchZeroParent @ 0x1404186A8
 * Callers:
 *     MiZeroInParallel @ 0x140418028 (MiZeroInParallel.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiGetNextAffinityWalker @ 0x140418ACC (MiGetNextAffinityWalker.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiLaunchZeroParent(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rbp
  __int64 v4; // rdi
  bool v5; // zf
  int v6; // eax
  char result; // al
  __int64 v8; // rcx
  ULONG_PTR v9; // rcx
  _DWORD *v10; // rsi
  __int64 *v11; // rcx

  if ( *(_DWORD *)(a1 + 32) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
    {
      result = PsReferencePartitionSafe(v8);
      if ( !result )
        return result;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = (__int64 (__fastcall *)(__int64))MiZeroHugeRangeWorker;
  v4 = a1 + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 7) + 168;
  *(_QWORD *)(v4 + 32) = a1;
  *(_DWORD *)(v4 + 44) = -2;
  v5 = (*(_DWORD *)(a1 + 16) & 0x800) == 0;
  *(_QWORD *)(v4 + 24) = v4;
  if ( v5 )
    v3 = MiZeroInParallelWorker;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = v3;
  v6 = *(_DWORD *)(a1 + 16);
  if ( (v6 & 0x80u) != 0 || *(_DWORD *)(a1 + 96) )
  {
    v9 = *(_QWORD *)(a1 + 144);
    v10 = (_DWORD *)(v9 + 12);
    if ( ((v6 & 0x100) == 0 || !*v10 && *(_DWORD *)(v9 + 280)) && (int)MiGetNextAffinityWalker(v9) >= 0 && !*v10 )
    {
      *(_DWORD *)(v4 + 44) = -1;
      v11 = *(__int64 **)(a1 + 80);
      if ( v11 )
      {
        a2 = *v11;
        *(_QWORD *)(a1 + 80) = *v11;
      }
      *(_QWORD *)(v4 + 48) = v11;
    }
  }
  return guard_dispatch_icall_no_overrides(v4, a2);
}
