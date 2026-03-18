/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x14058FF80
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
    qword_140E65DA0 = a1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64)BgkpResetDisplay, a3, a4);
  if ( dword_140E3ED18 != 2 )
    return MmMapIoSpaceEx(655360LL, 0x20000LL, 0x204u);
  return result;
}
