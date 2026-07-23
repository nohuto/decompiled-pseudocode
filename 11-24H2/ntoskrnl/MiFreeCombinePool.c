/*
 * XREFs of MiFreeCombinePool @ 0x1403EE660
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPagedAddress @ 0x1403EE6C4 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCombinePool(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v3 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 88), v2);
  do
  {
    v4 = (_QWORD *)*v3;
    MiUnlockPagedAddress(v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v4;
  }
  while ( v4 );
}
