/*
 * XREFs of PostShellHookMessages @ 0x1C013B310
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 */

void __fastcall PostShellHookMessages(unsigned int a1, __int64 a2)
{
  PostShellHookMessagesEx(a1, a2, 0LL);
}
