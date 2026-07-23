/*
 * XREFs of ExpWnfAllocateScopeMap @ 0x140901DA8
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfAllocateScopeMap(_QWORD *a1)
{
  __int64 Pool2; // rax
  _DWORD *v3; // rbx
  unsigned int v5; // ecx
  _QWORD *v6; // rax

  Pool2 = ExAllocatePool2(0x100uLL, 0xB0uLL, 0x20666E57u);
  v3 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 4), 0, 0xACuLL);
  v5 = 0;
  *v3 = 11536641;
  v6 = v3 + 10;
  do
  {
    v6[1] = v6;
    ++v5;
    *v6 = v6;
    *(v6 - 1) = 0LL;
    v6 += 3;
  }
  while ( v5 < 6 );
  *a1 = v3;
  return 0LL;
}
