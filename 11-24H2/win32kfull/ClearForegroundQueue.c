/*
 * XREFs of ClearForegroundQueue @ 0x1401FA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140276340 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 */

void __noreturn ClearForegroundQueue()
{
  ResetForegroundQueue(0LL);
}
