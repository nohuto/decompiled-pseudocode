/*
 * XREFs of MiInitializeHugeIoRanges @ 0x1407EB654
 * Callers:
 *     MiInitializeNuma @ 0x140669F98 (MiInitializeNuma.c)
 * Callees:
 *     MiWriteHugePfnColorHeadCore @ 0x1404F8F70 (MiWriteHugePfnColorHeadCore.c)
 */

void __fastcall MiInitializeHugeIoRanges(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r10
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v1 = *(_QWORD *)(a1 + 14984);
  v2 = a1;
  v3 = (unsigned int)dword_140E2DD00[0];
  v4 = 2LL;
  v5 = a1 + 15072;
  v6 = *(_QWORD **)(v1 + 16656);
  v7 = 16LL * (*(_WORD *)v1 & 0x7FF);
  v8 = (_QWORD *)(v2 + 15040);
  v9 = v7 | 1;
  do
  {
    if ( (_DWORD)v3 )
    {
      do
      {
        MiWriteHugePfnColorHeadCore(v6, v9);
        v6 = (_QWORD *)(v10 + 8);
      }
      while ( v11 != 1 );
    }
    v8[1] = v5;
    *v8 = v3;
    v9 = v9 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    v5 += 32LL;
    v8 += 2;
    --v4;
  }
  while ( v4 );
  MiWriteHugePfnColorHeadCore((_QWORD *)(v2 + 15136), v9 & 0xFFFFFFFFFFFFFFF8uLL | 4);
}
