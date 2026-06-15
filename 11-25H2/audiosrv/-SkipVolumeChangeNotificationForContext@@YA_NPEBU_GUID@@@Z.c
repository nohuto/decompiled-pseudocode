/*
 * XREFs of ?SkipVolumeChangeNotificationForContext@@YA_NPEBU_GUID@@@Z @ 0x18001F148
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18001EC10 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SkipVolumeChangeNotificationForContext(const struct _GUID *a1)
{
  char result; // al
  __int64 v2; // rdx

  result = 0;
  if ( a1 )
  {
    v2 = *(_QWORD *)&a1->Data1 - PBM_INITIATED_ENDPOINT_VOLUME_CHANGE;
    if ( *(_QWORD *)&a1->Data1 == PBM_INITIATED_ENDPOINT_VOLUME_CHANGE )
      v2 = *(_QWORD *)a1->Data4 - 0x5936EC8617E85EAALL;
    if ( !v2 )
      return 1;
  }
  return result;
}
