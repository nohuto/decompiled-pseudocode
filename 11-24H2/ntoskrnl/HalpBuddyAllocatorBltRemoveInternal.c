/*
 * XREFs of HalpBuddyAllocatorBltRemoveInternal @ 0x14039AD8C
 * Callers:
 *     HalpBuddyAllocatorBltFindAndPop @ 0x14039AC3C (HalpBuddyAllocatorBltFindAndPop.c)
 *     HalpBuddyAllocatorBltPopBuddy @ 0x14039AD1C (HalpBuddyAllocatorBltPopBuddy.c)
 *     HalpBuddyAllocatorBltRemove @ 0x140571C60 (HalpBuddyAllocatorBltRemove.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HalpBuddyAllocatorBltRemoveInternal(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax

  v1 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = (_QWORD *)a1[1], (_QWORD *)*result != a1) )
    __fastfail(3u);
  *result = v1;
  *(_QWORD *)(v1 + 8) = result;
  a1[1] = a1;
  *a1 = a1;
  return result;
}
