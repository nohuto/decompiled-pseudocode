/*
 * XREFs of PiGetTargetDeviceNode @ 0x1409BBE78
 * Callers:
 *     PiProcessQueryRemoveNoFdo @ 0x140737F94 (PiProcessQueryRemoveNoFdo.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1409BBCEC (PnpRecordBlackboxPnpEventInformation.c)
 *     PiCheckRemovalPreconditions @ 0x1409BC5EC (PiCheckRemovalPreconditions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiGetTargetDeviceNode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 160);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
