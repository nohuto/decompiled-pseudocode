/*
 * XREFs of PopAdaptiveStandbyPowerSettingCallback @ 0x140761F00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall PopAdaptiveStandbyPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  size_t v4; // rsi
  struct _LIST_ENTRY *v8; // rax
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-49h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-41h] BYREF
  GUID *v13; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp-29h] BYREF
  LPCGUID v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  unsigned int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  PVOID v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]

  v4 = ValueLength;
  v13 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v8 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v13 = (GUID *)v8;
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    LOWORD(v11) = v4;
    v22 = (unsigned __int16)v4;
    v18 = &v11;
    v15 = SettingGuid;
    v16 = 16;
    v19 = 2;
    v21 = Value;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&word_14004D52E,
      &ActivityId,
      (const GUID *)v8,
      5u,
      v14);
  }
  PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
  if ( *(_QWORD *)&SettingGuid->Data1 == **(_QWORD **)Context
    && *(_QWORD *)SettingGuid->Data4 == *(_QWORD *)(*(_QWORD *)Context + 8LL)
    && (_DWORD)v4 == Context[3] )
  {
    memmove(&PopAdaptiveStandbyContext[Context[2]], Value, v4);
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    v17 = 0;
    v15 = (LPCGUID)&v11;
    v11 = v9;
    v16 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&qword_14004D500,
      &ActivityId,
      v13,
      3u,
      v14);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v13);
  return v9;
}
