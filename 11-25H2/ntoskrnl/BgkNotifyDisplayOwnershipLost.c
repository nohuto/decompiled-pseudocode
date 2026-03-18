/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x14058C7A0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    qword_140E65B40 = a1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64)BgkpResetDisplay);
  if ( dword_140E3EAD8 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}
