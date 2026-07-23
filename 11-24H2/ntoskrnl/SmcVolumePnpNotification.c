/*
 * XREFs of SmcVolumePnpNotification @ 0x14079E450
 * Callers:
 *     <none>
 * Callees:
 *     SmcCacheDelete @ 0x14079D18C (SmcCacheDelete.c)
 *     SmcCacheDereference @ 0x14079D1E8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14079D438 (SmcCacheReference.c)
 */

__int64 __fastcall SmcVolumePnpNotification(_QWORD *NotificationStructure, char *Context)
{
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int v6; // edi
  _DWORD *v7; // r14
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
    goto LABEL_7;
  v5 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v5 )
  {
LABEL_7:
    v6 = 0;
    v7 = Context + 24;
    do
    {
      v8 = v6 | (16 * (*v7 & 0xFFF));
      v9 = SmcCacheReference((__int64)Context, v8);
      if ( v9 )
      {
        v10 = 0LL;
        if ( *(_QWORD *)(v9 + 48) == NotificationStructure[3] )
          v10 = v9;
        SmcCacheDereference((__int64)Context, v8);
        if ( v10 )
          SmcCacheDelete((__int64)Context);
      }
      ++v6;
      v7 += 8;
    }
    while ( v6 < 0x10 );
  }
  return 0LL;
}
