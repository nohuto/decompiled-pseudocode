/*
 * XREFs of StorNotificationFindCallerContextByGuid @ 0x140138794
 * Callers:
 *     StorCancelStorageNotificationIrp @ 0x1401B1F64 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401B2020 (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401B2108 (StorDisableStorageNotification.c)
 *     StorEnableStorageNotification @ 0x1401B21D8 (StorEnableStorageNotification.c)
 *     StorGetStorageNotificationInfo @ 0x1401B23B8 (StorGetStorageNotificationInfo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall StorNotificationFindCallerContextByGuid(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v2 = (_QWORD *)(a1 + 8);
      v3 = *(_QWORD **)(a1 + 8);
      if ( v3 )
      {
        if ( v2[1] )
        {
          while ( v3 != v2 )
          {
            if ( v3[2] == *a2 && v3[3] == a2[1] )
              return v3;
            v3 = (_QWORD *)*v3;
          }
        }
      }
    }
  }
  return 0LL;
}
