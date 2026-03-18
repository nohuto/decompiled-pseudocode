/*
 * XREFs of PspPrepareEnclaveThreadWait @ 0x140AC2638
 * Callers:
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspPrepareEnclaveThreadWait(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx

  if ( !*(_DWORD *)(a1 + 40) )
    return 3221226770LL;
  Pool2 = ExAllocatePool2(0x41uLL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(Pool2 + 16), SynchronizationEvent, 0);
  v7 = *(_QWORD **)(a1 + 64);
  if ( *v7 != a1 + 56 )
    __fastfail(3u);
  *v6 = a1 + 56;
  v6[1] = v7;
  *v7 = v6;
  *(_QWORD *)(a1 + 64) = v6;
  result = 0LL;
  *a2 = v6;
  return result;
}
