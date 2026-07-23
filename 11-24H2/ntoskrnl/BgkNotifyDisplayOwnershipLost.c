/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x14058CFA0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    qword_140E65EB8 = a1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64)BgkpResetDisplay);
  if ( dword_140E3EE58 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 516LL);
  return result;
}
