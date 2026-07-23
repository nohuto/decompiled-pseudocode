/*
 * XREFs of BgkpTryEnableConsole @ 0x14058D3F0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C71ED8 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140E65EE8 )
  {
    if ( qword_140E65EB0 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140E0A9A0, 0LL);
  }
  return result;
}
