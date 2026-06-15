/*
 * XREFs of ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14001DDA4
 * Callers:
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x14001D9C0 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x14001DAA0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EB60 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioPump::CancelTimer(CAudioPump *this, void *a2)
{
  if ( a2 )
  {
    CancelWaitableTimer(a2);
    WaitForSingleObject(a2, 0);
  }
}
