/*
 * XREFs of MiCreateIoPageExclusion @ 0x140676908
 * Callers:
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x14067716C (MiIoPfnTreeExclusionCompatible.c)
 */

__int64 __fastcall MiCreateIoPageExclusion(_QWORD *a1, unsigned __int64 a2)
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
    goto LABEL_11;
  v6 = (_QWORD *)xmmword_140E37340;
  if ( !(_QWORD)xmmword_140E37340 )
    goto LABEL_11;
  a2 = a1[4];
  while ( a2 < v6[3] )
  {
    v6 = (_QWORD *)*v6;
LABEL_10:
    if ( !v6 )
      goto LABEL_11;
  }
  if ( a1[3] > v6[4] )
  {
    v6 = (_QWORD *)v6[1];
    goto LABEL_10;
  }
  if ( v6 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 3221225496LL;
  }
LABEL_11:
  MiLockIoPfnTree(6LL, a2);
  for ( i = 0; i < 2; ++i )
  {
    v8 = MiIoPfnTreeExclusionCompatible((unsigned int)i, a1);
    if ( v8 < 0 )
      goto LABEL_18;
  }
  v9 = (_QWORD *)*((_QWORD *)&xmmword_140E37340 + 1);
  if ( !*((_QWORD *)&xmmword_140E37340 + 1) )
  {
LABEL_17:
    RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E37340 + 1, (unsigned __int64)v9, v5, a1);
    goto LABEL_18;
  }
  while ( 2 )
  {
    if ( a1[4] < v9[3] )
    {
      v10 = (_QWORD *)*v9;
      if ( !*v9 )
        goto LABEL_17;
LABEL_25:
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
      goto LABEL_17;
    }
    goto LABEL_25;
  }
  v8 = -1073741800;
LABEL_18:
  MiUnlockIoPfnTree(CurrentIrql, 2);
  return (unsigned int)v8;
}
