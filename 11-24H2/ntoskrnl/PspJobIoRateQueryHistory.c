/*
 * XREFs of PspJobIoRateQueryHistory @ 0x1404517D4
 * Callers:
 *     PspQueryRateControlHistory @ 0x14085DB0C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  volatile LONG *v10; // rsi
  KIRQL v11; // al
  int v12; // ecx
  unsigned __int64 v13; // rdi
  int v14; // edx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx

  if ( !*(_QWORD *)(a1 + 1672) )
  {
    v8 = a1 + 1696;
    v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( !v9 )
        return (unsigned int)-1073741275;
      v9 ^= v8;
    }
    if ( v9 )
      goto LABEL_4;
    return (unsigned int)-1073741275;
  }
LABEL_4:
  v10 = (volatile LONG *)(a1 + 1688);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v12 = *(_DWORD *)(a1 + 1728);
  v13 = v11;
  if ( v12 )
  {
    v14 = *(_DWORD *)(a1 + 1720);
    *a2 = *(_QWORD *)(a1 + 1712);
    v15 = v14 - *(_DWORD *)(a1 + 1724);
    *(_DWORD *)(a1 + 1724) = v14;
    v16 = 0;
    *a4 = v15;
    *a3 = v12;
  }
  else
  {
    v16 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( KiIrqlFlags )
  {
    LOBYTE(v17) = v13;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  }
  __writecr8(v13);
  return v16;
}
