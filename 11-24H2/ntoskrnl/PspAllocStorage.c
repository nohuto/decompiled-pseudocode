/*
 * XREFs of PspAllocStorage @ 0x140A6D664
 * Callers:
 *     PspCreateSilo @ 0x140A6D570 (PspCreateSilo.c)
 *     PspInitializeSiloStructures @ 0x140C37AF4 (PspInitializeSiloStructures.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAllocStorage(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(0x48uLL, 0x240uLL, 0x74537350u);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v4 = 32LL;
  do
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2 += 2;
    --v4;
  }
  while ( v4 );
  v3[64] = 0LL;
  result = 0LL;
  *a1 = v3;
  return result;
}
