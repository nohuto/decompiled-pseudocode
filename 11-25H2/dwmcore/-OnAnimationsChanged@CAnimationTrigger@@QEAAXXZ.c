/*
 * XREFs of ?OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ @ 0x180239A04
 * Callers:
 *     ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x180232F88 (-SetOrAppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResourc.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationTrigger::OnAnimationsChanged(CAnimationTrigger *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi

  *((_BYTE *)this + 128) &= ~2u;
  v2 = (_QWORD *)*((_QWORD *)this + 13);
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v2 != v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 64LL))(*v2, 59LL) )
    {
      *((_BYTE *)this + 128) |= 2u;
      break;
    }
    ++v2;
  }
  CResource::OnPropertyChanged(this);
}
