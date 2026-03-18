/*
 * XREFs of AddObjSymbol @ 0x1400411D0
 * Callers:
 *     Method @ 0x140041060 (Method.c)
 * Callees:
 *     <none>
 */

void __fastcall AddObjSymbol(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // dl

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1399614785LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = a1;
    Pool2[3] = a2;
    v6 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    if ( P )
    {
      v5[1] = P;
      *(_QWORD *)P = v5;
    }
    P = v5;
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v6);
  }
}
