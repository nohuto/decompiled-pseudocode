/*
 * XREFs of EtwpCoverageFreeStringBuffers @ 0x14079B9A0
 * Callers:
 *     EtwpCoverageReset @ 0x14079BA4C (EtwpCoverageReset.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageFreeStringBuffers(__int64 a1, int a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rax

  v2 = (_QWORD *)(a1 + 48);
  v4 = *(_QWORD **)(a1 + 48);
  while ( v4 != v2 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( a2 && v6 == *(_QWORD **)(a1 + 40) )
    {
      memset_0(v6 + 5, 0, v6[2] - (_QWORD)v6 - 40LL);
      v6[3] = v6 + 5;
      v6[4] = v6 + 5;
    }
    else
    {
      if ( (_QWORD *)v4[1] != v6 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      ExFreePoolWithTag(v6, 0x56777445u);
    }
  }
}
