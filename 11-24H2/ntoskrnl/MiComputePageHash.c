/*
 * XREFs of MiComputePageHash @ 0x140426970
 * Callers:
 *     MiArePagefileContentsCorrupted @ 0x140341C34 (MiArePagefileContentsCorrupted.c)
 *     MiWritePageFileHash @ 0x140426540 (MiWritePageFileHash.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r10
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  int v19; // ecx
  __int64 result; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int8 v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0;
  v8 = MiMapPageInHyperSpaceWorker(a2, &v23, 0);
  v9 = (_QWORD *)v8;
  v10 = *(_QWORD *)v8;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = *(_QWORD *)(v8 + 16);
  v13 = *(_QWORD *)(v8 + 24);
  do
  {
    v14 = v9[5];
    v9 += 4;
    v11 += v14;
    v15 = v9[2];
    v16 = v9[3];
    v12 += v15;
    v10 += *v9;
    v13 += v16;
  }
  while ( v9 != (_QWORD *)(v8 + 4064) );
  v17 = v16 + v15;
  v18 = v23;
  v22 = v10 + v14 + v17;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( (_BYTE)v18 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
    __writecr8(v18);
  }
  *(_DWORD *)(a1 + 4) = a4;
  v19 = v22 + HIDWORD(v22);
  if ( (unsigned int)(v22 + HIDWORD(v22)) < 3 )
    v19 = 3;
  *(_DWORD *)a1 = v19;
  result = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL;
  v21 = 0xFFFFF6FB7DBEDF68uLL;
  if ( result != a2 )
    v21 = a3;
  *(_QWORD *)(a1 + 8) = v21 | 1;
  return result;
}
