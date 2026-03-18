/*
 * XREFs of PopPepLockActivityLink @ 0x1402BD6B0
 * Callers:
 *     PopPepComponentSetResidency @ 0x1405D6724 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D6820 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char result; // al
  KIRQL v8; // al
  bool v9; // zf

  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
    {
LABEL_3:
      *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
      result = 1;
      *(_BYTE *)(a1 + 125) = 1;
      return result;
    }
  }
  else if ( a3 <= 5 && LOBYTE(ActivityAttributes[17 * (int)a3]) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 <= 5 && LOBYTE(ActivityAttributes[17 * (int)a4]) == 1 )
    goto LABEL_3;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_BYTE *)(a1 + 125) == 1;
  *a5 = v8;
  if ( v9 )
  {
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v8);
    goto LABEL_3;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(a2);
  return 0;
}
