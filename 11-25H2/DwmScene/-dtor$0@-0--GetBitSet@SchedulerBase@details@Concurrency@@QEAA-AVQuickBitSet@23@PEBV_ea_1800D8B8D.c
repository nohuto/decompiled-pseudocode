/*
 * XREFs of ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_1 @ 0x1800D8B8D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B5BC @ 0x18004B5BC (sub_18004B5BC.c)
 */

__int64 __fastcall `Concurrency::details::SchedulerBase::GetBitSet'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18004B5BC(*(void ***)(a2 + 88));
  }
  return result;
}
