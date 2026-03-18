/*
 * XREFs of ?GetArgs@CIgnoreInputQueue@@EEBAJPEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x140136490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIgnoreInputQueue::GetArgs(CIgnoreInputQueue *this, struct COMPOSITION_INPUT_QUEUE *a2)
{
  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(CIgnoreInputQueue *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
