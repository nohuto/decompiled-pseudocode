/*
 * XREFs of ObGetCurrentIrql @ 0x140288400
 * Callers:
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 __fastcall ObGetCurrentIrql(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)KeAreInterruptsEnabled(a1, a2) )
    return KeGetCurrentIrql();
  else
    return 15;
}
