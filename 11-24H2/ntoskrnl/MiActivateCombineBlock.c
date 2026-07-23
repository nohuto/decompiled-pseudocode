/*
 * XREFs of MiActivateCombineBlock @ 0x140462FC0
 * Callers:
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiActivateCombineBlock(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  unsigned int v5; // r12d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  bool v8; // r8
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 392));
  v4 = a2 + 8;
  v5 = a2[3] & 0xF;
  v6 = a2[3];
  v7 = a2[6] & 0x1FLL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(16LL * v5 + a1 + 104));
  v8 = 0;
  v9 = (unsigned __int64 *)(a1 + 16 * (v5 + 6LL));
  v10 = *v9;
  if ( *v9 )
  {
    while ( 1 )
    {
      if ( v6 <= *(_QWORD *)(v10 + 24)
        && (v6 < *(_QWORD *)(v10 + 24)
         || (unsigned int)v7 <= (*(_DWORD *)(v10 + 48) & 0x1Fu)
         && ((unsigned int)v7 < (*(_DWORD *)(v10 + 48) & 0x1Fu) || v4 && *v4 < *(_QWORD *)(v10 + 64))) )
      {
        v11 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          break;
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( !v11 )
        {
          v8 = 1;
          break;
        }
      }
      v10 = v11;
    }
  }
  RtlAvlInsertNodeEx(v9, v10, v8, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 104 + 16LL * v5));
}
