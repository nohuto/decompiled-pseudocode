/*
 * XREFs of ??1CLoginTransition@@QEAA@XZ @ 0x1800C8078
 * Callers:
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800EDC6C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003FDB8 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 */

void __fastcall CLoginTransition::~CLoginTransition(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
}
