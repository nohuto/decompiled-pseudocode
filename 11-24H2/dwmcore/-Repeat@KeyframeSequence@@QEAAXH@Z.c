/*
 * XREFs of ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180154968
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1801540F0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x180154450 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Repeat(KeyframeSequence *this, int a2)
{
  KeyframeSequence *v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // r10
  void *retaddr; // [rsp+28h] [rbp+0h]

  KeyframeSequence::ConfigureTimer(this);
  KeyframeSequence::Play(v4);
  *((_DWORD *)this + 23) += a2;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 28);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 13);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 24 * v5 + 8) + 20LL) != 1
        && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v7 + 24 * v5 + 8) + 20LL) - 2) >= 2 )
      {
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v6 );
  }
}
