/*
 * XREFs of KiAllocateProcessorLookupStructures @ 0x1405B5C18
 * Callers:
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 KiAllocateProcessorLookupStructures()
{
  _OWORD *Pool2; // rax
  unsigned int v1; // ebx
  void *v2; // rdi
  _OWORD *v3; // rdx
  __int64 v4; // r9
  __int128 v5; // xmm1
  _DWORD *v6; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(0x48uLL);
  v1 = 0;
  v2 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = &unk_140F225E4;
  v4 = 2LL;
  do
  {
    *Pool2 = *v3;
    Pool2[1] = v3[1];
    Pool2[2] = v3[2];
    Pool2[3] = v3[3];
    Pool2[4] = v3[4];
    Pool2[5] = v3[5];
    Pool2[6] = v3[6];
    Pool2 += 8;
    v5 = v3[7];
    v3 += 8;
    *(Pool2 - 1) = v5;
    --v4;
  }
  while ( v4 );
  v6 = (_DWORD *)ExAllocatePool2(0x48uLL);
  if ( v6 )
  {
    *v6 = KiInitState;
    qword_140F21E78 = v2;
    KiGlobalState = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
