/*
 * XREFs of MiCreateIoPageExclusion @ 0x140669CD8
 * Callers:
 *     MiMapNewPfns @ 0x1407D97EC (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x14066A53C (MiIoPfnTreeExclusionCompatible.c)
 */

__int64 __fastcall MiCreateIoPageExclusion(_QWORD *a1, int a2)
{
  int v2; // edi
  unsigned __int8 CurrentIrql; // bp
  bool v5; // bl
  _QWORD *v6; // rcx
  int i; // esi
  int v8; // edi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( v2 )
    goto LABEL_10;
  v6 = (_QWORD *)xmmword_140E36FC0;
  if ( !(_QWORD)xmmword_140E36FC0 )
    goto LABEL_10;
  while ( a1[4] < v6[3] )
  {
    v6 = (_QWORD *)*v6;
LABEL_9:
    if ( !v6 )
      goto LABEL_10;
  }
  if ( a1[3] > v6[4] )
  {
    v6 = (_QWORD *)v6[1];
    goto LABEL_9;
  }
  if ( v6 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 3221225496LL;
  }
LABEL_10:
  MiLockIoPfnTree(6LL);
  for ( i = 0; i < 2; ++i )
  {
    v8 = MiIoPfnTreeExclusionCompatible((unsigned int)i, a1);
    if ( v8 < 0 )
      goto LABEL_17;
  }
  v9 = (_QWORD *)*((_QWORD *)&xmmword_140E36FC0 + 1);
  if ( !*((_QWORD *)&xmmword_140E36FC0 + 1) )
  {
LABEL_16:
    RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E36FC0 + 1, (unsigned __int64)v9, v5, a1);
    goto LABEL_17;
  }
  while ( 2 )
  {
    if ( a1[4] < v9[3] )
    {
      v10 = (_QWORD *)*v9;
      if ( !*v9 )
        goto LABEL_16;
LABEL_24:
      v9 = v10;
      continue;
    }
    break;
  }
  if ( a1[3] > v9[4] )
  {
    v10 = (_QWORD *)v9[1];
    if ( !v10 )
    {
      v5 = 1;
      goto LABEL_16;
    }
    goto LABEL_24;
  }
  v8 = -1073741800;
LABEL_17:
  MiUnlockIoPfnTree(CurrentIrql, 2);
  return (unsigned int)v8;
}
