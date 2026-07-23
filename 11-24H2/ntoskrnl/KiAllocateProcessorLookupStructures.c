/*
 * XREFs of KiAllocateProcessorLookupStructures @ 0x1405B2EE0
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiAllocateProcessorLookupStructures(unsigned int a1)
{
  __int64 v1; // rsi
  _OWORD *Pool2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  _OWORD *v5; // rdx
  __int64 v6; // r9
  __int128 v7; // xmm1
  _DWORD *v8; // rax

  v1 = a1;
  Pool2 = (_OWORD *)ExAllocatePool2(0x48uLL, 4LL * ((unsigned __int16)KiMaximumGroups << 6), 0x2020654Bu);
  v3 = 0;
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v5 = &unk_140F227C4;
  v6 = 2LL;
  do
  {
    *Pool2 = *v5;
    Pool2[1] = v5[1];
    Pool2[2] = v5[2];
    Pool2[3] = v5[3];
    Pool2[4] = v5[4];
    Pool2[5] = v5[5];
    Pool2[6] = v5[6];
    Pool2 += 8;
    v7 = v5[7];
    v5 += 8;
    *(Pool2 - 1) = v7;
    --v6;
  }
  while ( v6 );
  v8 = (_DWORD *)ExAllocatePool2(0x48uLL, 4 * v1, 0x2020654Bu);
  if ( v8 )
  {
    *v8 = KiInitState;
    qword_140F22998 = v4;
    KiGlobalState = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
