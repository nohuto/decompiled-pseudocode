/*
 * XREFs of BgkpTryEnableConsole @ 0x1405903D0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C6FD78 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140E65DB1 )
  {
    if ( qword_140E65D70 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140E0A920, 0LL);
  }
  return result;
}
