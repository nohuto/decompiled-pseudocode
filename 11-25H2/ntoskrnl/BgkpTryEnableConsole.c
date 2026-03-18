/*
 * XREFs of BgkpTryEnableConsole @ 0x14058CBF0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C5E998 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140E65B52 )
  {
    if ( qword_140E65B08 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140E0A7E0, 0LL);
  }
  return result;
}
