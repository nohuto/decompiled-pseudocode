/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x14026B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     GreGetRedirectionEvent @ 0x140219C90 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rcx
  Gre::Base *v1; // rcx
  void *RedirectionEvent; // rax
  NTSTATUS v3; // ebx

  GreLockDwmState();
  if ( (unsigned int)IsCurrentProcessDwm(v0) && (RedirectionEvent = (void *)GreGetRedirectionEvent(v1)) != 0LL )
    v3 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v3 = -1073741790;
  GreUnlockDwmState();
  return (unsigned __int64)(unsigned int)~v3 >> 31;
}
