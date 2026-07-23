/*
 * XREFs of MiLogStandbyRepurpose @ 0x14045A1A8
 * Callers:
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiLogStandbyRepurpose(__int64 a1, __int64 a2)
{
  int v4; // edi
  volatile LONG *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( *(_QWORD *)(a1 + 17464) )
  {
    v5 = (volatile LONG *)(a1 + 17536);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 17536));
    v6 = *(_QWORD *)(a1 + 17464);
    if ( !v6 )
      goto LABEL_13;
    v7 = *(_QWORD *)(v6 + 32) & 0xFFFLL;
    if ( v7 )
    {
      **(_QWORD **)(v6 + 32) = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
      *(_QWORD *)(v6 + 32) += 8LL;
      v7 = *(_QWORD *)(v6 + 32) & 0xFFFLL;
    }
    if ( v7 < 0xC00 )
    {
      if ( v7 )
      {
        v4 = 0;
      }
      else
      {
        v4 = 1;
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000320];
      }
    }
    else
    {
LABEL_13:
      v4 = *(_DWORD *)(a1 + 17452);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 17452);
  }
  if ( v4 )
    KeInsertQueueDpc((PRKDPC)(a1 + 17472), 0LL, 0LL);
}
