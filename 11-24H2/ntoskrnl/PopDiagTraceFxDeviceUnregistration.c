/*
 * XREFs of PopDiagTraceFxDeviceUnregistration @ 0x14075485C
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDeviceUnregistration(__int64 a1, __int64 a2)
{
  char v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned __int16 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-9h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  __int64 v15; // [rsp+80h] [rbp+27h]
  _DWORD v16[2]; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  v8 = a1;
  PopFxAddLogEntry(a1, 0, 2, 0LL);
  if ( PopDiagHandleRegistered != v3 && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION) )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 8;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
  }
  _m_prefetchw((const void *)(a2 + 32));
  v4 = *(_DWORD *)(a2 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 1240) )
    {
      v6 = (unsigned __int16 *)(a2 + 1232);
    }
    else
    {
      if ( !*(_QWORD *)(v8 + 136) )
        return v4;
      v6 = (unsigned __int16 *)(v8 + 128);
    }
    if ( v6 )
    {
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
        if ( (_BYTE)v4 )
        {
          v14 = 0;
          v16[1] = 0;
          v19 = 0;
          v12 = v16;
          v15 = *((_QWORD *)v6 + 1);
          v16[0] = *v6;
          v17 = &v9;
          v13 = 2;
          v9 = 0x1000000LL;
          v18 = 8;
          LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                         (__int64)&dword_140E07680,
                         (unsigned __int8 *)word_140049FCA,
                         0LL,
                         0LL,
                         5u,
                         &v11);
        }
      }
    }
  }
  return v4;
}
