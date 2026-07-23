/*
 * XREFs of MiDoesControlAreaHaveUserWritableReferences @ 0x140302190
 * Callers:
 *     MmDoesFileHaveUserWritableReferences @ 0x140301FF0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x140302AC8 (MiComputeFlushRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiDoesControlAreaHaveUserWritableReferences(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  _DWORD *v7; // rax
  unsigned int v8; // ecx
  _QWORD *v9; // rax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 92);
  v4 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  if ( !v2 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 > 1 )
    {
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1728));
      v7 = *(_DWORD **)(v4 + 2080);
      if ( v7 )
      {
        v8 = *v7;
        v9 = v7 + 24;
        while ( v1 < v8 )
        {
          if ( *v9 == a1 )
          {
            --v5;
            break;
          }
          v9 += 12;
          ++v1;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1728));
      if ( v5 > 1 )
        return 1;
    }
  }
  return v2;
}
