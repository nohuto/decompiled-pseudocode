/*
 * XREFs of NdisWriteEventLogEntry @ 0x1400708B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

NDIS_STATUS __stdcall NdisWriteEventLogEntry(
        PVOID LogHandle,
        NDIS_STATUS EventCode,
        ULONG UniqueEventValue,
        USHORT NumStrings,
        PVOID StringsList,
        ULONG DataSize,
        PVOID Data)
{
  NDIS_STATUS v7; // ebx
  __int64 v8; // rbp
  int v9; // r14d
  const struct _GUID *v12; // rdx
  __int16 **v13; // r15
  _WORD **v14; // r8
  __int64 v15; // r9
  _WORD *v16; // rax
  int i; // edx
  ULONG v18; // esi
  char v19; // dl
  unsigned __int16 *ErrorLogEntry; // rax
  unsigned __int16 *v21; // r14
  _WORD *v22; // rcx
  __int64 v23; // r8
  __int16 *v24; // rdx
  __int16 v25; // ax
  PVOID IoObject; // [rsp+70h] [rbp+8h]

  IoObject = LogHandle;
  v7 = 0;
  v8 = NumStrings;
  v9 = 0;
  v12 = &WPP_ae366525395e343a98801eaac4c5345b_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      0xDu,
      0x32u,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)LogHandle,
      EventCode,
      UniqueEventValue);
    LogHandle = IoObject;
    v12 = &WPP_ae366525395e343a98801eaac4c5345b_Traceguids;
  }
  v13 = (__int16 **)StringsList;
  if ( (_WORD)v8 )
  {
    v14 = (_WORD **)StringsList;
    v15 = v8;
    do
    {
      v16 = *v14;
      for ( i = 2; *v16; i += 2 )
        ++v16;
      v9 += i;
      ++v14;
      --v15;
    }
    while ( v15 );
    v12 = &WPP_ae366525395e343a98801eaac4c5345b_Traceguids;
  }
  v18 = DataSize;
  if ( (DataSize & 3) != 0 )
    v18 = DataSize - (DataSize & 3) + 4;
  if ( v9 + v18 <= 0xC4 )
  {
    v19 = 44;
    if ( v9 + v18 <= 4 )
      v19 = 48;
    ErrorLogEntry = (unsigned __int16 *)IoAllocateErrorLogEntry(
                                          LogHandle,
                                          (unsigned __int8)v9 + (unsigned __int8)v18 + v19);
    v21 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 4) = UniqueEventValue;
      *((_DWORD *)ErrorLogEntry + 3) = EventCode;
      ErrorLogEntry[2] = v8;
      ErrorLogEntry[3] = v18 + 44;
      ErrorLogEntry[1] = v18;
      if ( DataSize )
        memmove(ErrorLogEntry + 20, Data, DataSize);
      v22 = (unsigned __int16 *)((char *)v21 + v21[3]);
      if ( (_WORD)v8 )
      {
        v23 = v8;
        do
        {
          v24 = *v13;
          do
          {
            v25 = *v24++;
            *v22++ = v25;
          }
          while ( v25 );
          ++v13;
          --v23;
        }
        while ( v23 );
      }
      IoWriteErrorLogEntry(v21);
    }
    else
    {
      v7 = -1073741670;
    }
    v12 = &WPP_ae366525395e343a98801eaac4c5345b_Traceguids;
  }
  else
  {
    v7 = -1073676266;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v12,
      13,
      51,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids);
  }
  return v7;
}
