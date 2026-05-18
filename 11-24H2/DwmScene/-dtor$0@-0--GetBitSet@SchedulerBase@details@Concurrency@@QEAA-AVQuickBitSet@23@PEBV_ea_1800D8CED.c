/*
 * XREFs of ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_1 @ 0x1800D8CED
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 */

__int64 __fastcall `Concurrency::details::SchedulerBase::GetBitSet'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18004B71C(*(void ***)(a2 + 88));
  }
  return result;
}
