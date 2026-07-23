/*
 * XREFs of BvgaNotifyDisplayOwnershipLost @ 0x14058D740
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x14058D6E0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BvgaAcquireLock @ 0x14058D4C0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14058D7B0 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    BvgaAcquireLock();
    if ( BvgaDisplayState != 2 )
      VidCleanUp();
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
    return BvgaReleaseLock(v2);
  }
  else
  {
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
  }
  return result;
}
