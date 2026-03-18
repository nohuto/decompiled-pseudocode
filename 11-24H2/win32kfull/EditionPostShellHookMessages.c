/*
 * XREFs of EditionPostShellHookMessages @ 0x140067680
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 */

void __fastcall EditionPostShellHookMessages(LastWokenThread *a1, __int64 a2)
{
  PostShellHookMessagesEx(a1, a2);
}
