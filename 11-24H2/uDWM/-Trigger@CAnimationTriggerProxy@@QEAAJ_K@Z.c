/*
 * XREFs of ?Trigger@CAnimationTriggerProxy@@QEAAJ_K@Z @ 0x180097B2C
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180059D44 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTriggerProxy::Trigger(CAnimationTriggerProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 520LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
