/*
 * XREFs of MiCheckLostBadPageNode @ 0x140667BF0
 * Callers:
 *     MiGetListOfPendingBadPages @ 0x140668070 (MiGetListOfPendingBadPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall MiCheckLostBadPageNode(unsigned __int64 a1)
{
  bool v2; // si
  __int64 Pool; // rax
  _QWORD *v4; // rdi
  KIRQL v5; // bp
  _QWORD *v6; // rax
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  bool v10; // zf

  v2 = 0;
  Pool = MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
  v4 = (_QWORD *)Pool;
  if ( !Pool )
    return Pool;
  v5 = ExAcquireSpinLockExclusive(&dword_140E2FC90);
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) == 0 )
    goto LABEL_18;
  v6 = (_QWORD *)qword_140E2FC80;
  if ( qword_140E2FC80 )
  {
    do
    {
      if ( a1 <= v6[3] )
      {
        if ( a1 >= v6[3] )
          break;
        v6 = (_QWORD *)*v6;
      }
      else
      {
        v6 = (_QWORD *)v6[1];
      }
    }
    while ( v6 );
    if ( v6 )
      goto LABEL_18;
  }
  v4[3] = a1;
  v7 = 0;
  v8 = (_QWORD *)qword_140E2FC80;
  if ( !qword_140E2FC80 )
    goto LABEL_17;
  while ( a1 < v8[3] )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_17;
LABEL_15:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_15;
  v7 = 1;
LABEL_17:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2FC80, (unsigned __int64)v8, v7, v4);
  v10 = qword_140E2FC98-- == 1;
  v4 = 0LL;
  v2 = v10;
LABEL_18:
  MiReleaseSpinLockExclusive(&dword_140E2FC90, v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  LOBYTE(Pool) = v2;
  return Pool;
}
